#include <iostream>
#include "foxC.h"
#include <vector> 


using namespace foxc;

void printNumber(int n) {
    runxt("Number:", n);
}

int main() {
    /*
    math.h
    runxt("Factorial(5): ", fact(5));
    runxt("Fibonacci(10): ", fib(10));
    runxt("Power(2^5): ", power(2, 5));
    runxt("Fast Power(2^10): ", fast_power(2, 10));
    runxt("GCD(48, 18): ", gcd(48, 18));
    runxt("LCM(12, 15): ", lcm(12, 15));
    runxt("Is Prime(29): ", (is_prime(29) ? "Yes" : "No"));
    runxt("Sum of Digits(1234): ", sum_of_digits(1234));
    */

    /*
    conditional.h
    match(0);          // Matched zero
    match(42);         // Matched positive integer: 42
    match(-7);         // Matched negative integer: -7
    match(3.14);       // Matched positive float: 3.14
    match(-0.5);       // Matched negative float: -0.5
    match("");         // Matched empty string
    match("123");      // Matched numeric string
    match("hello");    // Matched alphabetic string
    match("h3ll0!");   // Matched mixed or special string
    match(true);       // Matched boolean: true
    match('A');        // Matched alphabetic character: A
    match('9');        // Matched digit character: 9
    match('#');        // Matched special character: #

    */
    
    /* //DSA

    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    run("Stack: ");
    stack.print();
    stack.pop();
    run("After pop: ");
    stack.print();

    runxt();

    // Queue example
    Queue<int> queue;
    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);
    std::cout << "Queue: ";
    queue.print();
    queue.dequeue();
    run("After dequeue: ");
    queue.print();

    // Linked List example
    LinkedList<int> list;
    list.append(5);
    list.append(10);
    list.append(15);
    std::cout << "Linked List: ";
    list.print();
    list.deleteNode(10);
    run("After deletion: ");
    list.print();

    // Binary Search Tree example
    BinarySearchTree<int> bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);
    run("Binary Search Tree (In-order): ");
    bst.inorder();

    */

    /*for loop
    runxt("Using loop function:");
    foxc::loop(1, 5, [](int i) { run(i, " "); });
    runxt();  

    runxt("Using loop function in reverse:");
    foxc::loop(5, 1, [](int i) { run(i, " "); });
    runxt(); 

    runxt("Using loop function with a function pointer:");
    foxc::loop(1, 3, printNumber);

    runxt("Using fl macro (1 to 5):");
    fl(1, 5) {
        run(i, " ");
    }
    runxt();  

    runxt("Using fl macro in reverse (5 to 1):");
    fl(5, 1) {
        run(i, " ");
    }
    runxt();  
    */

    /*
    //PRIORITY QUE..

    runxt("Creating a max heap (default priority queue)");
    foxc::PriorityQueue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    runxt("Max Heap (highest priority first):");
    while (!maxHeap.empty()) {
        runxt(maxHeap.top());
        maxHeap.pop();
    }

    runxt("Creating a min heap (using std::greater)");
    foxc::PriorityQueue<int, std::greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    runxt("Min Heap (lowest priority first):");
    while (!minHeap.empty()) {
        runxt(minHeap.top());
        minHeap.pop();
    }
    */


    /* RANDOM NUM

    runxt("Generating 5 random numbers between 1 and 100:");
    for (int i = 0; i < 5; i++) {
        runxt(randomInt(1, 100));
    }

    // Shuffle a vector
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    runxt("Original vector:");
    runxt(numbers);

    shuffle(numbers);
    
    runxt("Shuffled vector:");
    runxt(numbers);

    */


    /* RANGE

    runxt("Using fl to loop from 1 to 10:");
    fl(1, 10) {  // Loop from 1 to 10
        run(i, " ");
    }
    runxt(); // New line

    // Using fl macro for loop from 5 to 15 with step 2
    runxt("Using fl to loop from 5 to 15 with step 2:");
    fl(5, 15) {  // Loop from 5 to 15
        if (i % 2 == 1) { // Check odd numbers only
            run(i, " ");
        }
    }
    runxt(); // New line

    // Using fl for reverse range (15 to 5)
    runxt("Using fl to loop reverse from 15 to 5:");
    fl(15, 5) {  // Loop from 15 to 5 in reverse
        run(i, " ");
    }
    runxt(); // New line

    */

    /*
    // Shorting

    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    runxt("Original Array:");
    foxc::printArray(arr); // Print original array

    foxc::mergeSort(arr, 0, arr.size() - 1);

    runxt("Sorted Array:");
    foxc::printArray(arr); // Print sorted array
    */

    /* string
    std::string str = "  Hello,  world!  ";
    std::string trimmedStr = foxc::trim(str);
    runxt("Trimmed String: ", trimmedStr);

    std::string sentence = "apple,orange,banana,grape";
    std::vector<std::string> fruits = foxc::split(sentence, ',');
    
    runxt("Fruits after splitting:");
    for (const auto& fruit : fruits) {
        run(fruit, " ");
    }
    runxt();
    */


    /* TRIE
    foxc::Trie trie;
    
    // Inserting words into the Trie
    trie.insert("hello");
    trie.insert("world");
    
    // Searching for words
    runxt(trie.search("hello") ? "Found 'hello'" : "'hello' not found");
    runxt(trie.search("world") ? "Found 'world'" : "'world' not found");
    runxt(trie.search("hell") ? "Found 'hell'" : "'hell' not found");  // Should be false

    */

    /* UNION
    foxc::UnionFind uf(5);  // Create UnionFind for 5 elements (0, 1, 2, 3, 4)

    // Union some sets
    uf.unite(0, 1);
    uf.unite(1, 2);
    uf.unite(3, 4);

    // Find the roots of some elements
    runxt(uf.find(0) == uf.find(2) ? "0 and 2 are connected" : "0 and 2 are not connected");
    runxt(uf.find(0) == uf.find(4) ? "0 and 4 are connected" : "0 and 4 are not connected");

    */
    return 0;
}
