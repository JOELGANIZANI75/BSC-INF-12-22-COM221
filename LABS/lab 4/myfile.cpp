#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ofstream MyFile("exampleFile.txt");

    
    if (MyFile.is_open()) {
        cout << "File created successfully." << endl;

        
        MyFile.close();
    } else {
        cout << "Error: Unable to create the file." << endl;
    }

    return 0;
}