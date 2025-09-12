#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char sym;
    int tem;

    int room[4] = {};   // i = A B C D ( 0 1 2 3 )

    for(int i=0;i<3;i++)
    {
        cin >> sym >> tem;
        if((sym=='Y') && (tem>=37))
            room[0]++;
        else if((sym=='N') && (tem>=37))
            room[1]++;
        else if((sym=='Y') && (tem<37))
            room[2]++;
        else
            room[3]++;
    }

    for(int i=0;i<4;i++)
        cout << room[i] << " ";

    if(room[0]>=2)
            cout << "E";
    
    return 0;
}