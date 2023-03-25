#include <bits/stdc++.h>
using namespace std;
#include <typeinfo>
    


string caesarCipher(string s, int k) {
    string result = "";
 
    // traverse text
    for (int i = 0; i < s.length(); i++) {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (s[i] >=65 && s[i] <=90)
            result += char(int(s[i] + k - 65) % 26 + 65);
 
        // Encrypt Lowercase letters
        else if (s[i] >=97 && s[i] <=122)
            result += char(int(s[i] + k - 97) % 26 + 97);
        else 
            result+=char(s[i]);
    }
 
    // Return the resulting string
    return result;
}

int main(int argc, char **argv){
    ios_base::sync_with_stdio(false); //fast I/O
    cin.tie(NULL);                    //
    cout.tie(NULL);
    string test="abcdefghijklmnopqrstuvwxyz"; 
    char a='a';

    //cout<<inMinus('a', 3)<<endl;
    cout <<caesarCipher(test,3)<<endl;

}
