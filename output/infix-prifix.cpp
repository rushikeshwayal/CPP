#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int pre(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}
string infixtoprefix(string s) {
reverse(s.begin(),s.end());

    stack<char> st;
    string res;
    int k = s.length();
    for (int i = 0; i < k; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            res = res + s[i];

        } else if (s[i] == '(') {
            st.push(s[i]);

        } else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                res = res + st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        } else {
            while (!st.empty() && pre(st.top()) >= pre(s[i])) {
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        res = res + st.top();
  st.pop();
    }


    reverse(res.begin(),res.end());
    return res;
}

int main()
{
cout << infixtoprefix("a-b/c") << endl;
return 0;
}