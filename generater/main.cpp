#include <iostream>
#include "characters.h"
#include <random>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    int choice;

    std::cout << "1. Use the default settings (168 characters :>, uppercase and lowercase letters, numbers, and symbols)" << std::endl;
    std::cout << "2. Customize the password settings" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice) {
        case 1: {
            std::string pname;
            std::cout << "Please enter a name for the password. (for what the password is for): ";
            std::cin >> pname;
            int amount = 168;
            std::string bank = chars;
            std::string pw;

           // std::srand(std::time(0));

           // no modulo bias this way | stupid [char x = bank[rand() % 69];]
           std::random_device rd;
           std::mt19937 gen(rd());
           std::uniform_int_distribution<> dist(0, 68);


            for (int i = 0; i < amount; i++) {
                char x = bank[dist(gen)];
                 pw += x;
            }

            std::cout << pw << std::endl;

            std::ofstream passwords("passwords.txt", std::ios::app);

            passwords << pname + ": " << pw << std::endl;
            passwords.close();

            break;
            
        } case 2: {
            std::string choice;

            std::cout << "1. Include letters, upper and lower " << std::endl;
            std::cout << "2. Include numbers " << std::endl;
            std::cout << "3. Include special characters " << std::endl;

            std::cout << "choose: ";
            std::cin >> choice;

            std::vector<int> hii = {1, 2, 3};

           // int charAmo;
           // std::cout << "How many characters do you want the password to be? ";
           // std::cin >> charAmo;

            std:: cout << "alright i'ma do this later!!";
        } default: {
            // why
        }

        
    }
    return 0;
}