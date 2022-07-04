#include <iostream>
using namespace std;

int
main ()
{
  int num = 5;
  cout << "printing the num" << num << endl;

  int *ptr = &num;
  //copying a pointer
  int *ptr2 = ptr;
  cout<<ptr<<"-"<<ptr2<<endl;
  cout<<*ptr<<"-"<<*ptr2<<endl;







  return 0;
}
