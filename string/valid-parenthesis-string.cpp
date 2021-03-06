#include "str.h"

/*
 * Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
An empty string is also valid.
Example 1:
Input: "()"
Output: True
Example 2:
Input: "(*)"
Output: True
Example 3:
Input: "(*))"
Output: True
Note:
The string size will be in the range [1, 100].
 */

bool checkValidString(std::string s) {
    int low = 0;
    int high = 0;

    for(auto ch : s) {
        if(ch == '(') {
            ++low;
            ++high;
        } else if(ch == ')') {
            --low;
            --high;
        } else {
            --low;
            ++high;
        }

        low = std::max(low, 0);

        if(high < 0)
            return false;
    }

    return low == 0 /*|| high == 0 We do not even need to check this.*/;
}