//
// Created by Mattia Benincasa on 08/07/23.
//

#include "User.h"

User::User(std::string &name) : nickname(name){}

void User::addList(std::string& nameList) {
    List list(nameList);
    lists.push_back(list);
    list.addUser(this);
}

void User::removeList(std::string& nameList) {
    auto findList = std::find(lists.begin(), lists.end(), nameList);
    lists.remove(*findList);
}

void User::addItem(std::string& listName, std::string& itemName, int quantity, std::string& cat) {
    auto findList = std::find(lists.begin(), lists.end(), listName);
    findList->addItem(itemName, cat, quantity);
}

void User::removeItem(std::string& listName, std::string itemName) {
    auto findList = std::find(lists.begin(), lists.end(), listName);
    findList->removeItem(itemName);
}

void User::update() {
    int count = 0;
    for(auto list : lists)
        count += list.getSize();

    this->itemsToBuy = count;
}