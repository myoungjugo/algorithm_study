#C++로 작성한 코드 
"""#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> v(10);
	
	for (int i = 0; i < 10; i++) {
		cin >> v[i] ;
	}
	for (int i = 0; i < 10; i++) {
		v[i] = v[i] % 42;
	}

	sort(v.begin(), v.end());
	int p = 1;
	for (int i = 0; i < 9; i++) {
		if (v[i] != v[i + 1])
			p++;

	}
	cout << p;

}"""

#파이썬 코드
a=set()
for i in range(10):
    num= int(input())
    a.add(num%42)

print(len(a))
