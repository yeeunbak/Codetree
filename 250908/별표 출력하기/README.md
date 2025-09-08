# [별표 출력하기](https://www.codetree.ai/trails/complete/curated-cards/intro-print-star)

|유형|문제 경험치|난이도|
|---|---|---|
|[Trail 1 / 다중 반복문 / 행에 대해 대칭인 별 출력](https://www.codetree.ai/trail-info/novice-low/)|[[Concept]별표 출력하기](https://www.codetree.ai/trails/complete/curated-cards/intro-print-star/)|쉬움|

## 절반씩 출력
```
    for(int i=0;i<n;i++)      //별이 증가하는 부분
    {
        for(int j=0;j<=i;j++)
            cout << "* ";
        cout << "\n";            
    }

    for(int i=0;i<n-1;i++)    //별이 감소하는 부분
    {
        for(int j=0;j<n-i-1;j++)
            cout << "* ";
        cout << "\n";
    }
```

## 한 번에 전부 출력
```
int cnt=0;

    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<=cnt;j++)
            cout << "* ";
        cout << "\n";

        if(i<n-1)
            cnt++;
        else
            cnt--;
    }
```
