#include <iostream>
using namespace std;

int main()
{
    int i=5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    
    // printing the value of i by different ways
    cout<<"value of i " << i << endl;
    cout<<"value of *ptr " <<  *ptr << endl;
    cout<<"value of *ptr2 " << **ptr2 << endl;
    
    // memory address
    cout<< &ptr <<endl;
    cout<<&(*ptr2)<<endl; 

    return 0;
}
