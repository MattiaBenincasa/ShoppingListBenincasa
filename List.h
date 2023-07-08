//
// Created by Mattia Benincasa on 07/07/23.
//

#ifndef SHOPPINGLIST_LIST_H
#define SHOPPINGLIST_LIST_H
#include <iostream>
#include <string>
#include <list>
#include "Item.h"
#include "Observer.h"
#include "Subject.h"

class List : public Subject {
public:
    explicit List(std::string& n);

    void addItem(std::string& itemName, std::string& category, int quantity);
    void removeItem(std::string& itemName);

    int getSize() const{
        return items.size();
    }

    std::string getName() const {
        return name;
    }

    bool operator == (const std::string& right) const;
    bool operator == (const List& right) const;

    void addUser(Observer* o) override;
    void removeUser(Observer* o) override;
    void notify() override;

    void printItems() const;


private:
    std::string name;
    std::list<Item> items;
    std::list<Observer*> users;
};

#endif //SHOPPINGLIST_LIST_H
