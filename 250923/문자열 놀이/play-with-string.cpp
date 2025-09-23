#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int q;
    cin >> s >> q;

    for(int i=0;i<q;i++)
    {
        int opt;
        cin >> opt;

        if(opt==1)
        {
            int n1, n2;
            cin >> n1 >> n2;
            swap(s[n1-1], s[n2-1]);
        }
        else if(opt==2)
        {
            char x, y;
            cin >> x >> y;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==x)
                    s[j]=y;
            }
        }
        cout << s << "\n";
    }
    return 0;
}