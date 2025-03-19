#ifndef GARBAGE_COLLECTOR_H
#define GARBAGE_COLLECTOR_H

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

namespace foxc {

    // Global list of allocated pointers
    std::vector<void*> allocatedPointers;

    // Custom allocation function (to track pointers)
    template <typename T>
    T* allocate() {
        T* ptr = new T;
        allocatedPointers.push_back(static_cast<void*>(ptr));
        return ptr;
    }

    // Custom deallocation function (if user manually wants to free)
    template <typename T>
    void deallocate(T* ptr) {
        void* voidPtr = static_cast<void*>(ptr);

        // Corrected std::remove usage
        allocatedPointers.erase(
            std::remove(allocatedPointers.begin(), allocatedPointers.end(), voidPtr),
            allocatedPointers.end()
        );

        delete ptr;
    }

    // Automatically clean up unfreed pointers at program exit
    void cleanup() {
        for (void* ptr : allocatedPointers) {
            delete static_cast<char*>(ptr);  // Assume it's a char* (safe cast for all types)
        }
        allocatedPointers.clear();
        std::cout << "[Fox-C Garbage Collector] Cleaned up all unfreed memory.\n";
    }

} // namespace foxc

// Auto-run garbage collector at exit
struct GarbageCollector {
    ~GarbageCollector() {
        foxc::cleanup();
    }
} garbageCollectorInstance;

// Macro to enable automatic allocation tracking
#define ALLOCATE_MEMORY
#endif // GARBAGE_COLLECTOR_H
