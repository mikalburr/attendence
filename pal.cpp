#include <stdio.h>
#include<iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        int i = x , n = 0;
        bool out = false;
        if( x < 0 ){
        } else if ( x % 10 == 0) {
        } else {
            while( n < x ){
                n *= 10;
                n += x % 10;
                x /= 10;
            }

            x *= 10;
            x += n % 10;
            
            if(n == x)
                out = true;
        }

        std::cout<<"is " << i << " palindrome? " << std::boolalpha << out << "\n"; 
        return out;
    }
};

int main()
{
    Solution call;
    int in = 121;
    call.isPalindrome(in);

    in = -121; 
    call.isPalindrome(in);
    
    in = 10; 
    call.isPalindrome(in);

    return 0;
}