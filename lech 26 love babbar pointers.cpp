/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using #include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    cout<<"this will return the address of the array "<<arr<<endl;
    cout<<"this will return the address of the array with the help of pointer :"<< &arr <<endl;
    
    int temp[10];
    cout<<sizeof(temp)<<endl;
    
    int  *ptr = &temp[0];
    // this will return the size of the pointer which is 8
    cout<<sizeof(ptr)<<endl;
    
    // this will return the jo data type present hai at that value which is 4
    cout<<sizeof(*ptr)<<endl;
    
    //this will return the size of the memory which is begin used over here which is 8 hexadecimal 
    cout<<sizeof(&ptr)<<endl;


    int brr[10];
    //error brr =  brr+1 ;
    // this will return the memory address of the element jo first index per hai 
    int *ptr2 = &brr[0];
    cout<<ptr2<<endl;
    //this will take the memory address and in that we will add one but  there is addition of 4(as apna data typr ka size is 4)
    ptr2 = ptr2+1;
    cout<<ptr2<<endl;
    return 0;
} std;

int main()
{
    cout<<"Hello World";

    return 0;
}
