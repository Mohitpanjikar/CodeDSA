#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    // creating reference variable 
    // same memory different name 
    int &j = i;
    cout<< i <<endl;
    cout<< j <<endl;
    i++;
    cout<< i <<endl;
    cout<< j <<endl;

    return 0;
}
