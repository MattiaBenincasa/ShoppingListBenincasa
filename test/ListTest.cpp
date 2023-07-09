//
// Created by Mattia Benincasa on 09/07/23.
//

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../List.h"

TEST(List, TestAddRemoveItems) {
    std::string lName = "listName";
    std::string iName = "itemName";
    std::string cName = "category";
    List l(lName);
    l.addItem(iName, cName, 1);
    ASSERT_THAT(l.getItems(), ::testing::Contains(iName));
    l.removeItem(iName);
    ASSERT_THAT(l.getItems(), ::testing::IsEmpty());
}
