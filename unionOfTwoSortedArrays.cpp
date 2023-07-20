#include <bits/stdc++.h>
using namespace std;

set < int > sortedArray(vector < int > &a, vector < int > &b) {
   set<int>s;
    for(int i=0;i<a.size();i++)
    {
        s.insert(a[i]);
    }
    for(int j=0;j<b.size();j++){
        s.insert(b[j]);
    }
    return s;
}
int main() 
{
    vector<int>a = {1,2,3,4,6};
    vector<int>b = {2,3,5};

    for(auto x:sortedArray(a,b)){
      cout<<x<<' ';
    }
    return 0;
}
