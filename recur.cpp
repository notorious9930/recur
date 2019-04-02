#include <iostream>
using namespace std;

int digitalSum(int a)
{
  if (a==0)
  {
    return 0;
  }
   
  int num= a%10;
  int sum= 0;
  
  
  sum += (num+digitalSum(a/10));
  
  return sum;
}

int main()
{
 cout << digitalSum(1234) << endl;
 cout << digitalSum(456) << endl;
 cout << digitalSum(839) << endl;
 cout << digitalSum(4444) << endl;
 cout << digitalSum(211) << endl;
 cout << digitalSum(484884) << endl;
 cout << digitalSum(84848822) << endl;
}
