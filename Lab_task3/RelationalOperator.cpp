#include <iostream>
using namespace std;

int main()  {
    int a = 21;
    int b = 10;
   

   if( a == b ){
    cout << "Line1 - a is equal to b" << endl;
   } else {
    cout << "Line1 - a is not equal to b" << endl;
   }
    
   if ( a < b ){
    cout << "Line2 - a is less than b" << endl;
   }
   else{
    cout << "Line2 - a is not less than b" << endl;
   }

   if ( a > b ){
    cout << "Line3 - a is greater than b" << endl;
   }
   else{
    cout << "Line3 - a is not greater than b" << endl;
   }
  
  /*Let change the values of a and b*/
  a = 5; 
  b = 20;

  if(a <= b){
    cout << "Line4 - a is either less than \ or equal to b" << endl;
  }

  if( a >= b ){
    cout << "Line - a is either greater than \ or equal to b" << endl;
  }


    return 0;
}