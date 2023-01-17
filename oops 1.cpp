#include <bits/stdc++.h>
using namespace std;
class Hero{
    //properties 
    //there are total three kind of access modifiers which are as followring - public , private, secuirity 
    //by default everything is private 
    //public can be access from any where 
    public:
    /*
    int level;
    char health;
    */
    //private can only access inside the class
    private:
    char sexlife;
    void print(){
        cout<<sizeof(sexlife)<<endl;
    }
    
    //getter and setter is used to access the private class thing
    int getHealth(){
        return health;
    }
    
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
};
int main() {
    // creating an object of hero class named as Mohit 
    Hero Mohit;
    Mohit.level = 10;
    Mohit.health = 'A';
    
    cout<<Mohit.level<<endl;
    cout<<Mohit.health<<endl;
    // in case of an empty class we will get the size equal to one 
    cout<<sizeof(Mohit)<<endl;
    
    cout<<sizeof(Mohit.level)<<endl;
    cout<<sizeof(Mohit.health)<<endl;
    
    //static allocation
    Hero a;
    a.sethealth(80);
    a.setlevel('A');
    cout<<a.level<<endl;
    cout<<a.gethealth()<<endl;
    
    //dynamically allocation
    Hero *b = new Hero;
    b->setlevel('A');
    b->sethealth(100);
    cout<<(*b).level<<endl;
    cout<<(*b).gethealth()<<endl;
    // or we can write the same thing this way 
    cout<<b->level<<endl;
    cout<<b->gethealth()<<endl;
    
    return 0;
}