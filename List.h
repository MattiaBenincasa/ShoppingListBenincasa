//
// Created by Mattia Benincasa on 07/07/23.
//

#ifndef SHOPPINGLIST_LIST_H
#define SHOPPINGLIST_LIST_H
#include <string>
#include <list>
#include "Item.h"
#include "Observer.h"
#include "Subject.h"

class List : public Subject {
public:
    explicit List(std::string& n);

    void addItem(const Item& item);
    void removeItem(const Item& item);

    int getSize() const{
        return items.size();
    }

    bool operator == (const std::string& right) const;
    bool operator == (const List& right) const;

    void addUser(Observer* o) override;
    void removeUser(Observer* o) override;
    void notify() override;


private:
    std::string name;
    std::list<Item> items;
    std::list<Observer*> users;
};

#endif //SHOPPINGLIST_LIST_H
