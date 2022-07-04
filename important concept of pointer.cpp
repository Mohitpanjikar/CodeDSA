#include <iostream>
using namespace std;

int
main ()
{
  int num = 5;
  cout << "printing the num" << num << endl;

  int *t = &num;
  cout<<"memory address of t is :"<<t<<endl;
  t=t+1;
  //current address +4 hogaya bcoz int type tha 
  cout<<"memory address of t+1 is :"<<t<<endl;


  return 0;
}
