#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    int dp[n][m];

    for(int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    for(int j = 0; j < m; j++)
    {
        dp[0][j] = 1;
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "The number of possible paths is: " << dp[n-1][m-1] <<
         endl;
    return 0;
}
