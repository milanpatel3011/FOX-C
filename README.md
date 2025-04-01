# Fox-C Library

Fox-C is a custom C++ utility library designed to simplify coding with enhanced features for mathematics, data structures, algorithms, and more. The library provides user-friendly functions for quick and efficient development.

## Features
- **Mathematics**: Factorial, Fibonacci, Power, GCD, LCM, Prime checks, Sum of digits.
- **Conditional Matching**: Type-based pattern matching for various data types.
- **Data Structures**: Stack, Queue, Linked List, Binary Search Tree, Priority Queue.
- **Looping Utilities**: `fl(1, n)` and `fl(n, 1)` macros for simplified loops.
- **Randomization**: Random number generation and shuffling.
- **Sorting Algorithms**: Merge Sort and array utilities.
- **String Utilities**: Trimming, splitting, and string manipulations.
- **Performance Timing**: Timer utility for benchmarking code execution.
- **Garbage Collection**: Automatic cleanup to prevent memory leaks.
- **Trie and Union-Find**: Efficient implementations for string searches and disjoint-set operations.

## Installation
To use the Fox-C library, follow these steps:

1. Clone the repository or download the `foxC.h` file.
```sh
sudo add-apt-repository ppa:milanp3011/foxc
sudo apt update
sudo apt install libfoxc-dev
```
2. Include `foxC.h` in your C++ project:
```cpp
#include <fox-c/foxC.h>
```
3. For convenience, you can use:
```cpp
using namespace foxc;
```
This allows you to call functions directly without `foxc::` prefix.

---

## Usage

Include Fox-C in your C++ project by adding:

```cpp
#include <fox-c/foxC.h>
using namespace foxc;
```
## Compilation & Execution

```cpp
g++ your_program.cpp -lfox-c -o output
./output
```

### **Output Macros**
Fox-C provides two main functions to display output:
- **`run()`** → Outputs values without labels.
- **`runxt()`** → Outputs values with custom labels.

Example:
```cpp
run("Hello, World!"); 
runxt("Factorial of 5 is: ", fact(5));
```

---

## Features and Examples

### **1. Mathematical Functions**
```cpp
runxt("Factorial(n): ", fact(n));
runxt("Fibonacci(n): ", fib(n));
runxt("Power(n^m): ", power(n, m));
runxt("Fast Power(n^m): ", fast_power(n, m));
runxt("GCD(n, m): ", gcd(n, m));
runxt("LCM(n, m): ", lcm(n, m));
runxt("Is Prime(n): ", (is_prime(n) ? "Yes" : "No"));
runxt("Sum of Digits(n): ", sum_of_digits(n));
```

### **2. Conditional Matching**
```cpp
match(n);           // Matches positive integer
match(-n);          // Matches negative integer
match("hello");     // Matches alphabetic string
match(true);        // Matches boolean
match('#');         // Matches special character
```

### **3. Data Structures**
#### **Stack**
```cpp
Stack<int> stack;
stack.push(n);
stack.push(n+1);
stack.push(n+2);
stack.print();
stack.pop();
stack.print();
```

#### **Queue**
```cpp
Queue<int> queue;
queue.enqueue(n);
queue.enqueue(n+5);
queue.enqueue(n+10);
queue.print();
queue.dequeue();
queue.print();
```

#### **Linked List**
```cpp
LinkedList<int> list;
list.append(n);
list.append(n+1);
list.append(n+2);
list.print();
list.deleteNode(n+1);
list.print();
```

#### **Binary Search Tree**
```cpp
BinarySearchTree<int> bst;
bst.insert(n);
bst.insert(n+10);
bst.insert(n-5);
bst.inorder();
```

### **4. Looping Simplifications**
```cpp
fl(1, n) {
    run(i, " ");
}
fl(n, 1) {
    run(i, " ");
}
```

### **5. Priority Queue (Heap)**
```cpp
PriorityQueue<int> maxHeap;
maxHeap.push(n);
maxHeap.push(n+10);
maxHeap.push(n+20);
while (!maxHeap.empty()) {
    runxt("Top element: ", maxHeap.top());
    maxHeap.pop();
}
```

### **6. Random Number Generation**
```cpp
runxt("Random number between 1 and n: ", randomInt(1, n));
```

### **7. Sorting Algorithms**
```cpp
std::vector<int> arr = {n, n-2, n+3, n+1, n-1};
mergeSort(arr, 0, arr.size() - 1);
printArray(arr);
```

### **8. String Utilities**
```cpp
std::string trimmedStr = foxc::trim("  Hello, world!  ");
runxt("Trimmed String: ", trimmedStr);

std::vector<std::string> words = foxc::split("apple,orange,banana", ',');
for (const auto& word : words) run(word, " ");
```

### **9. Timer Utility**
```cpp
foxc::Timer timer;
fl(0, n) {
    int temp = 0;
    temp += i;
}
runxt("Elapsed Time: ", timer.elapsed(), " seconds");
```

### **10. Trie Data Structure**
```cpp
foxc::Trie trie;
trie.insert("hello");
trie.insert("world");
runxt(trie.search("hello") ? "Found 'hello'" : "'hello' not found");
```

### **11. Union-Find Algorithm**
```cpp
foxc::UnionFind uf(n);
uf.unite(0, 1);
uf.unite(1, 2);
runxt(uf.find(0) == uf.find(2) ? "0 and 2 are connected" : "0 and 2 are not connected");
```

---

## **Garbage Collection and Memory Management**
Fox-C ensures efficient memory management by:
- **Automatic Cleanup**: Data structures like `Stack`, `Queue`, and `LinkedList` automatically deallocate memory upon destruction.
- **Smart Pointers**: Internally, smart pointers are used where necessary to avoid memory leaks.
- **Explicit `clear()` Method**: Manually free memory when needed.

Example:
```cpp
stack.clear(); // Frees memory used by the stack
queue.clear();
list.clear();
```

---

## **License**
Fox-C is an open-source project under the **MIT License**. Feel free to contribute and improve the library.

For questions or contributions, contact **Milan Patel** at **milanrpatel30@gmail.com**.

---

🚀 **Start coding with Fox-C today!**

### **What’s Improved?**
✅ **Replaced Hardcoded Values** with `n`, `m`, etc., for clarity.  
✅ **Added `run()` and `runxt()` Usage** to explain their differences.  
✅ **Explained `using namespace foxc;`** for ease of use.  
✅ **Described Garbage Collection & Memory Management** to reassure users.  
✅ **Overall, made it more professional and well-structured.**  

Let me know if you need any tweaks! 🚀🔥
