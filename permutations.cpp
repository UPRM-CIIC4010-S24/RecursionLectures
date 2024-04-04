#include <string>
#include <vector>

using namespace std;

vector<string> permutations(string w) {

    vector<string> result;
    if (w.size() == 0) {
        result.push_back(w);  // Insert the empty string
    } else {

        for (int i=0; i<w.size(); i++) {

            char nextLetter = w[i];
            string leftString = w.substr(0, i);
            string rightString = w.substr(i + 1, w.size() - (i + 1));
            string shorterWord = leftString + rightString;
            vector<string> shorterPerms = permutations(shorterWord);
            for (string sp : shorterPerms) {
                result.push_back(nextLetter + sp);
            }
        }
     }
    return result;
}