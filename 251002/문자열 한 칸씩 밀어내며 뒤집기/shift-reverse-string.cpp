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
            str = str.substr(1, L-1) + str.substr(0, 1); 
        }
        else if(opt == 2)
        {
            str = str.substr(L-1, 1) + str.substr(0, L-1);
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
