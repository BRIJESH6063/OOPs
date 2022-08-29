#include<bits/stdc++.h>
#include "student.cpp"
using namespace std;

int main() {
    student s1(12, 154) ;
    cout << s1.age << " " << s1.roll_no << endl ;

    student s2; student s3; student s4; student s5;
    cout << s1.totalStudents << endl ;
    cout << student::totalStudents << endl ;
    cout << student::getTotalStudent() << endl ;
	return 0;
}
