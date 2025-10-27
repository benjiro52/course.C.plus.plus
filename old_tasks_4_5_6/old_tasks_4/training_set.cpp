#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b != 0 && c == 0) {
        cout << "3";
        return 0;
    }
    if (a == 0 && b == 0 && c != 0) {
        cout << "2";
        return 0;
    }


    set<double> st;


    st.insert(a+b+c);
    st.insert(a+b-c);
    st.insert(a+b*c);
    if (c != 0) st.insert(a + b / c);
    st.insert(a-b+c);
    st.insert(a-b-c);
    st.insert(a-b*c);
    if (c != 0) st.insert(a - b / c);

    st.insert(a*b +c);
    st.insert(a*b-c);
    st.insert(a*b*c);
    if (c != 0) st.insert(a * b / c);

    if (b != 0) {
        st.insert(a / b + c);
        st.insert(a / b - c);
        st.insert(a / b * c);
        if (c != 0) st.insert(a / b / c);
    }

    cout << st.size() << endl;

    return 0;
}