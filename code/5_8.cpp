#include<iostream>

int reverse_digits(int n ){
    int answer = 0;
    while(n){
        int temp = n%10;
        answer = answer*10 + temp;
        n /= 10;
    }

    return answer;
}


int main(){
    int n;
    std::cin >> n;

    int answer = reverse_digits(n);

    std::cout << answer << std::endl;
    return 0;
}