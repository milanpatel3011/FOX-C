#ifndef TIME_H
#define TIME_H

#include <chrono>

namespace foxc {

    class Timer {
    private:
        std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
    public:
        Timer() { startTime = std::chrono::high_resolution_clock::now(); }
        void reset() { startTime = std::chrono::high_resolution_clock::now(); }
        double elapsed() const {
            auto endTime = std::chrono::high_resolution_clock::now();
            return std::chrono::duration<double>(endTime - startTime).count();
        }
    };

} // namespace foxc

#endif // TIME_H