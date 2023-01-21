#include <iostream>
using namespace std;

int main() {
    /*
    left shift and right shift operator 
    left shift , N<<i , N * pow(2,i);
    
    right shift , N>>i ,floor(N/pow(2,i));
    
    and operator (x&i -> x) , (X&0 -> 0)
    
    logical or , (X|1 -> 1) , (x|0 -> x)
    
    bit wise operator , ~0 = 1, ~1 = 0 
    
    complement of zero is -1,
    
    checking if the ith bit is set or not set , set matlab 1 ,not set is zero , formula -> z = N&pow(2,i) or same formula can be    z=N&(1<<i) 
    
    flipping he ith bit zero to one , one to zero  
    formula -> Z = N ^ (1<<i);
    */
    
    //checking if the number is odd or even using bit manipulation
    int num;
    cin>>num;
    if((num&1)==0) cout<<"even"<<endl;
    else cout<<"Odd"<<endl;
    
    
    return 0;
}