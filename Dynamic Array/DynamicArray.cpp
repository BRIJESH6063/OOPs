#include<bits/stdc++.h>
#include"DynamicArrayClass.cpp"
using namespace std ;

int main()
{
    DynamicArray d1 ; // default 
    d1.add(13) ;
    d1.add(18) ;
    d1.add(56) ;
    d1.add(47) ;
    d1.add(43) ;
    d1.add(75) ;

    d1.print() ;
    cout << "Capacity : " << d1.getCapacity() << endl ;

    DynamicArray d2(d1) ;
    DynamicArray d3 = d2 ;
    d2.print() ; d3.print() ;
    
    DynamicArray d4(100) ;
    cout << "d4 getCapacity() : " << d4.getCapacity() << endl ;
    return 0 ;
}