#include <iostream>
#include "User.h"

int main() {

    std::string name = "Mattia";
    User user(name);
    std::string listName;
    std::string itemName;
    std::string category;
    int quantity;

    int choice;

    do{
        std::cout << "1. Create new List" << std::endl;
        std::cout << "2. Delete a List" << std::endl;
        std::cout << "3. Add a new item in a list " << std::endl;
        std::cout << "4. Delete an item from a list" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Insert the name of the list" << std::endl;
                std::cin >> listName;
                user.addList(listName);
                user.printLists();
                break;
            case 2:
                std::cout << "Insert the name of the list you want to delete" << std::endl;
                std::cin >> listName;
                user.removeList(listName);
                user.printLists();
                break;
            case 3:
                std::cout << "Insert the list" << std::endl;
                std::cin >> listName;
                std::cout << "Insert the name of item" << std::endl;
                std::cin >> itemName;
                std::cout << "Insert the category of the item" << std::endl;
                std::cin >> category;
                std::cout << "Insert quantity of the item" << std::endl;
                std::cin >> quantity;
                user.addItem(listName, itemName, quantity, category);
                user.printList(listName);
                break;
            case 4:
                std::cout << "Insert the name of the list" << std::endl;
                std::cin >> listName;
                std::cout << "Insert the name of the item you want to delete" << std::endl;
                std::cin >> itemName;
                user.removeItem(listName, itemName);
                user.printList(listName);
                break;
            case 5:
                break;
            default:
                std::cout << "Invalid option" << std::endl;
        }
    } while (choice != 5);

    return 0;
}
