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
    // Assignment operators are used to assigning value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value.
    Hero hero1;
    
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[7]="Babbar";
    hero1.setName(name);
    
    Hero hero2(hero1);
    
    hero1.print();
    hero2.print();
    
    hero1 = hero2;
    
    hero1.print();
    hero2.print();
    
    return 0;
}