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
    auto findItem = std::find(lists.begin(), lists.end(), nameList);
    lists.remove(*findItem);
}

void User::addItem(List &list, Item& item) {
    list.addItem(item);
}

void User::removeItem(List &list, Item &item) {
    list.removeItem(item);
}

void User::update() {
    int count = 0;
    for(auto list : lists)
        count += list.getSize();

    this->itemsToBuy = count;
}