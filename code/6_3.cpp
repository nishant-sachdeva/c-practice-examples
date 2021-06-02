#include<bits/stdc++.h>

std::vector<int> multiply( std::vector<int>num1, std::vector<int>num2){
    const int sign = (num1.front() < 0) ^ (num2.front() < 0);
    num1.front() = abs(num1.front());
    num2.front() = abs(num2.front());

    std::vector<int> result(num1.size() + num2.size(), 0);

    // now we start the actual multiplication
    for (int i = num1.size() - 1 ; i>= 0 ; i--){
        for(int j = num2.size() - 1 ; j>= 0 ; j--){
            // we make our calculations here
            result[i+j+1] += num1[i]*num2[j];
            result[i+j] += result[i+j+1]%10;
            result[i+j+1] /= 10;
        }
    }

    // now we shall remove leading 0s from this array
    result = {
        find_if_not(begin(result), end(result), [](int a){ return a == 0; }), end(result)
    };

    if(result.empty()) {
        return {0};
    }
    result.front() *= sign;
    return result;


}


int main(){
    // take two array inputs
    std::vector<int> num1 = {1,2,3,4};
    std::vector<int> num2 = {-2,3,4,5};

    std::vector<int> num3 = multiply(num1, num2);

    for(int i : num3){
        std::cout << i ;
    } 
    std::cout << std::endl;


}