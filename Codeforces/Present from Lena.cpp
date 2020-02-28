#include<bits/stdc++.h>
#define oh_guru_hoja_shuru int main()
#define thooke_tali return 0
using namespace std;
oh_guru_hoja_shuru{
    int n;
    cin>>n;
    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
    thooke_tali;
}