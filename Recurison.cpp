// revising recursion find factorial of a number ->
#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    //this is a base case 
    if(num==0) return 1;
    
    return num*factorial(num-1);
}
int main() {
    int num;
    cin>>num;
    int ans = factorial(num);
    cout<<ans<<endl;

    return 0;
}


// revising recursion finding power of 2 ->
#include <bits/stdc++.h>
using namespace std;

int powerof(int n){
    //this is a base case 
    if(n==0) return 1;
    //calling recursion
    return 2*powerof(n-1);
}
int main() {
    int n;
    cin>>n;
    int ans = powerof(n);
    cout<<ans<<endl;

    return 0;
}

// revising recursion printing fibonnaci series
#include <bits/stdc++.h>
using namespace std;

int fibonnaci(int n){
    //base case -
    if(n==0 || n==1) return 1;
    
    //recurisive relation and processing -
    int ans = fibonnaci(n-1)+fibonnaci(n-2);
    return ans;
}

int main() {
    int n;
    cin>>n;
    int ans = fibonnaci(n);
    cout<<ans<<endl;

    return 0;
}

//say sayDigit using recursion -
#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {
    //base case
    if(n == 0)
        return ;
    //processing 
    int digit = n % 10;
    n = n / 10;
    //recursive call
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main() {

    string arr[10] = {"zero", "one", "two", "three","four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;
    return 0;
}

// is sorted or not using recursion -
#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    //base case
    if(size == 0 || size == 1 )
        return true;
    
    if(arr[0] > arr[1])
        return false;
    else{
        bool remainingPart = isSorted(arr + 1, size - 1 );
        return remainingPart;
    }
}
int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;
    bool ans = isSorted(arr, size);
    if(ans)
    cout << "Array is sorted " << endl;
    else
    cout << "Array is not sorted " << endl;

    return 0;
}


//binary search using recursion ->
#include<iostream>
using namespace std

bool binarySearch(int arr[],int start,int end,int k){
    int mid = start+(end-start)/2;
    //base case
    if(start>end){
        return false;
    }
    //element found 
    if(arr[mid]==k)
    return true;
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}
int main() {
    int arr[5]={2,4,6,8,10};
    int size = 5;
    int key;
    cin>>key;
    int ans = binarySearch(arr,0,5,key);
    if(ans){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is Not present"<<endl;
    }
    return 0;
}