#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero() {
        cout << "Simple constructor called" << endl;
    }
     //copy constructor
    /*A copy constructor is a special type of constructor which initializes all the data members of the newly created object by copying the contents of an existing object. The compiler provides a default copy constructor. */

     Hero(int health,char level) {
        cout << "Copy constructor called" << endl;
        this->health = health;
        this->level = level;
    }
    void print(){
        cout<<"health is "<<this->health<<endl;
        cout<<"level is "<<this->level<<endl;
    }
    
};
int main() {
    Hero S(70,'C');
    S.print();
    
    //copy constructor
    Hero R(S);
    R.print();
    return 0;
}