#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
    char *name;
    int health;
    char level;

    //copy constructor
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
     void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }
     int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
};
int main() {
    //Shallow copy and Deep copy.
    //defining the properties of hero
    Hero hero1;
    
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[7]="Babbar";
    hero1.setName(name);
    //printing the properties of hero
    hero1.print();
    
    // Shallow copy using default constructor
    Hero hero2(hero1);
    hero2.print();
    
    //A deep copy of an object is a copy whose properties do not share the same references 
    // (point to the same underlying values) as those of the source object from which the copy was made.
    hero1.name[0]='G';
    hero1.print();
    
    hero2.print();
    
    return 0;
}