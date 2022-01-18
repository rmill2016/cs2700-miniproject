
#ifndef BST_HPP_
#define BST_HPP_

#include "Node.hpp"
#include <cstddef>
#include <iostream>

template <class K, class T>
class BST {
	public:
		BST();
		~BST();

		void insert(Node<K, T>*&, K, T);
		bool remove(Node<K, T>*, K);

		// Debug
		void inorder(Node<K, T>*);

		Node<K, T> *root;

	private:
		void clear(Node<K, T>*&);
};

template <class K, class T>
void BST<K, T>::insert(Node<K, T>* &root, K key, T value) {
	if (root == nullptr) {
		root = new Node<K, T>(key, value);
	}
	else if (key <= root->key) {
		insert(root->left, key, value);
	}
	else {
		insert(root->right, key, value);
	}
}

template <class K, class T>
BST<K, T>::BST(): root(nullptr) {}

template <class K, class T>
BST<K, T>::~BST() {
	if (root != nullptr) {
		clear(root->left);
		clear(root->right);
		delete root;
		root = nullptr;
		//std::cout << "Destroyed a node" << std::endl;
	}
}

template <class K, class T>
void BST<K, T>::clear(Node<K, T>*& root) {
	if (root != nullptr) {
		clear(root->left);
		clear(root->right);
		delete root;
		root = nullptr;
		//std::cout << "Destroyed a node" << std::endl;
	}
}

template <class K, class T>
void BST<K, T>::inorder(Node<K, T>* root) {
	if (root != nullptr) {
		inorder(root->left);
		std::cout << root->key << std::endl;
		inorder(root->right);
	}
}

#endif /* BST_HPP_ */
