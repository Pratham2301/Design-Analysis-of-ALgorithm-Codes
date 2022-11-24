<h1> DAA - TA 2 </h1>

Name : Prathamesh Rajendra Rajbhoj <br>
Sec  : A <br>
Sem  : 5 <br>
Roll : 53 <br>

<hr>

# Implement <ins>**SUM OF SUBSET**</ins> problem using Dynamic Programming approach and demonstrate any two applications in the form of test cases.

<p> For Roll No: 24,45,52,53 <p>

<hr>

## LOGIC 

```

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define ff first
#define ss second
#define sortvec(v)
```



<hr>

## CODE

```
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define ff first
#define ss second
#define sortvec(v) sort(v.begin(), v.end())
#define revvec(v) reverse(v.begin(), v.end())



vector<int> path;

void findSubset(vector<int> &v, int ind, int target, vector<vector<int>> &dp)
{
    if (ind < 0 || target < 0)
    {
        return;
    }

    if (target == 0)
    {
        return;
    }

    if (ind == 0)
    {
        path.push_back(v[ind]);
        return;
    }

    if (dp[ind][target] == 1)
    {
        if (ind >= 1 && target >= v[ind] && dp[ind - 1][target - v[ind]] == 1)
        {
            findSubset(v, ind - 1, target - v[ind], dp);
            path.push_back(v[ind]);
        }
        else if (ind >= 1 && target >= 0 && dp[ind - 1][target] == 1)
        {
            findSubset(v, ind - 1, target, dp);
        }
    }
}






bool subsetSum(vector<int> &v, int ind, int target, vector<vector<int>> &dp)
{
    // cout<<ind<<" "<<target<<endl;

    if (target == 0)
    {
        dp[ind][target] = 1;
        return true;
    }

    if (ind == 0)
    {
        if (v[0] == target)
        {
            dp[ind][target] = 1;
            return true;
        }
        else
        {
            dp[ind][target] = 0;
            return false;
        }
    }

    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }

    int notTake = subsetSum(v, ind - 1, target, dp);

    int take = false;

    if (v[ind] <= target)
    {
        take = subsetSum(v, ind - 1, target - v[ind], dp);
    }

    return dp[ind][target] = take | notTake;
}







int main()
{
    vector<int> v = {1, 2, 3, 5, 8, 9, 10};

    int n = v.size();
    int target = 17;
    
    

    cout << "Array is : ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n\n";
    
    

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));



    int ans = subsetSum(v, n - 1, target, dp);

    if (ans == 1)
    {
        cout << "YES, Subset with sum " << target << " is present " << "\n\n";
    }
    else
    {
        cout << "No Possible Subset" << "\n\n";
        return 0;
    }



    findSubset(v, n - 1, target, dp);
    

    cout << "Possible Subset is : ";
    for (auto i : path)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    return 0;
}
```



<hr>

## Test Cases
```
Array is : 1 2 3 5 8 9 10 

Target is : 17

YES, Subset with sum 17 is present 

Possible Subset is : 2 5 10 

```

```
Array is : 1 1 1 8 

Target is : 11

YES, Subset with sum 11 is present 

Possible Subset is : 1 1 1 8 


```

```
Array is : 1 2 3 4 

Target is : 15

No Possible Subset
```




<hr>

## APPLICATIONS
```
1. Coin on shop

```

```
2.

```