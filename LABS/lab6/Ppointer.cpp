#include <iostream> 
using namespace std; 

int main() { 
    int firstValue; 
    int secondValue; 
    int *pPointer = nullptr; 

    
    pPointer = &firstValue; 
    *pPointer = 10; 

 
    pPointer = &secondValue; 
    *pPointer = 20; 

    cout << "firstValue is " << firstValue << '\n'; 
    cout << "secondValue is " << secondValue << '\n'; 

    return 0; 
}