#include <iostream>
using namespace std;

int main()
{   
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    
    
    // printing the address of the array ka zero location 
    cout<<"address of array zeroth location is :"<<arr<<endl;
    // second way of doing the same thing  is 
    cout<<"address of array zeroth location is :"<< &arr[0]<<endl;
    
    cout<<"1st location/address of array :"<<&arr[1]<<endl;
    cout<<"2nd location/address of array :"<<&arr[2]<<endl;
    
    cout<<"element of at the zeroth index"<<*arr<<endl;
    
    // important formula
    // arr[i]=*(arr+i)
    
    cout<<"print the element which is present at the first index :"<<arr[1]<<endl;
    // by formula 
    cout<<"print the element which is present at the first index :"<<*(arr+1)<<endl;
    
    // difference of array and pointers
    // sizeof function
    
    cout<<"printing the sizeof array :"<<sizeof(arr)<<endl;
    
    int *ptr=&arr[0];
    cout<<"printing the sizeof pointer :"<<sizeof(ptr)<<endl;
    
    
    // difference with symbol table;
    int arr2[10]={0};

    int *ptr2= &arr2[0];
    cout<<ptr2<<endl;
    ptr2=ptr2+1;
    cout<<ptr2<<endl;

    return 0;
}
