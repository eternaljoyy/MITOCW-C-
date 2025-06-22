#include <iostream>


bool isPrime(int num, bool is_prime, int number_primes) {

     // check if number is prime   
    for (int i = 2; i <= number_primes; i++) {  
        if (num % i == 0 and num != 2 and i != num) {  
            is_prime = false; 
            break;
        } else {
            is_prime = true;
        } 
    }

    return is_prime;
}


int main() { 

    int number_primes; 
    int count = 0;

    std::cout << "Enter a integer value N: " << std::endl; 
    std::cin >> number_primes; 

    bool is_prime = false;
    int value = 2; 

    while (count < number_primes) { 
        
        if (isPrime(value, is_prime, number_primes)) { 
            std::cout << "The number: " << value << " is a prime number" << "\n" << std::endl;  
            count += 1;  
            value += 1; 
        } else {
            value += 1;
        } 

        is_prime = false; 
    }

    return 0;
}