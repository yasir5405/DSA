#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);

    st.pop();

    cout << st.empty() << endl;

    cout << st.size() << endl;

    cout << st.top();
}