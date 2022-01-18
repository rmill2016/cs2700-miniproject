

//#include <iostream>
#include "Item.hpp"
#include "BST.hpp"

int main() {

	Item tItem = Item("Dave", "Some random bloke", "Over 9,999 (bananas)", 5);
	/*std::cout << "Name: " << tItem.name << std::endl;
	std::cout << "Description: " << tItem.description << std::endl;
	std::cout << "Weight: " << tItem.weight << std::endl;
	std::cout << "Quantity: " << tItem.quantity << std::endl;*/
	/*Node<std::string, Item> tNode = Node<std::string, Item>(tItem.name, tItem);
	std::cout << "Name: " << tNode.value.name << std::endl;
	std::cout << "Description: " << tNode.value.description << std::endl;
	std::cout << "Weight: " << tNode.value.weight << std::endl;
	std::cout << "Quantity: " << tNode.value.quantity << std::endl;*/
	BST<std::string, Item> t_bst = BST<std::string, Item>();
	t_bst.insert(t_bst.root, tItem.name, tItem);
	t_bst.insert(t_bst.root, tItem.name, tItem);
	tItem.name = "Doug";
	t_bst.insert(t_bst.root, tItem.name, tItem);
	t_bst.inorder(t_bst.root);
	t_bst.clear(t_bst.root);

	return 0;
}
