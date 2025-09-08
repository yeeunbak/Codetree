# [별표 출력하기 4](https://www.codetree.ai/trails/complete/curated-cards/challenge-print-star-4)

|유형|문제 경험치|난이도|
|---|---|---|
|[Trail 1 / 다중 반복문 / 행에 대해 대칭인 별 출력](https://www.codetree.ai/trail-info/novice-low/)|[[Challenge]별표 출력하기 4](https://www.codetree.ai/trails/complete/curated-cards/challenge-print-star-4/)|쉬움|

## 1) 한 번에 출력하기
중간 행까지는 cnt 감소 -> 별의 개수 감소

중간 이후 행은 cnt 증가 -> 별의 개수 증가
```
int cnt = n;
for(int i=0;i<2*n-1;i++)
    {   
        for(int j=0;j<cnt;j++)
            cout << "* ";
        cout << "\n";

        if(i<n-1)
            cnt--;
        else
            cnt++;
    }
```

## 2) 한 번에 출력하기
중간 행 이전까지는 별의 개수를 감소하며 출력

중간 행 이후에는 별의 개수를 증가하며 출력
```
    int cnt = n;

    for(int i=0;i<2*n-1;i++)
    {
        if(i<n)
        {
            for(int j=n;j>i;j--)
                cout << "* ";
            cout << "\n";
        }
        else
        {
            for(int j=0;j<=i-n+1;j++)
                cout << "* ";
            cout << "\n";
        }
    }
```
