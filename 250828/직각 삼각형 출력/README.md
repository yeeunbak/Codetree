# [직각 삼각형 출력](https://www.codetree.ai/trails/complete/curated-cards/nl-pre-dependent-loops-2)

|유형|문제 경험치|난이도|
|---|---|---|
|[Trail 0 / 다중 반복문 / 반복 횟수의 제어](https://www.codetree.ai/trail-info/codetree-101/)|[[Challenge]직각 삼각형 출력](https://www.codetree.ai/trails/complete/curated-cards/nl-pre-dependent-loops-2/)|쉬움|



```
*           for(int j=0;j<1;j++)
* *                    j<2
* * *                  j<3
* * * *                j<4
```

```
for(int i=1;i<=4;i++)
{
  for(int j=0;j<i;j++)
    cout << "* ";
  cout << "\n";
}
```

