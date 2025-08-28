# [직각 삼각형 출력](https://www.codetree.ai/trails/complete/curated-cards/nl-pre-dependent-loops-2)

|유형|문제 경험치|난이도|
|---|---|---|
|[Trail 0 / 다중 반복문 / 반복 횟수의 제어](https://www.codetree.ai/trail-info/codetree-101/)|[[Challenge]직각 삼각형 출력](https://www.codetree.ai/trails/complete/curated-cards/nl-pre-dependent-loops-2/)|쉬움|


#### 1. 왼쪽 별찍기
```
*           for(int j=0;j<1;j++)
* *                    j<2
* * *                  j<3
* * * *                j<4

----------------------------------

for(int i=1;i<=4;i++)
{
  for(int j=0;j<i;j++)
    cout << "* ";
  cout << "\n";
}
```

#### 2. 역삼각형 왼쪽 별찍기
```
* * * * *    for(int j=0;j<5;j++)
* * * *                  j<4
* * *                    j<3
* *                      j<2
*                        j<1

----------------------------------
int n=5
for(int i=1;i<=n;i++)
{
  for(int j=0;j<i;j++)
    cout << "* ";
  cout << "\n";
}
```
#### 3. 왼쪽 정렬 별찍기 +=2단위
```
//입력받는 N에 따라 별 모양이 달라짐

N = 5일 때
*          int i=1    j=0
***            i=2    j=0 1 2
*****          i=3    j=0 1 2 3 4 
*******        i=4    j=0 1 2 3 4 5 6
*********      i=5    j=0 1 2 3 4 5 6 7 8

-------------------------------------------------------------------------

for(int i=1;i<=N;i++)
{
  for(int j=0;i<(2*i-1);j++)
    cout << "*";
  cout << "\n";
}
```


#### 4. 가운데 정렬 별찍기
```
                                     공백           별찍기
        *               int i=1      j=0 1 2 3      j=0
      * * *                 i=2      j=0 1 2        j=0 1 2
    * * * * *               i=3      j=0 1          j=0 1 2 3 4
  * * * * * * *             i=4      j=0            j=0 1 2 3 4 5 6
* * * * * * * * *           i=5      j              j=0 1 2 3 4 5 6 7 8

-------------------------------------------------------------------------

int n=5
for(int i=1;i<=n;i++)
{
  //공백
  for(int j=0;j<n-1;j++)
    cout << " ";

  //별
  for(int j=0;j<(2*i-1);j++)
    cout << "* ";
  cout << "\n";
}
```

