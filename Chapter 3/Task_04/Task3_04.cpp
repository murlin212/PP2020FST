// Task3_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char c;
    bool var;
    while (true) {

        
        std::cout << "MAIN MENU" << std::endl;
        std::cout << "l: left, r: right, q: quit -> ";
        std::cin >> c;
        if (c == 'q') {
            
            break;
        }

        switch (c) {
            
            case 'l':
                std::cout << "LEFT MENU:" << std::endl;
                std::cout << "select a or b: ";
                std::cin >> c;
              
                switch (c) {
                
                    case 'a': std::cout << "you chose 'a'" << std::endl; break;

                    case 'b': std::cout << "you chose 'b'" << std::endl; break;

                    default: std::cout << "you didn't choose a or b!"<< std::endl;
                }
         
                break;
        
         
            case 'r':
                std::cout << "RIGHT MENU:" << std::endl;
                std::cout << "select c or d: ";
                std::cin >> c;
        
                switch (c) {

                    case 'c': std::cout << "you chose 'c'" << std::endl; break;

                    case 'd': std::cout << "you chose 'd'" << std::endl; break;

                    default: std::cout << "you didn't choose c or d!" << std::endl;
                }
        
                break;

            case 'q': var = true; break;
        
            default: std::cout << "you must type l or r or q!" << std::endl;
        }
    }
}
