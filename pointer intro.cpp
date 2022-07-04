#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout<<"printing the num"<<num<<endl;
    int *ptr = &num;
    double d=10.10;
    
    cout<<"address of ptr is :"<<ptr<<endl;
    cout<<"element inside the ptr is :"<<&ptr<<endl;

    // sizeof function 
    cout<<"size of integer num is :"<<sizeof
    (num)<<endl;
    cout<<"size of ptr num is :"<<sizeof
    (ptr)<<endl;
    cout<<"size of double type ptr is :"<<sizeof
    (d)<<endl;
    
    return 0;
}
