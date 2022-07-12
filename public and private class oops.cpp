#include <iostream>
using namespace std;
 class Hero{
     
    //  properties
    public:
    int health;
    
    private:
    char level;
    
    void print(){
        cout<<level<<endl;
    }
 }
int main()
{
    Hero Mohit;
    
    cout<<"health is :"<<Mohit.health<<endl;
    // we cant access Mohit.levek bcoz woh private class hai
    cout<<"level is":<<Mohit.level<<endl;

    return 0;
}
