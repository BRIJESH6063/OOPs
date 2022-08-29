class student {
    public :
            int age ;
            const int rollNumber ;
            int &x ;  // age referance variable
            student(int r, int a): rollNumber(r), age(a), x(this->age){ // initialise const private properties.
                // rollNumber = r ; throws error as cannot update const Solution : Initialisation List.
                // initialisation can be used both for const private and normal variable
            }
} ;