//
// Created by Mattia Benincasa on 05/07/23.
//

#ifndef SHOPPINGLIST_ITEM_H
#define SHOPPINGLIST_ITEM_H

#include <string>

class Item {
public:
    Item (std::string& n, std::string& cat, int qt);

    int getQuantity() const{
        return quantity;
    }

    std::string getName() const {
        return name;
    }

    bool operator == (const Item& right) const;
    bool operator == (const std::string& right) const;

private:
    std::string name;
    int quantity;
    std::string category;
};

#endif //SHOPPINGLIST_ITEM_H
