// question is to find the closest integer with the same weight
// the weight is calculated as the number of bits that are 1


#include<iostream>

long long closest_number_with_same_weight(long long int number)
{
    // we have the number
    int bits = 64;

    for (int i = 0; i < bits; i++)
    {
        if ( (number<<i)&1 != (number<<(i+1))&1)
        {
            // if we are inside our if condition, then we know that we have the answer
            long long int bit_mask = 1<<i | i<<(i+1);
            number ^= bit_mask;
            return number;
        }
    }
}


int main()
{
    long long int n; 
    
    std::cin >> n;

    long long int answer = closest_number_with_same_weight(n);

    std::cout << answer << std::endl;

    return 0;
}