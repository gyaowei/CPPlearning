#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

string simplifyPath(string path) {
        vector<string> stk;
        int nums = 0;
        string res;
        string dir ="";
        path += "/";
        for(int i = 0; i < path.size(); i++){
            if(path[i] != '/'){
                nums = i;
                while(path[i] != '/' && i < path.size()){
                    
                    dir += path[i];
                    i++;
                } 
                cout<< dir <<endl;
                //if(dir == ".") continue;
                if(dir == "..") 
                    if(!stk.empty()) stk.pop_back();
                else stk.push_back(dir);
                dir = "";
            }
        }
        for(auto& dire : stk){
            cout<< dire <<endl;
        }
        cout<< "dir" <<endl;
        return 0;
    
}


int main(int argc, char *argv[]) {
  string s;
  getline(cin, s);
  simplifyPath(s);
}
