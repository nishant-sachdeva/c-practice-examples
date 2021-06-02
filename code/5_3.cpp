// question is to reverse the bits of a number
#include<iostream>


// 16 bits
unsigned int precomputed_reverse(int number) 
{
    // find a way to reverse 16 bit numbers quickly
    return number;


    // this is not the actual code.
    // we are supposed to take the first 8 bits and reverse them with the last 8 bits

}

// 64 bits
unsigned long reverse_bits(unsigned long number) 
{
    // we have to reverse the bits of this number
    const int k_word_size = 16;
    const int k_bit_mask = 0xFFFF;

    unsigned int answer = precomputed_reverse(number&k_bit_mask) << 3*k_word_size | precomputed_reverse((number >> k_word_size) & k_bit_mask) << (2*k_word_size) | 
    precomputed_reverse((number >> 2*k_word_size) & k_bit_mask ) | precomputed_reverse((number >> 3*k_word_size) & k_bit_mask) ;

    return answer;

}


int main(){
    unsigned long n;

    std::cin >> n;

    unsigned long answer = reverse_bits(n);

    std::cout << answer << std::endl;

    return 0;
}