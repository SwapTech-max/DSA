#include <bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> vec;
     int n;
     cin >> n;
        for (int i = 2; i*i <= n; i++)
        {
            while (n%i==0)
            {
                vec.push_back(i);
                n=n/i;
            }
        }
        if(n>1){
            vec.push_back(n);
        }
        for (int i = 0; i < vec.size(); i++)
        {
            /* code */
            cout<<vec[i]<<"*";
        }
        cout<<"1";
        return 0;
        
}
