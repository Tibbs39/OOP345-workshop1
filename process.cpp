// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Sept 13, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#include <iostream>
#include <string.h>
#include "CString.h"
#include "process.h"

using namespace std;
using namespace w1;

// create CString and output it
void process(const char* someString, ostream& os) {
    CString string = CString(someString);
    os << string;
}