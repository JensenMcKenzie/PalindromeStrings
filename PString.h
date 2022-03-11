//
// Created by mathe on 3/10/2022.
//

#ifndef PALINDROMESTRINGS_PSTRING_H
#define PALINDROMESTRINGS_PSTRING_H

#include <string>

using namespace std;

class PString : public string{
    public :
        PString(string);
        bool isPalindrome();
};


#endif //PALINDROMESTRINGS_PSTRING_H
