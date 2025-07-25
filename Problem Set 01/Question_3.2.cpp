#include <iostream>
#include <algorithm>

int main() { 
    int max_num;

    std::cout << "Enter the value for N: " << std::endl; 
    std::cin >> max_num;   

    int min_val, max_val, total_sum = 0; 

    for (int i = 0; i < max_num; i++) {

        double k; 
        std::cin >> k;
        
        // find the minimum 
        if (k < min_val) {
            min_val = k;
        } 

        // find the maximum 
        if (k > max_val) {
            max_val = k;
        }

        // std::cout << "Min at " <<  i << " iteration: " << min_val;
        total_sum += k; 
    }
    

    std::cout << "Mean: " << total_sum / max_num << std::endl;
    std::cout << "Maximum: " << max_val << std::endl; 
    std::cout << "Minimum: " << min_val << std::endl; 
    std::cout << "Range: " << (max_val - min_val) << std::endl; 

    return 0;
}