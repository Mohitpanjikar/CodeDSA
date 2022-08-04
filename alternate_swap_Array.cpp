#include<iostream>
using namespace std;

void swapalternate(int arr[],int size){
        for(int i=0; i<size; i=i+2){  //i should be increased by 2 bcoz nahi to same elemenet 2 bar swap hoga
            if(i+1<size)    //base condition
               swap(arr[i],arr[i+1]);   //swapping done here
            //    if swap function does not work in online coding test than use this method
            //temp = arr[i];
            // arr[i]=arr[i+1];
            //arr[i+1]=temp;
        }

}
//print the array
int printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}


int main(){
    int even[6]={1,2,3,4,5,6};

    int odd[5]={10,20,30,40,50};

    swapalternate(odd,5);
    swapalternate(even,5);
    printArray(odd,5);
    printArray(even,6);

    return 0;
}