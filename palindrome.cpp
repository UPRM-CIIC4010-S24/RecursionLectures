#include <string>

using namespace std;

bool isPalindrome( string w) {

    if (w.size() <= 1) {
        return true;
    } else {
        if (w[0] == w[w.size()-1]) {
            return isPalindrome(w.substr(1,w.size()-2));
        } else {
            return false;
        }
    }
}