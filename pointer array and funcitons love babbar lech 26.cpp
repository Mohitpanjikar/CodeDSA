#include <bits/stdc++.h>
using namespace std;
void update(int *ptr){
    *ptr = *ptr+1;
}

int getSum(int *arr,int n){
    cout<<"size :"<<sizeof(arr)<<endl;
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}
int main() {
    // pointers using functions
    /*
    int value = 5;
    int *ptr = &value;
    
    cout<<"before update "<<*ptr<<endl;
    update(ptr);
    cout<<"after update "<<*ptr<<endl;
    */
    
    //array and function 
    //so when we create a function and pass the value we are passing the pointer only so we can do that in two ways which are as following 
    //1 int get_sum(int arr,int n) or int get_sum(int *arr,int n);
    int arr[6]={1,2,3,4,5,6};
    //here we are calling the funciton by first moving the pointer by 3 steps 
    cout<<"Sum is"<<getSum(arr+3,3)<<endl;
    return 0;
}