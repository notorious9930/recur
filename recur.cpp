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
}
