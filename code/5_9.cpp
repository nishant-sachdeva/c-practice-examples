#include<iostream>

int reverse_digits(int n) {
    int answer = 0;
    while(n){
        int temp = n%10;
        answer = answer*10 + temp;
        n /= 10;
    }

    return answer;
}


bool check_if_palindrome(int n){
    // we have to check if the number we just got is a palindrome
    // one way is to convert to string, reverse and check
    // anothere way is to find the reverse number and compare
    if ( n == reverse_digits(n))
        return true;
    return false;
}


int main(){
    int n;
    std::cin >> n;

    // to check if this number is a palindrome
    bool is_palindrome = check_if_palindrome(n);

    std::cout << int(is_palindrome) << std::endl;
}