#include<bits/stdc++.h>
using namespace std ;

class student{
    private : int age ;
    public  : 
            int roll_no ;
            student(){
                cout << "No argument constructor called " << endl ;
            }
            student(int age, int roll_no){
                cout << "Argumental constructor called " << endl ;
                this->age = age ; this->roll_no = roll_no ;
            }
            int getAge(){
                return age ;
            }
            void display(){
                cout << "Age : " << age << endl << "Roll Number : " << roll_no << endl ;
            } 

            void setAge(int x, int password){
                if(password != 1234 || x <= 0) return ;
                else age = x ; 
            }

            ~student(){
                cout << "Destructor called " << endl ;
            }
} ;

