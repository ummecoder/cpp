#include <iostream>
using namespace std;
 int main()
 { 
  int n , count=0;
  cout << " enter number :" ;
  cin >> n;
  do
  {
    n=n/10;
    count++;
  }
  while( n>0);
  cout << " total digits = " << count;
  return 0;
}
  
  