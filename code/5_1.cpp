// computing the parity of a word
// return 1 if number of 1s is odd, else return 0


#include<iostream>


bool get_parity(unsigned long int bit_string)
{
    short int result = 0;
    while(bit_string)
    {
        result++;
        bit_string = bit_string & (bit_string - 1) ;

    }
    return (result%2 != 0);
    // this will return 1 if it is odd and 0 if even
}

int main()
{
    unsigned long bit_string;
    std::cin >> bit_string;

    // now we count the number of bits
    bool parity = get_parity(bit_string);

    std::cout << int(parity) << std::endl;
    return 0;
}