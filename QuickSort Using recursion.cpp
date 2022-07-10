#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    //we are calling array ka first element ko pivot
        int pivot = arr[s];
        
        int cnt = 0;
        for(int i=s+1; i<=e; i++){
            if(arr[i]<=pivot){
                cnt++;
            }
        }
        
        //placing pivot at the righ postion
        int pivotIndex = s+cnt;
        swap(arr[pivotIndex],arr[s]);
        
        //left and right wala part sort karna hai
        int i=s,j=e;
        while(i<pivotIndex && j>pivotIndex){
            while(arr[i] <= pivot){
                 i++;
            }
            while(arr[j] > pivot){
                 j--;
            }
            
            if(i<pivotIndex && j>pivotIndex){
               swap(arr[i],arr[j]); 
               i++;
               j--;
            }
        }
        return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e)
    return ;
    
    //partition karna hai
    int p = partition(arr,s,e);
    
    //left part sorting
    quickSort(arr,s,p-1);
    
    //right part ko sort karna hai
    quickSort(arr,p+1,e);
    
}

int main()
{
    int arr[5]={9,1,2,5,4};
    int n=5;
    
    quickSort(arr,0,n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
