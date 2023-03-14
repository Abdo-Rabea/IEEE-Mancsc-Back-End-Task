#include <iostream>
#include <cstring>

using namespace std;

/**
 * pre. assumes that this function takes only lower case string
 * Returns the index of the first non repeating character or -1 if none exist
 * This implementation takes linear time  and constant space
 * this function takes one parameter ( the lower case string )
 */

int firstNonRepeatingChar(const string &s){
    int c[26];
    memset(c, 0, sizeof c);
    for(char l : s){
        c[l-'a']++;
    }
    for(int i=0;i<s.size();i++){
        if(c[s[i]-'a']==1)
            return i;
    }
    return -1;
}
int main() {
    string s;
    cin >> s;
    int idx = firstNonRepeatingChar(s);
    if(idx==-1)
        cout << "There is no none-repeating character";
    else
        cout << s[idx];

}