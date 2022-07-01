// program for printing row wise sum in a 2d array
#include <iostream>
using namespace std;

void printsum(int arr[][3],int row,int col){
    int sum=0;
     for(int row=0; row<3; row++){
        for(int col = 0; col<3; col++){
            sum=sum+arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main() {
    
    int arr[3][3];
    cout<<"enter the element in the 2d array"<<endl;
    
    for(int row=0; row<3; row++){
        for(int col = 0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    
    cout<<"print the 2d array" <<endl;
    for(int row=0; row<3; row++){
        for(int col = 0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"print the row wise sum"<<endl;
    printsum(arr,3,3);

    return 0;
}