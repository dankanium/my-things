#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int sum;
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            sum = 0;
            for (int s=i; s<=j; s++)
            {
                sum = sum + a[s];
            }
            cout << sum << endl;
        }
    }
}