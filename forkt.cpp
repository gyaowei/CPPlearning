#include <bits/stdc++.h>
using namespace std;
// we have defined the necessary header files here FOR this problem.
// IF additional header files are needed IN your program, please IMPORT here.
int main()
{
    string line;
    vector<string> items;
    string item;
    getline(cin, line);
    stringstream ss(line);
    int sum = 0;
    while(getline(ss, item, ' ')){
        items.push_back(item);
    }
    for(string a : items){
        sum += a.size();
    }
    double w;
    w = (double) sum / items.size();
    //cout << fixed << setprecision(2) << w << endl;
    printf("%.2lf\n", w);
    // please define the C input here. FOR EXAMPLE: int n; scanf("%d",&n);
    // please finish the FUNCTION body here.
    // please define the C output here. FOR EXAMPLE: printf("%d",a);
    return 0;
}
