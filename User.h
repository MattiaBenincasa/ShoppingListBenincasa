//
// Created by Mattia Benincasa on 08/07/23.
//

#ifndef SHOPPINGLIST_USER_H
#define SHOPPINGLIST_USER_H
#include <iostream>
#include "List.h"
#include <string>
#include <algorithm>


class User : public Observer{
public:
    explicit User(std::string& name);

    void addList(std::string& nameList);
    void removeList(std::string& nameList);
    void addItem(std::string& listName, std::string& itemName, int quantity, std::string& cat);
    void removeItem(std::string& listName, std::string& itemName);
    void update() override;

    void printLists() const;
    void printList(std::string& nameList) const;
private:
    std::string nickname;
    std::list<List> lists;
    int itemsToBuy {0};
};


#endif //SHOPPINGLIST_USER_H
