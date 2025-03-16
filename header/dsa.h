#ifndef DSA_H
#define DSA_H

#include <iostream>
#include <stack>
#include <queue>

namespace foxc {

    // Stack implementation
    template <typename T>
    class Stack {
    private:
        std::stack<T> stk;

    public:
        void push(const T& value) {
            stk.push(value);
        }

        void pop() {
            if (!stk.empty()) {
                stk.pop();
            } else {
                std::cout << "Stack is empty!" << std::endl;
            }
        }

        T top() {
            if (!stk.empty()) {
                return stk.top();
            } else {
                std::cout << "Stack is empty!" << std::endl;
                return T(); // Return default value
            }
        }

        bool empty() {
            return stk.empty();
        }

        void print() {
            std::stack<T> temp = stk;
            while (!temp.empty()) {
                std::cout << temp.top() << " ";
                temp.pop();
            }
            std::cout << std::endl;
        }
    };

    // Queue implementation
    template <typename T>
    class Queue {
    private:
        std::queue<T> q;

    public:
        void enqueue(const T& value) {
            q.push(value);
        }

        void dequeue() {
            if (!q.empty()) {
                q.pop();
            } else {
                std::cout << "Queue is empty!" << std::endl;
            }
        }

        T front() {
            if (!q.empty()) {
                return q.front();
            } else {
                std::cout << "Queue is empty!" << std::endl;
                return T(); // Return default value
            }
        }

        bool empty() {
            return q.empty();
        }

        void print() {
            std::queue<T> temp = q;
            while (!temp.empty()) {
                std::cout << temp.front() << " ";
                temp.pop();
            }
            std::cout << std::endl;
        }
    };

    // Node structure for Linked List
    template <typename T>
    struct Node {
        T data;
        Node<T>* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    // Linked List implementation
    template <typename T>
    class LinkedList {
    private:
        Node<T>* head;

    public:
        LinkedList() : head(nullptr) {}

        void append(const T& value) {
            Node<T>* newNode = new Node<T>(value);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node<T>* temp = head;
                while (temp->next) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        void deleteNode(const T& value) {
            if (head == nullptr) {
                std::cout << "List is empty!" << std::endl;
                return;
            }

            if (head->data == value) {
                Node<T>* temp = head;
                head = head->next;
                delete temp;
                return;
            }

            Node<T>* temp = head;
            while (temp->next && temp->next->data != value) {
                temp = temp->next;
            }

            if (temp->next) {
                Node<T>* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            } else {
                std::cout << "Node not found!" << std::endl;
            }
        }

        void print() {
            if (head == nullptr) {
                std::cout << "List is empty!" << std::endl;
                return;
            }

            Node<T>* temp = head;
            while (temp) {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            std::cout << std::endl;
        }

        ~LinkedList() {
            while (head) {
                Node<T>* temp = head;
                head = head->next;
                delete temp;
            }
        }
    };

    // Binary Search Tree (BST) implementation
    template <typename T>
    class BinarySearchTree {
    private:
        struct TreeNode {
            T data;
            TreeNode* left;
            TreeNode* right;

            TreeNode(T val) : data(val), left(nullptr), right(nullptr) {}
        };

        TreeNode* root;

        void insert(TreeNode*& node, const T& value) {
            if (node == nullptr) {
                node = new TreeNode(value);
            } else if (value < node->data) {
                insert(node->left, value);
            } else {
                insert(node->right, value);
            }
        }

        void inorder(TreeNode* node) {
            if (node != nullptr) {
                inorder(node->left);
                std::cout << node->data << " ";
                inorder(node->right);
            }
        }

    public:
        BinarySearchTree() : root(nullptr) {}

        void insert(const T& value) {
            insert(root, value);
        }

        void inorder() {
            inorder(root);
            std::cout << std::endl;
        }

        ~BinarySearchTree() {
            // Clean up memory (not implemented for brevity)
        }
    };

} // namespace foxc

#endif // DSA_H
