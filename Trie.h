//Module_14_Yurkina_Marya
#pragma once
#define ALPHABET_SIZE 26
#include <string>

struct TrieNode
{
	struct TrieNode* children[ALPHABET_SIZE];
	bool isEndOfWord;
};

TrieNode* getNewNode(void);

void insert(TrieNode* root, std::string key);
bool autocomplete(TrieNode* root, std::string str);
