#include <iostream>
using namespace std;

int st, ed;
int final_cnt=0;
int main() {
    cin >> st >> ed;
    for(st;st<=ed;st++)
    {
        int cnt=0;
        for(int i=1;i<=st;i++)
        {   
            if(st%i==0)
            {   
                cnt++;
            }
        }

        if(cnt==3)
        {
            final_cnt++;
        }
    }
    cout<<final_cnt;
    // Please write your code here.
    return 0;
}
