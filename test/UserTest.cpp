//
// Created by Mattia Benincasa on 09/07/23.
//

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "../User.h"

TEST(User, TestConstructot){
    std::string uName = "UserName";
    User u(uName);
    ASSERT_EQ(uName, u.GetNickName());
    ASSERT_EQ(0, u.getItemsToBuy());
}

TEST(User, TestAddRemoveList){
    std::string uName = "UserName";
    std::string lName = "ListName";
    User u(uName);
    u.addList(lName);
    ASSERT_THAT(u.getLists(), ::testing::Contains(lName));
    u.removeList(lName);
    ASSERT_THAT(u.getLists(), ::testing::IsEmpty());
}

