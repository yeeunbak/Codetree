#include <iostream>

using namespace std;

string str;
int q;

int main() {
    cin >> str >> q;
    int L = str.length();

    for (int i = 0; i < q; i++) {
        int opt;
        cin >> opt;

        if(opt == 1) 
        {
            char front = str[0];
            for(int j=1;j<L;j++)
                str[j-1] = str[j];
            str[L-1] = front;
        }
        else if(opt == 2)
        {
            char back = str[L-1];
            for(int j=L-1;j>=1;j--)
                str[j] = str[j-1];
            str[0] = back;
        }
        else if(opt == 3)
        {
            for(int j=0;j<L/2;j++)
            {
                char temp = str[j];
                str[j] = str[L-1-j];
                str[L-1-j] = temp;
            }
        }
        cout << str << "\n";
    }
    return 0;
}
