#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
    char *name;
    int health;
    char level;

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
    
    //as we are using shallow copy (bcoz of default const)the changes will reflect into the orginal wala hero object
    // In Shallow copy, a copy of the original object is stored and only the reference address is finally copie
    hero1.name[0]='G';
    hero1.print();
    
    hero2.print();
    
    return 0;
}