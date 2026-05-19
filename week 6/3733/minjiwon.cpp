#include <iostream>
#include <vector>
using namespace std;

vector<long long int> v(10000001, 0); // 전역에서는 resize 불가능해서 처음부터 이렇게 지정하기
	
int len(long long n){
	if (n == 1)
		return 1;
	if (n > 10000000){ // 범위보다 클 때는 저장 안하고 카운트만 하기
		if (n % 2 == 0)
			return len(n / 2) + 1;
		else
			return len(3 * n + 1) + 1;
	}
		
	if (v[n])
		return v[n];
	if (n % 2 == 0)
		return v[n] = len(n/2) + 1;
	else
		return v[n] = len(3 * n + 1) + 1;
}

int main(){
	int a, b;
	cin >> a >> b;
	int best_num = 0;
	long long int best_len = 0;
	for (int i = a; i <= b; i++){
		long long int cur_len = len(i);
		if (cur_len > best_len){
			best_len = cur_len;
			best_num = i;
		}
	}
	
	cout << best_num << ' ' << best_len;		
}
