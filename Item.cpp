//
// Created by Mattia Benincasa on 07/07/23.
//
#include "Item.h"

Item::Item(std::string &n, std::string &cat, int qt) : name(n), quantity(qt), category(cat) {}

bool Item::operator==(const Item &right) const {
    if(name == right.name)
        return true;
    else
        return false;
}