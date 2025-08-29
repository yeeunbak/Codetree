# [상하로 반복하며 출력](https://www.codetree.ai/trails/complete/curated-cards/nl-pre-2d-array-pattern-printing-2)

|유형|문제 경험치|난이도|
|---|---|---|
|[Trail 0 / 2차원 배열 / 2차원 배열 패턴 출력](https://www.codetree.ai/trail-info/codetree-101/)|[[Challenge]상하로 반복하며 출력](https://www.codetree.ai/trails/complete/curated-cards/nl-pre-2d-array-pattern-printing-2/)|쉬움|


#### 1. 지그재그 수 패턴 출력하기
```
1 2 3 4
8 7 6 5
9 10 11 12
16 15 14 13


int n = 4;      // 정사각형의 크기
int cnt = 1;    // 수의 시작 값

for(int i = 0; i < n; i++){
    int row[4];
    
    // 1단계: 기본 정수 배열 생성하기
    for(int j = 0; j < n; j++){
        row[j] = cnt;
        cnt += 1;
    }
    
    // 2단계: 짝수 행과 홀수 행 구분하기
    if(i % 2 != 0){
        // 3단계: 홀수 행의 숫자 순서 뒤집어서 출력하기
        for(int j = n - 1; j >= 0; j--){
            cout << row[j] << " ";
        }
    }
    else{
        // 짝수 행이라면 그대로 출력하기
        for(int j = 0; j < n; j++){
            cout << row[j] << " ";
        }
    }
    
    cout << "\n";
}
```

#### 2. 세로 지그재그 수 패턴 출력하기
```
1 8 9 16
2 7 10 15
3 6 11 14
4 5 12 13

int n = 4;      // 정사각형의 크기
int cnt = 1;    // 수의 시작 값
int array[4][4]; // 1단계: 2차원 배열 만들기

// 2단계: 열 순서로 순회하기
for(int i = 0; i < n; i++){
    // i는 i번째 행이 아닌 i번째 열을 의미합니다.
    
    // 3단계: 짝수 열과 홀수 열 구분하여 값 채우기
    if(i % 2 != 0){
        for(int j = n - 1; j >= 0; j--) {
            array[j][i] = cnt;
            cnt++;
        }
    }
    else{
        for(int j = 0; j < n; j++) {
            array[j][i] = cnt;
            cnt++;
        }
    }
}

// 4단계: 출력하기
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << array[i][j] << " ";
    }
    cout << "\n";
}

```

#### 3. 퀴즈
```
1 2 3 4
5 6 7 8
12 11 10 9
16 15 14 13

#include <iostream>
using namespace std;

int main() {
    int n = 4;      // 정사각형의 크기
    int cnt = 1;    // 수의 시작 값

    for(int i = 0; i < n; i++){
        int row[4];
        
        for(int j = 0; j < n; j++){
            row[j] = cnt;
            cnt += 1;
        }
        
        if(i % 4 >= 2){
            for(int j = 0; j < n / 2; j++){
                int temp = row[j];
                row[j] = row[n - j - 1];
                row[n - j - 1] = temp;
            }
        }
        
        for(int j = 0; j < n; j++){
            cout << row[j] << " ";
        }
        cout << "\n";
    }
}

```

#### 4. 좌우로 반복하며 출력
```
1234
4321
1234
4321

#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    for(int i=0;i<N;i++)
    {
        if(i%2==0)
        {
            //그냥 출력
            for(int j=1;j<=N;j++)
                cout << j;
        }
        else
        {
            //반대로 출력
            for(int j=N;j>0;j--)
                cout << j;
        }
        cout<<"\n";
    }
    return 0;
}
```

#### 5. 상하로 반복하며 출력
```
1414
2323
3232
4141

#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int arr[N][N];

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(j%2!=0)
            {
                cout << i;
            }
            else
            {
                cout << N-i+1;
            }
        }
        cout << "\n";
    }
    return 0;
}
```
