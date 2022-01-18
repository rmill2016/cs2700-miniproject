

#ifndef ITEM_HPP_
#define ITEM_HPP_

#include <string>

class Item {
	public:
		Item(std::string, std::string, std::string, int);

		std::string name;
		std::string description;
		std::string weight;
		int quantity;
};

Item::Item(std::string name, std::string description, std::string weight, int quantity):
	name(name), description(description), weight(weight), quantity(quantity) {}

#endif /* ITEM_HPP_ */
