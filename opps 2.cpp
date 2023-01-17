#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    int gethealth(){
        return health;
    }
    //paramerterised constrictor
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }
};
int main() {
    // static allocation / calling
    Hero ramesh(10);
    cout<<"Address of ramesh "<<&ramesh<<endl;
    ramesh.gethealth();
    //dynamic allocation/calling
    Hero *a = new Hero();

    return 0;
}