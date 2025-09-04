#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int day;
    cin >> day;
    int c_room=0, hall=0, toi=0;

    for(int i=0;i<=day;i++)
    {
        if(i%2==0 && i%3!=0 && i%12!=0)
            c_room++;
        else if(i%3==0 && i%12!=0)
            hall++;
        else if(i%12==0 && i!=0)
            toi++;
    }
    cout << c_room << " " << hall << " " << toi;
    return 0;
}