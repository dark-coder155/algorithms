#include <iostream>
using namespace std;

int  func(int a1[])
          {
            return a1[0] + a1[1] + a1[2] + a1[3] + a1[4];
          } 
          
int main() 
 {  
  int numbers[] = {10, 20, 30, 40, 50};	
  cout << func(numbers) << endl; 
  int numsbers1[] = {10, 20, -30, -40, 50};	
  cout << func(numsbers1) << endl;
  return 0;    
}