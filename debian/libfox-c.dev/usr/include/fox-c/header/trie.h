#ifndef TRIE_H
#define TRIE_H

#include <unordered_map>
#include <string>

namespace foxc {

    class Trie {
    private:
        struct TrieNode {
            std::unordered_map<char, TrieNode*> children;
            bool isEndOfWord = false;
        };

        TrieNode* root;

    public:
        Trie() { root = new TrieNode(); }

        void insert(const std::string& word) {
            TrieNode* current = root;
            for (char ch : word) {
                if (current->children.find(ch) == current->children.end()) {
                    current->children[ch] = new TrieNode();
                }
                current = current->children[ch];
            }
            current->isEndOfWord = true;
        }

        bool search(const std::string& word) {
            TrieNode* current = root;
            for (char ch : word) {
                if (current->children.find(ch) == current->children.end()) {
                    return false;
                }
                current = current->children[ch];
            }
            return current->isEndOfWord;
        }
    };

} // namespace foxc

#endif // TRIE_H