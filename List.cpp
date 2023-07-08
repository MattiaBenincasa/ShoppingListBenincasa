//
// Created by Mattia Benincasa on 07/07/23.
//

#include "List.h"

List::List(std::string &n) : name(n) {}

void List::addItem(const Item& item) {
    items.push_back(item);
    notify();
}

void List::removeItem(const Item& item) {
    items.remove(item);
    notify();
}

void List::addUser(Observer *o) {
    users.push_back(o);
}

void List::removeUser(Observer *o) {
    users.remove(o);
}

void List::notify() {
    for(auto user : users)
        user->update();
}


bool List::operator==(const std::string &right) const {
    if(name == right)
        return true;
    else
        return false;
}

bool List::operator==(const List& right) const {
    if(name == right.name)
        return true;
    else
        return false;
}