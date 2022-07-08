#include <iostream>
using namespace std;

bool checkpalindrome(string str,int i,int j){
    
    //base case
    if(i>j)
        return true;
    
    if(str[i]!= str[j])
        return false;
    else{
        // recursive call
        return checkpalindrome(str,i++,j--);
    }
}

int main()
{
    string name = "BB";
    
    bool ispalindrome = checkpalindrome(name,0,name.length());
    
    if(ispalindrome){
    cout<<"Yes its a plaindrome"<<endl;
    }
    else{
    cout<<"No its Not a plaindrome"<<endl;
    }
    

    return 0;
}
