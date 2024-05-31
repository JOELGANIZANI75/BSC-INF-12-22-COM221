#include <iostream>
using namespace std;

int main()  {
    int a = 5;
    int b = 20;
    int c;
   

   if( a && b ){
    cout << "Line1 - condition is true" << endl;
   } 
    
   if ( a || b ){
    cout << "Line2 - conditon is true" << endl;
   }
   
  /*Let change the values of a and b*/
  a = 0; 
  b = 10;

  if( a && b ){
    cout << "Line3 - conditon is true" << endl;
  } else {
    cout << "Line4 - conditon is true" << endl;

  }

  if( !a && b ){
    cout << "Line5 - conditon is not true" << endl;
  }

    return 0;
}