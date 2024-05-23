#include "function.h"
using namespace std;
#define DOUBLE
#define CHAR
int main()
{
    const int size = 10;
#ifdef INTEGER
    int intMass[size];
    createMass(intMass, size);
    cout << "Integer massive ";
    coutmass(intMass, size);
    cout << "Minimum element in massive " << minimum(intMass, size) << endl;
    cout << "Maximum element in massive " << maximum(intMass, size) << endl;
    MassSort(intMass, size);
    cout << "Sorted elements in massive ";
    coutmass(intMass, size);
    redMass(intMass, 100);
    cout << "Modified massive of type int ";
    coutmass(intMass, size);
    
#defined DOUBLE
    double doubleMass[size];
    createMass(doubleMass, size);
    cout << "Double massive ";
    coutmass(doubleMass, size);
    cout << "Minimum element in massive " << minimum(doubleMass, size) << endl;
    cout << "Maximum element in massive " << maximum(doubleMass, size) << endl;    MassSort(doubleMass, size);
    cout << "Sorted elements in massive ";
    coutmass(doubleMass, size);
    redMass(doubleMass, 99.99);
    cout << "Modified massive of type double ";
    coutmass(doubleMass, size);
    
#defined CHAR
    char charMass[size];
    createMass(charMass, size);
    cout << "Char massive ";
    coutmass(charMass, size);
    cout << "Minimum element in massive " << minimum(charMass, size) << endl;
    cout << "Maximum element in massive " << maximum(charMass, size) << endl;
    MassSort(charMass, size);
    cout << "Sorted elements in massive ";
    coutmass(charMass, size);
    redMass(charMass,'Z');
    cout << "Modified massive of type char ";
    coutmass(charMass, size);
#endif
}
