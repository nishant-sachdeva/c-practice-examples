#include<iostream>

int exp(int a, int b) {
    //we calculate a^b using a while loop of sorts

    int answer = 1;
    while(b){
        if(b%2 == 1){
            answer *= a;
        }
        a *= a;
        b >>= 1;
    }
    return answer;
}


int main(){
    int a,b;
    std::cin >> a >> b ;

    int answer = exp(a,b);

    std::cout << answer << std::endl;
}