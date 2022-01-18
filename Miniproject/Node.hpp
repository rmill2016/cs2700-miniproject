

#ifndef NODE_HPP_
#define NODE_HPP_

template <class K, class T>
class Node {
	public:
		Node(K, T);

		K key;
		T value;
		Node *left, *right;
};

template <class K, class T>
Node<K, T>::Node(K key, T value): key(key), value(value), left(nullptr), right(nullptr) {}

#endif /* NODE_HPP_ */
