#include<iostream>

using namespace std;

inline int reverseNum(int n){ //메모리와 시간 절약 위해 인라인 함수 이용
    int ret = 0;
    ret += n/100; //100의자리가 1의자리로
    ret += ((n/10)%10)*10; //10의자리가 10의자리로
    ret += (n%10)*100; //1의 자리가 100의 자리로
    return ret;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    a = reverseNum(a);
    b = reverseNum(b);
    
    cout << (a > b ? a : b); //람다함수로 바꾼 것 중 더 큰 걸 출력
    return 0;
    
}
