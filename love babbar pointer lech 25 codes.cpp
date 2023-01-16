#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 5;
    cout<<num<<endl;
    
    int *ptr = &num;
    //this will return address of the value 
    cout<<ptr<<endl;
    
    //this will return the pointer value
    cout<<*ptr<<endl;
    
    //double wala pointer 
    double d = 15;
    cout<<d<<endl;
    
    double *ptr2 = &d;
    //this will return address of the value 
    cout<<ptr2<<endl;
    
    //this will return the pointer value
    cout<<*ptr2<<endl;
    
    //returning the sizeof the data type and the size of pointer
    cout<<"sizeof num data type is int :"<< sizeof(num)<<endl;
    cout<<"size of the pointer"<< sizeof(ptr2)<<endl;
    
    //creating pointer by two different ways
    //1. by creating a pointer and pointing it to the null value then pointing it the value;
    //2. by creating a pointer and directly pointing it to the value
    cout<<"creating a null pointer first "<<endl;
    int i = 5;
    int *pointer = 0;
    pointer = &i;
    cout<<pointer<<endl;
    cout<<*pointer<<endl;
    
    int *pointer2 = &i;
    cout<<pointer2<<endl;
    cout<<*pointer2<<endl;
    
    //updating the value of num with the help of pointer 
    int nums = 10;
    int *pointer3 = &nums;
    cout<<"printing the value without any update :"<<nums<<endl;
    cout<<"printing the value with update using pointer :" <<(*pointer3)+1<<endl;
    
    //copy the pointer 
    int *pointer4 =pointer3;
    cout<<pointer3 <<"-"<<pointer4<<endl;
    cout<<(*pointer3) <<"-"<<(*pointer4)<<endl;
    return 0;
}