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
            void display () {
                // Numerator = 45 ; const dont permit to make changes.
                cout << Numerator << " " << Denominator << endl ;
            }
            fraction operator+(fraction f2){
                int x = Numerator + f2.Numerator ; int y = Denominator + f2.Denominator ;
                fraction f3(x, y) ;
                return f3 ; 
            }
            fraction operator*(fraction f2){
                int x = Numerator * f2.Numerator ; int y = Denominator * f2.Denominator ;
                fraction f3(x, y) ;
                return f3 ; 
            }
            fraction &operator++(){
                Numerator = Numerator + Denominator ;
                return *this ; 
            }

            fraction operator++(int){
                fraction fnew(Numerator, Denominator) ;
                Numerator = Numerator + Denominator ;
                return fnew ;
            }

            fraction &operator+=(fraction const & f2){
                int lcm = Denominator * f2.Denominator ;
                int x = lcm / Denominator ; int y = lcm / f2.Denominator ;

                int num = x*(Numerator) + y*(f2.Denominator) ;
                Numerator = num ; Denominator = lcm ;
                return *this ;
            }
} ;