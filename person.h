#pragma once
#include <string>
using namespace std;

class person
{
    public :
    person();
    person (string nfirstname, float newWeight);
float calculateweight();
    ~person();
    person operator + (const person & otherperson);
person operator==(const person& b);
person operator !=(const person&v);
person operator <(const person& j);
person operator >(const person& k);
    private:
    float mWeight;
    string mFirstName;
    int mAge;
};