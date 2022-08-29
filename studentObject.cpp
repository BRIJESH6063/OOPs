#include<bits/stdc++.h>
#include "student.cpp"
using namespace std;

int main() {
	student * stud = new student(22, 328) ;
    //cout << "Student age     : " << stud->age << endl ;
    cout << "Student roll no : " << stud->roll_no << endl ;
    // stud->age = 25 ;
    // cout << "Student's modified age  : " << stud->getAge() << endl ;

    cout << "getAge() called returns : " << stud->getAge() << endl ;
    stud->display() ;
    stud->setAge(26, 1235) ;
    stud->display() ;
    cout << "---------------------------------------------------------" << endl ;
    student s1(14, 255) ;
    student s2(s1) ;
    s1.display() ;
    s2.display() ;

    student s3(*stud) ;
    student *s4 = new student(*stud) ;
    student *s5 = new student(s2) ;
    student s6 ; student s7 ; student *s8 ;
    s6 = s2 ; s7 = *s4 ; *s8 = s1 ;
    cout << "---------------------------------------------------------" << endl ;
    s3.display() ;
    s4->display() ;
    s5->display() ; 
    s6.display() ;
    s7.display() ;
    s8->display() ;
	return 0;
}
