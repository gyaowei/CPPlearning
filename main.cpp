#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3[a2[c]]";
    string res;
    int i = 0, count = 0;
    int n = s.size();
    stack<char> stk;
    while(i < n){
        if(s[i] >= 'a' && s[i] <= 'z'){
            while(s[i] >= 'a' && s[i] <= 'z'){
                i++;
                count++;
            }
            res.append(s.substr(i - count, count));
            count = 0;
        }else{
            while(s[i] >= '0' && s[i] <= '9'){
                i++;
                count++;
            }
            string s1 = s.substr(i - count, count);
            int m = stoi(s1);
            count = 0;    
            i++;
            while(s[i] >= 'a' && s[i] <= 'z'){
                i++;
                count++;
            }
            string s2 = s.substr(i - count, count);
            for(int j = 0; j < m; j++){
                res.append(s2);
            }
            count = 0;    
            i++;
        }

    }
    for(char c : res){
        cout << c;
    }
    cout << endl;
    return 0;
}