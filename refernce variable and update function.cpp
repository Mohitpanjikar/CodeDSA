#include <iostream>
using namespace std;

void update2(int &n){
   n++;
}
void update1(int n){
    n++;
    cout<<"inside the function is updated as you can see here : "<< n <<endl;
}

int main()
{
    int n = 10;
    cout<< "before update call 1 : "<< n <<endl;
    update1(n);
    cout<< "after update call using update function 1 withour reference  : "<< n <<endl;
    // nothing happens because here the happends up passing the value 
    
    cout<< "before update call 2 : "<< n <<endl;
    update2(n);
    cout<< "after update call using update function 2 using reference  : "<< n <<endl;
    return 0;
}
