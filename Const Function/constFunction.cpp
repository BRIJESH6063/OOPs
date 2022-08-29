#include<bits/stdc++.h>
using namespace std ;

class fraction {
    private :
            int Numerator ; int Denominator ;
    public  :
            fraction(){

            }
            fraction(int a, int b){
                Numerator = a ; Denominator = b ;
            }
            void display () const {
                // Numerator = 45 ; const dont permit to make changes.
                cout << Numerator << " " << Denominator << endl ;
            }
} ;