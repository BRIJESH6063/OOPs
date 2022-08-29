#include<bits/stdc++.h>
#include"constFunction.cpp"
using namespace std ;

int main()
{
    fraction const f3(12,27) ;
    f3.display() ; 
    // cannot call any public function from const object of class
    // to resolve make all functions const so that can be called without fear to get changed.


    return 0 ;
}