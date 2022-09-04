#include <bits/stdc++.h>
using namespace std;

void display_stack(int *, int);
void push_stack(int *, int *, int);
void pop_stack(int *, int *);
int stack_empty(int);
int stack_full(int *, int);
int top_stack(int *, int);

/////////////////////////////////////////* MAIN FUNCTION BEEGINS *////////////////////////////////////////////////

void solve()
{
    int *stack1;
    int *stack2;
    int *stack3;

    stack1 = new int();
    stack2 = new int();
    stack3 = new int();

    int size1, size2, size3;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int index1 = -1, index2 = -1, index3 = -1;

    cout << "\nEnter Size of 1st Stack : ";
    cin >> size1;

    cout << "\nEnter values to be pushed in Stack 1 : ";

    for (int i = 0; i < size1; i++)
    {
        int x;
        cin >> x;
        sum1 += x;
        push_stack(stack1, &index1, x);
    }

    cout << "\nEnter Size of 2nd stack : ";
    cin >> size2;

    cout << "\nEnter values to be pushed in Stack 2 : ";

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        sum2 += x;
        push_stack(stack2, &index2, x);
    }

    cout << "\nEnter Size of 3rd stack : ";
    cin >> size3;

    cout << "\nEnter values to be pushed in Stack 3 : ";

    for (int i = 0; i < size3; i++)
    {
        int x;
        cin >> x;
        sum3 += x;
        push_stack(stack3, &index3, x);
    }

    // cout<<endl<<index1<<" "<<index2<<" "<<index3<<endl;
    // cout<<endl<<sum1<<" "<<sum2<<" "<<sum3<<endl;

    // display_stack(stack1, index1);
    // display_stack(stack2, index2);
    // display_stack(stack3, index3);

    // cout<<endl<<top_stack(stack1, index1);
    // cout<<endl<<top_stack(stack2, index2);
    // cout<<endl<<top_stack(stack3, index3);

    // pop_stack(stack1,&index1);
    // pop_stack(stack2,&index2);
    // pop_stack(stack3,&index3);

    // cout<<endl<<top_stack(stack1, index1);
    // cout<<endl<<top_stack(stack2, index2);
    // cout<<endl<<top_stack(stack3, index3);

    while (true)
    {
        if (sum1 >= sum2 && sum1 >= sum3)
        {

            sum1 -= top_stack(stack1, index1);
            pop_stack(stack1, &index1);
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= top_stack(stack2, index2);
            pop_stack(stack2, &index2);
        }
        else if (sum3 >= sum1 && sum3 >= sum2)
        {
            sum3 -= top_stack(stack3, index3);
            pop_stack(stack3, &index3);
        }

        if (sum1 == sum2 && sum2 == sum3)
        {
            cout << endl << endl << "MAXIMUM SUM IS POSSIBLE" << endl;
            cout << "SUM IS : " << sum1 << endl;
            return;
        }

        if (sum1 == 0 || sum2 == 0 || sum3 == 0)
        {
            cout << endl << endl << "MAX SUM IS 0" << endl;
            return;
        }
    }

    return;
}

int main()
{
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

void push_stack(int stack[], int *top_s, int item)
{
    *top_s = *top_s + 1;
    stack[*top_s] = item;
    // cout<<"\nindex : "<<*top_s<<" -- value : "<<item;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

void pop_stack(int stack[], int *top_s)
{
    stack[*top_s] = 0;
    *top_s = *top_s - 1;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

int top_stack(int *stack, int top_s)
{
    if (top_s < 0)
        return -1;
    return stack[top_s];
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

void display_stack(int arr[], int top)
{
    // cout<<"topsize : "<<top<<endl;

    cout << "STACK ELEMENTS ARE : \n";
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
