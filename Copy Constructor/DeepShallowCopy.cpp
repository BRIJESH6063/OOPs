#include<bits/stdc++.h>
using namespace std ;

class Student {
    private :
             int age ;
             
    public  :
            char *name ;
               //     |----> Student s = Main.s --> default copy constructor(which cant be called due to presence of one declared.)
            Student(Student const & s){  // copy constructor again calls a copy constructor to proceed error!
                this->age = s.age ;

                // deep copy 
                this->name = new char[strlen(s.name)+1] ;
                strcpy(this->name, s.name) ;
            }
            Student(int age, char *name){
                this->age = age ;
                // this->name = name ; shallow copy should be avoided ;
                this->name = new char[strlen(name)+1] ;
                strcpy(this->name, name) ;
            }
            void display(){
                cout << "age : " << age << "  name : " << name << endl ;
            }
} ;

int main()
{
    char name[5] = "abcd" ;
    Student s1(20,name) ;
    s1.display() ;
    name[3] = 'e' ;       // shallow copy means only copy of the address so any change to 
    Student s2(19, name) ;// original will be reflected over the copied one as well.
    s2.display() ;
    s1.display() ;

    strcpy(name,"helloabcd") ;
    cout << name << endl ;


    Student s3(s1) ; // inbuilt copy constructor always make shallow copy.
    s1.name[0] = 'x' ;
    s3.display() ; s1.display() ;
    return 0 ;
}

// shallow copy - copy of the first index only.
// Deep copy - copy of the entire array. 

// Avoiding shallow copy issue create a new array of character and use strcpy() to copy 
// content in that new array

// rather than inbuilt(which always uses shallow copy constructor)
// build own copy constructor i.e. deep copy constructor