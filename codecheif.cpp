#include <iostream>
#include<iterator>
#include<unordered_map>
#include<iterator>

using namespace std;

#define ll long long int
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
#endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int testcase;cin>>testcase;
    while(testcase--)
    {
        unordered_map<int, int> a;
        unordered_map<int, int> b;
        int n,j=0;
        while(n--)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        while(n--)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        for (auto x : mp) 
        {
            if(((x.second)&1)==1)
            {
                j++;
                break;
            }

        }
        // cout << x.first << " " << x.second << endl; 
        if(j!=0)
        {
            cout<<"-1";
        }

    }
    return 0;
}