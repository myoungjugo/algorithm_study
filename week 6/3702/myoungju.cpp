#include <iostream>
using namespace std;
typedef unsigned long long Long; //너무 길어서 이렇게 정의

//1행 1열들은 전부 1이므로 top down형식으로 base case 이용
Long tri(int r, int c, Long cache[][51]){//매개변수로 2차원 배열 넘겨줄 땐 두 번째 크기만 지정
	if(r==1||c==1)return 1;
	
	if(cache[r][c] !=0)
		return cache[r][c];
	
	cache[r][c] = (tri(r-1, c, cache) + tri(r, c-1, cache))%100000000;
	return cache[r][c];
}
	
int main(){
	Long cache[51][51] = {0}; //이것도 메모이제이션 사용
	int r, c;
	cin >> r >> c;
	
	cout << tri(r,c, cache); //반환형 있는 함수라도 이렇게 쓰는 것 가능

	return 0;
	
}
