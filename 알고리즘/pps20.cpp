/*
'******************************************************************************
' 파일명    : pps20.cpp
' 작성자    : 차경민
' 목적      : Problem Solving
' 날짜      : 2020/07/17
' 문제      : 가위 바위 보
'
' 문제 설명 : A, B 두 사람이 가위바위보 게임을 합니다. 총 N번의 게임을 하여 A가 이기면 A를 출력하고,
'B가 이기면 B를 출력합니다. 비길 경우에는 D를 출력합니다. 가위, 바위, 보의 정보는 1:가위, 2:바위, 3:보로 정하겠습니다.
'예를 들어 N=5이면
'    회수 1 2 3 4 5
'A의 정보 2 3 3 1 3
'B의 정보 1 1 2 2 3
'    승자 A B A B D
'두 사람의 각 회의 가위, 바위, 보 정보가 주어지면 각 회를 누가 이겼는지 출력하는 프로그램을 작성하세요.
'            
' 출력 설명 : 각 줄에 각 회의 승자를 출력한다. 비겼을 경우 D를 출력한다
' 
'예제   5
'       2 3 3 1 3
'       1 1 2 2 3    
'    => A B A B D
'******************************************************************************
*/
#include <iostream>
using namespace std;
int main(){
    //freopen("input.txt", "rt", stdin);
    int n, i, a[100], b[100];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1 && b[i]==3)  a[i]+=3;
        else if(a[i]==3 && b[i]==1) b[i]+=3;
        
        if(a[i]>b[i]) cout << "A" << endl;
        else if(a[i]<b[i])  cout << "B"<< endl;
        else cout << "D" << endl;
    }
    return 0;
}