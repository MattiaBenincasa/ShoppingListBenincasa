//
// Created by Mattia Benincasa on 05/07/23.
//

#ifndef SHOPPINGLIST_SUBJECT_H
#define SHOPPINGLIST_SUBJECT_H

#include "Observer.h"

class Subject {
    virtual void addUser(Observer* o) = 0;
    virtual void removeUser(Observer* o) = 0;
    virtual void notify() = 0;
    virtual ~Subject () {}
};

#endif //SHOPPINGLIST_SUBJECT_H
