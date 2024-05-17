#include "Person.h"


Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {
}


Person::Person(const string& newFirstName, float newWeight, int newAge) 
    : mFirstName(newFirstName), mWeight(newWeight), mAge(newAge) {
}


Person::~Person() {
}


float Person::operator + (const Person& otherPerson) const {
    return this->mWeight + otherPerson.mWeight;
}


bool Person::operator == (const Person& otherPerson) const {
    return (this->mFirstName == otherPerson.mFirstName && this->mWeight == otherPerson.mWeight && this->mAge == otherPerson.mAge);
}


bool Person::operator != (const Person& otherPerson) const {
    return !(*this == otherPerson);
}


bool Person::operator < (const Person& otherPerson) const {
    return this->mAge < otherPerson.mAge;
}


bool Person::operator > (const Person& otherPerson) const {
    return this->mAge > otherPerson.mAge;
}


Person::operator int() const {
    return mAge;
}


Person::operator string() const {
    return mFirstName;
}


Person::operator float() const {
    return mWeight;
}