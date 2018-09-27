// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Sept 13, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#ifndef W1_CSTRING_H
#define W1_CSTRING_H

#include <iostream>

namespace w1 {
    class CString {
        const int MAX; // maximum number of characters
        char* string;

        public:
            // default constructor
            CString();
            // constructor
            CString(const char* input);
            // copy constructor
            CString(const CString& other);
            // copy assignment operator
            CString& operator=(const CString& other);
            // deconstructor
            ~CString();
            // display
            std::ostream& display(std::ostream&) const;
    };

    // helper function
    std::ostream& operator<<(std::ostream&, const CString&);
}

#endif