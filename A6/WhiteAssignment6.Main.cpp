#include <iostream>
#include "BSTree.hpp"


int main() {
	std::cout << "Welcome to Peyton's Recursion machine \n";

	BSTree<int> tree;

	int size;
	std::cout << "How many values do you want to insert?: ";
	std::cin >> size;

	for (int i = 0; i < size; i++) {
		int num;
		std::cout << i + 1 << ": ";
		std::cin >> num;
		tree.insert(num);

	}

	tree.preorder();
	tree.postorder();
	tree.inorder();
	tree.height();
	std::cout << "\n";
	std::cout << "Thank you Peyton's recursion machine \n";



	system("pause");
	return 0;

}