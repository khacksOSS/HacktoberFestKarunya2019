
@ vini7148

//code

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void kmp(string p, int n)
{
    vector<int> s(p.size());
    int bo = 0;
    s[0] = 0;
    for(int i=1;i<p.size();i++)
    {
        while((bo>0) && (p[i]!=p[bo]))
            bo = s[bo-1];
        if(p[i] == p[bo])
            bo ++;
        else
            bo = 0;
        s[i] = bo;
    }
    for(int i=n;i<s.size();i++)
    {
        if(s[i] == n)
            cout << i - n - n << " ";
    }
}

int main()
{
    string p,t;
    cin >> p >> t;
    string s;
    s = p + '$' + t;
    kmp(s,p.size());
}
