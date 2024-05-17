#include <iostream>
#include "Person.h"

int main() {
  
    Person Jane("Jane", 60.0f, 25);
    
    string janeFirstName = Jane;
    cout << "Jane's First Name: " << janeFirstName << endl;
    
   
    float janeWeight = Jane;
    cout << "Jane's Weight: " << janeWeight << endl;
    
    return 0;
}