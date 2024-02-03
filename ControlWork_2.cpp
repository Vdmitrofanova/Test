#include <iostream>
#include <vector>
#include <string>

//Все что успела по 4(

struct Account {
    std::string username;
    std::string password;
    std::string email;
};

void add(std::vector<Account> accounts) {
    std::cout << "Enter username for new" << std::endl;
    std::cout << "Enter password for new" << std::endl;
    std::cout << "Enter email for new" << std::endl;

}

void erase (std::vector<Account> accounts) {
    std::cout << "Enter username for erase" << std::endl;

}

void update(std::vector<Account> accounts) {
    std::cout << "Enter username for update" << std::endl;

}

void print(std::vector<Account> accounts) {

}

int main() {
    std::vector<Account> accounts;
    int choice;
    do {
        std::cout << "1) Add new account" << std::endl;
        std::cout << "2) Delete account" << std::endl;
        std::cout << "3) Update account information" << std::endl;
        std::cout << "4) Print all accounts" << std::endl;
        std::cout << "0) Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            add (accounts);
            break;
        case 2:
            erase (accounts);
            break;
        case 3:
            update (accounts);
            break;
        case 4:
            print (accounts);
            break;
        case 0:
            std::cout << "Bye to program! " << std::endl;
            break;
        default:
            std::cout << "Incorect, try again!" << std::endl;
        }
    } while (choice != 0);
    return 0;
}
    


