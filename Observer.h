//
// Created by Mattia Benincasa on 05/07/23.
//

#ifndef SHOPPINGLIST_OBSERVER_H
#define SHOPPINGLIST_OBSERVER_H

class Observer {
    virtual void update() = 0;
    virtual ~Observer() {};
};

#endif //SHOPPINGLIST_OBSERVER_H
