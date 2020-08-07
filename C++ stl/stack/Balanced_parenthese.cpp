#include <bits/stdc++.h>
#include <stack>

using namespace std;

bool check(string exp)
{
    stack <char> s;
    int str_len = exp.size();
    for(int i=0;i<str_len;i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            s.push(exp[i]);
        }
        else if(exp[i] == ')')
        {
            if(s.empty())
                return false;
            if(s.top() == '(')
            {
                s.pop();
            }
        }
        else if(exp[i] == '}')
        {
            if(s.empty())
                return false;
            if(s.top() == '{')
            {
                s.pop();
            }
        }
        else if(exp[i] == ']')
        {
            if(s.empty())
                return false;
            if(s.top() == '[')
            {
                s.pop();
            }
        }
    }
    bool ans = s.empty()? true : false;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string expression;
        getline(cin, expression);
        bool result = check(expression);
        if(result == true)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }

    return 0;
}

