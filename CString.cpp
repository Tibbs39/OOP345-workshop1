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

using namespace std;
using namespace w1;

extern int STORED = 3;

namespace w1 {

    // default constructor
    CString::CString() : MAX{STORED} {
        string = nullptr;
    }

    // constructor
    CString::CString(const char* input) : MAX{STORED} {
        if (input) {
            //cout << "Valid input, String created!" << endl;
            string = new char[MAX + 1];
            strncpy(string, input, MAX);
            string[MAX] = '\0';
        } else {
            cout << "Invalid input" << endl;
            string = nullptr;
        }
    }

    // copy constructor
    CString::CString(const CString& other) : MAX{STORED} {
        // deep copy
        string = new char[MAX + 1];
        strncpy(string, other.string, MAX);
        string[MAX] = '\0';
        *this = other;
    }

    // copy assignment operator
    CString& CString::operator=(const CString& other) {
        if (this != &other) {
            //deep copy
            delete [] string;
            string = new char[MAX + 1];
            strncpy(string, other.string, MAX);
            string[MAX] = '\0';
        } else {
            cout << "Skipped! Self-assignment!" << endl;
        }
       
        return *this;
    }

    // deconstructor
    CString::~CString() {
        delete [] string;
    }

    // display the output along with the count
    ostream& CString::display(ostream& os) const {
        static int cnt = 0; 
        if (string) {
            os << cnt << ": " << string << endl;
            cnt += 1;
        } else {
            os << "Invalid String" << endl;
        }

        return os;
    }

    // helper function
    ostream& operator<<(ostream& os, const CString& str) {
        str.display(os);
        return os;
    }

}