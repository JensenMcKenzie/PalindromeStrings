//
// Created by mathe on 3/10/2022.
//

#include <iostream>
#include <algorithm>
#include "PString.h"
using namespace std;

PString::PString(string s) {
    this->assign(string(s));
}

bool PString::isPalindrome() {
    string s = this->data();
    remove(s.begin(),s.end(), ' ');
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        if (!isalnum((int)s[i])){
            remove(s.begin(),s.end(),s[i]);
        }
    }
    string reversed = "";
    for (int i = s.size()-1; i >= 0; i--){
        reversed+=s[i];
    }
    cout << endl << s << " : " << reversed << endl;
    return reversed == s;
}