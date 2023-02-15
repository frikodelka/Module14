//Module_14_Yurkina_Marya
#include <iostream>
#include <string>
#include "Trie.h"

TrieNode* getNewNode(void)
{
    struct TrieNode *nNode = new TrieNode;
    nNode->isEndOfWord = false;
    for (int i = 0; i < ALPHABET_SIZE; i++)
        nNode->children[i] = nullptr;
    return nNode;
}

void insert(TrieNode* root, std::string key)
{
	struct TrieNode* node = root;
	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!node->children[index])
			node->children[index] = getNewNode();

		node = node->children[index];
	}
	node->isEndOfWord = true;
}

void prefix(struct TrieNode* root, std::string currentPrefix)
{
    if (root->isEndOfWord)
        std::cout << currentPrefix << "\n";

    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (root->children[i]) {
            char buf = 'a' + i;
            prefix(root->children[i], currentPrefix + buf);
        }
}


bool autocomplete(TrieNode* root, const std::string str)
{
    struct TrieNode* newNode = root;
    for (int i = 0; i < str.length(); i++) 
    {
        int index = str[i] - 'a';

        if (!newNode->children[index])
        {
            return false;
        }

        newNode = newNode->children[index];
    }
    prefix(newNode, str);
    return true;
}
