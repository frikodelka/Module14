//Module_14_Yurkina_Marya
#include <iostream>
#include <string>
#include "Trie.h"

int main()
{

	TrieNode* root = getNewNode();

	insert(root, "am");
	insert(root, "and");
	insert(root, "any");
	insert(root, "are");

	insert(root, "can");
	insert(root, "come");

	insert(root, "go");
	insert(root, "get");
	insert(root, "give");

	insert(root, "hi");
	insert(root, "hello");

	insert(root, "it");
	insert(root, "if");

	insert(root, "look");
	insert(root, "love");
	insert(root, "like");
	insert(root, "light");

	insert(root, "me");
	insert(root, "make");
	insert(root, "many");

	insert(root, "see");
	insert(root, "she");
	insert(root, "say");

	insert(root, "take");
	insert(root, "they");
	insert(root, "them");
	insert(root, "thank");
	insert(root, "think");

	insert(root, "who");
	insert(root, "what");
	insert(root, "when");
	insert(root, "which");

	std::cout << "\033[96m" << "Enter part of word | Press '+' for test | Press '!' for exit\n";
	std::string user_string = "";
	std::cout << "\033[37m";
	std::cin >> user_string;

	while (user_string[0] != '!')
	{
		std::cout << "\033[92m";

		if (user_string[0] >= 'a' && user_string[0] <= 'z')
		{
			int output = autocomplete(root, user_string);
			if (output == false)
			{
				std::cout << "\033[91m" << "No strings with this prefix were found\n";
			}
		}
		else
		{
			std::cout << "\033[91m" << "Enter the string from 'a' to 'z'\n";
		}

		if (user_string[0] == '+')
		{
			std::cout << "\033[96m" << "Test:\n";
			std::string test_string_1 = "a";
			std::string test_string_2 = "am";
			std::string test_string_3 = "an";
			std::string test_string_4 = "b";
			std::cout << "\033[97m" << test_string_1 << "\n" << "\033[92m";
			int test1 = autocomplete(root, test_string_1);
			if (test1 == false)
			{
				std::cout << "\033[91m" << "No strings with this prefix were found\n";
			}
			std::cout << "\033[97m" << test_string_2 << "\n" << "\033[92m";
			int test2 = autocomplete(root, test_string_2);
			if (test2 == false)
			{
				std::cout << "\033[91m" << "No strings with this prefix were found\n";
			}
			std::cout << "\033[97m" << test_string_3 << "\n" << "\033[92m";
			int test3 = autocomplete(root, test_string_3);
			if (test3 == false)
			{
				std::cout << "\033[91m" << "No strings with this prefix were found\n";
			}
			std::cout << "\033[97m" << test_string_4 << "\n" << "\033[92m";
			int test4 = autocomplete(root, test_string_4);
			if (test4 == false)
			{
				std::cout << "\033[91m" << "No strings with this prefix were found\n";
			}
		}

		std::cout << "\033[96m"  << "Enter part of word | Press '+' for test | Press '!' for exit\n";
		std::cout << "\033[37m";
		std::cin >> user_string;
	}

	return 0;
}