#include<iostream>


int swap_bits(int n, int x, int y) 
{
    if ( (n>>x & 1) != (n>>y & 1) )
    {
        int bit_mask = (1 << x ) | ( 1 << y ) ;

        n = (n ^ bit_mask);
    }
    return n;
}


int main()
{
    int number;
    std::cin >> number;

    int bit1, bit2;
    std::cin >> bit1 >> bit2;

    int answer = swap_bits(number, bit1, bit2);

    std::cout << answer << std::endl;

    return 0;
}