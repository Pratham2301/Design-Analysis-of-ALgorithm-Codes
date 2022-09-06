#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

void solve()
{
    vector<vector<vector<int>>> arr;

    vector<vector<int>> demo1;

    int n = 100;

    for (int i = 0; i < n; i++)
    {
        vector<int> demo2;

        for (int j = 0; j < n; j++)
        {
            int val = rand() % 9;

            demo2.push_back(val);
        }

        demo1.push_back(demo2);
    }

    for (int i = 1; i <= n; i++)
    {
        vector<vector<int>> demo3;

        for (int j = 0; j < i; j++)
        {
            vector<int> demo4;

            for (int k = 0; k < i; k++)
            {
                demo4.push_back(demo1[j][k]);
            }

            demo3.push_back(demo4);
        }

        arr.push_back(demo3);
    }

    // for(auto i:arr)
    // {
    //     for(auto j:i)
    //     {
    //         for(auto k:j)
    //         {
    //             cout<<k<<" ";
    //         }
    //         cout<<endl;
    //     }

    //     cout<<endl<<endl;
    // }

    ll sz = 100;

    while (1)
    {
        cout << "Choices Available : " << endl;
        cout << "1. Comression" << endl;
        cout << "2. Decomression" << endl;
        cout << "3. Exit" << endl
            << endl;

        ll choice;
        cin >> choice;

        if (choice != 1 && choice != 2)
        {
            cout<<"Exit!!!\n\n";
            return;
        }

        ll inp;
        


        if (choice == 1)
        {
            cout << "Enter Value by which you want to compress : ";
            cin >> inp;
            inp=abs(inp);
            inp *= -1;
            cout<<endl;
        }
        else if (choice == 2)
        {
            cout << "Enter Value by which you want to expand : ";
            cin >> inp;
            inp=abs(inp);
            cout<<endl;
        }

        cout<<endl;

        sz += inp;

        if(sz>100 || sz<1)
        {
            sz-=inp;
            cout<<"Invalid Input, Please Verify Size\n\n"<<endl;
            continue;
        }

        vector<vector<int>> demo6 = arr[sz - 1];

        cout<<"Current Matrix Size : "<<sz<<" x "<<sz<<endl<<endl;

        for (auto j : demo6)
        {
            for (auto k : j)
            {
                cout << k << " ";
            }
            cout << endl;
        }

        cout << endl
            << endl;
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
