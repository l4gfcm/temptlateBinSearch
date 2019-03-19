#include <iostream>
#include <vector>
#include <list>

#include "binsearch.h"

using namespace std;



int main()
{
    const int nTest = 10;

    vector<int> elemsV;
    for (int i = 0; i < nTest; i++) {
        elemsV.push_back(i);
    }

    for (int i = 0; i < nTest; i++) {
        cout << *(binSearch(elemsV.cbegin(), elemsV.cend(), i)) << endl;
    }

    list<int> elemsL;
    for (int i = 0; i < nTest; i++) {
        elemsL.push_back(i);
    }

    for (int i = 0; i < nTest; i++) {
        cout << *(binSearch(elemsL.cbegin(), elemsL.cend(), i)) << endl;
    }

    return 0;
}
