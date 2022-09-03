#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve()
{
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;

    int n1, n2, n3;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    cout << "\nEnter Size of 1st Stack : ";
    cin >> n1;

    cout << "\nEnter values to be pushed in Stack 1 : ";

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        sum1 += x;
        st1.push(x);
    }

    cout << "\nEnter Size of 2nd stack : ";
    cin >> n2;

    cout << "\nEnter values to be pushed in Stack 2 : ";

    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        sum2 += x;
        st2.push(x);
    }

    cout << "\nEnter Size of 3rd stack : ";
    cin >> n3;

    cout << "\nEnter values to be pushed in Stack 3 : ";

    for (int i = 0; i < n3; i++)
    {
        int x;
        cin >> x;
        sum3 += x;
        st3.push(x);
    }

    // cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;

    while (true)
    {
        if (sum1 >= sum2 && sum1 >= sum3)
        {

            sum1 -= st1.top();
            st1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= st2.top();
            st2.pop();
        }
        else if (sum3 >= sum1 && sum3 >= sum2)
        {
            sum3 -= st3.top();
            st3.pop();
        }

        if (sum1 == sum2 && sum2 == sum3)
        {
            cout << "\n\nMAXIMUM SUM IS POSSIBLE" << endl;
            cout << "\nSUM IS : " << sum1 << endl;
            return;
        }

        if (sum1 == 0 || sum2 == 0 || sum3 == 0)
        {
            cout << "\n\nMAX SUM IS 0\n" << endl;
            return;
        }
    }
}

int main()
{
    ll tc = 1;
    // cin >> tc;

    for (ll i = 1; i <= tc; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
}