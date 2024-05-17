#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(const string& newFirstName, float newWeight, int newAge);
    ~Person();
    
    float operator + (const Person& otherPerson) const;
 
    bool operator == (const Person& otherPerson) const;
    bool operator != (const Person& otherPerson) const;
   
    bool operator < (const Person& otherPerson) const;
    bool operator > (const Person& otherPerson) const;
    
    operator int() const; 
    operator string() const; 
    operator float() const; 
    float mWeight;
    string mFirstName;
    int mAge;
};