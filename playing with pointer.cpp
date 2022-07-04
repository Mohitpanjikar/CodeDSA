#include <iostream>
using namespace std;

int
main ()
{
  int num = 5;
  cout << "printing the num" << num << endl;

  int *ptr = &num;
  cout << "printing the element of pointer " << *ptr << endl;
  //playing with ptr
  (*ptr)++;
  cout<<"printing the element of pointer "<<*ptr<<endl;





  return 0;
}
