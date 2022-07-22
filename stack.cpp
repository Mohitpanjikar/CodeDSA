#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int>s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    s.pop();
    
    cout<<"printing the top most element "<<s.top()<<endl;
    
    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    
    cout<<"size of stack "<<s.size()<<endl;

    return 0;
}
