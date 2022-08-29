#include<bits/stdc++.h>
using namespace std ;

class student{ 
    private : 
    public  : 
              int age ; int roll_no ;
              static int totalStudents ;
              student(int age, int roll_no){
                this->age = age ; 
                this->roll_no = roll_no ;
                totalStudents ++ ;
              }
              student(){
                totalStudents ++ ;
              }

              static int getTotalStudent(){
                return totalStudents ;
              }
} ;

int student::totalStudents = 0 ;  // Scope Resolution operator.
