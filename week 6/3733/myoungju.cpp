#include <iostream>
using namespace std;
typedef unsigned long long Long;

Long ubs(Long n, Long length=1){
	if(n == 1)
		return length;
	
	//짝 홀 분기
	if(n%2==0){
		return ubs(n/2, length+1); //리턴까지 해 줘야 값을 최종적으로 넘겨줄 수 있음!
	}
	else{
		return ubs(3*n+1, length+1);
	}
}


int main(){
	//입출력 속도 가속
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	
	int a,b, count, min_idx;
	Long cur_length, max_length; //길이가 가장 긴 우박수 저장
	cin >> a >> b;
	max_length = ubs(a);
	min_idx = a;
	for(int i = a+1; i <= b; i++){
		cur_length = ubs(i);
		if(cur_length > max_length){
			max_length = cur_length;
			min_idx = i;
		}
	}
	cout << min_idx <<" "<< max_length;
	return 0;
	
}
