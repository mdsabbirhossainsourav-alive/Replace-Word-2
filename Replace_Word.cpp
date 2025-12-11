#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        string s,x;
        cin >> s >> x;
        string str = "";
        for (int i=0; i<s.size();)
        {
            if (s.compare(i,x.size(),x) == 0) 
            {
                str += '#';
                i += x.size();
            } 
            else 
            {
                str += s[i];
                i++;
            }
        }
        cout << str << endl;
    }
    return 0;
}
