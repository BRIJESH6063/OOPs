#include<bits/stdc++.h>
#include"PreIncrement.cpp"
using namespace std ;

int main()
{
    fraction f1(12,27) ;
    
    // cannot call any public function from const object of class
    // to resolve make all functions const so that can be called without fear to get changed.
    fraction f2(14, 38) ;
    // fraction f3 = f1 + f2 ;
    // // fraction f4 = ++f3 ;
    // fraction f5 = ++(++f3) ;
    // // fraction f6 = f1++ ;
    // fraction f7 = (f1++)++ ;

    // cout << "Fraction 1  a         :   " ; f1.display() ; 
    // cout << "Fraction 2  b         :   " ; f2.display() ; 
    // cout << "Fraction 3  c = a + b :   " ; f3.display() ; 
    // // cout << "Fraction 4  ++c       :   " ; f4.display() ;
    // cout << "Fraction 5  ++(++c)   :   " ; f5.display() ;
    // // cout << "Fraction 6  a++       :   " ; f6.display() ;
    // cout << "Fraction 7  (a++)++   :   " ; f7.display() ;
    cout << "Initial : " << endl ; f1.display() ; f2.display() ;
    f1+=f2 ;
    cout << "Final   : " << endl ; f1.display() ; f2.display() ;

    
    return 0 ;
}

/*  
    Output --
    Fraction 1  a         :   12 27
    Fraction 2  b         :   14 38
    Fraction 3  c = a + b :   91 65
    Fraction 5  ++(++c)   :   156 65
    
    here f5 is updated by ++(++c) but c ie f3 is incremented only once because buffer stores intermediate result
    temporarily so  second increment done on buffer or copy of intermediate result not c
    so resolve code to not create any copy of it.
    Solution is - return by reference to avoid making of copy.


    Final Output --
    Fraction 1  a         :   12 27
    Fraction 2  b         :   14 38
    Fraction 3  c = a + b :   156 65
    Fraction 5  ++(++c)   :   156 65

*/