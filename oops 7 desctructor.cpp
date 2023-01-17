#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }
    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }
    //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }
};

int main(){
    //static 
    Hero a;
    //dynamic 
    Hero *b = new Hero();
    
    return 0;
}