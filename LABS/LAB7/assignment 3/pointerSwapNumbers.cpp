#include<iostream>
using namespace std;

void swapNumbers(int *ptrA, int *ptrB){
    int temp=*ptrA;
    *ptrA=*ptrB;
    *ptrB=temp;

}
int main (){    
    int varA=25;
    int varB=100;

    cout<< "varA before swap: "<<varA<<endl;
    cout<< "varB before swap: "<<varB<<endl;

    swapNumbers(&varA, &varB);

    cout<< "varA after swap: "<<varA<<endl;
    cout<< "varB after swap: "<<varB<<endl;

    return 0;


}