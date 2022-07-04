#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout<<"printing the num"<<num<<endl;
    
    // two ways of implement pointers
    int *q=&num;
    cout<<"address of ptr is :"<<q<<endl;
    
    int *p = 0;
    p=&num;
    cout<<"address of ptr is :"<<p<<endl;
    


    return 0;
}
