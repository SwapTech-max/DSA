#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void pattern1(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << '*'; // mark that not to put new line here because
                             // after every print it goes to new line
            } // so put new line after the completion of both loop
            cout << endl;
        }
    } // time complexity O(n^2)
};
int main()
{
    Solution obj;
    int n;
    cin >> n;
    obj.pattern1(n);
    return 0;
}