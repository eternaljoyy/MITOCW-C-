#include <iostream>

int main() {
    /* 
    User enters a number, and 
    then the program must print 'Hello World!' 
    an 'n' number of times. 
    */ 

    int number; 

    std::cout << "Enter a number: " << number << std::endl;
    std::cin >> number; 

    for (int i = 0; i < number; i++){
        std::cout << "Hello World! " << "\n" << std::endl; 
    }
    return 0; 
}