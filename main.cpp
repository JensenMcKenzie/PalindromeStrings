#include <iostream>
#include "PString.h"

int main() {
    PString p("chic");
    cout << p << " is palindrome: " << p.isPalindrome() << endl;
    PString p2("Book");
    cout << p2 << " is palindrome: " << p2.isPalindrome() << endl;
    PString p3("Kayak");
    cout << p3 << " is palindrome: " << p3.isPalindrome() << endl;
    PString p4("1x2x3x4x5");
    cout << p4 << " is palindrome: " << p4.isPalindrome() << endl;
    PString p5("25 ABC 9cba52");
    cout << p5 << " is palindrome: " << p5.isPalindrome() << endl;
    PString p6("Don’t nod");
    cout << p6 << " is palindrome: " << p6.isPalindrome() << endl;
    PString p7("Not even close!");
    cout << p7 << " is palindrome: " << p7.isPalindrome() << endl;
    PString p8("A man, a plan, a canal -- Panama");
    cout << p8 << " is palindrome: " << p8.isPalindrome() << endl;

}
