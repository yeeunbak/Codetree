#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    bool is_same = false;
    // Please write your code here.
    for(int i=0;i<A.length();i++)
    {
        int num = 0;
        if(A[i]==B[0])
        {
            int cnt=i;
            while(A[cnt++]==B[num++])
            {
                is_same = true;
                if(is_same==true)
                    A.erase(i, B.length());
            }
        }
    }
    cout << A;
    return 0;
}
