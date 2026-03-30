#include <iostream>
#include<vector>
#include<string>

using namespace std;

/* stoi()함수를 통해서 문자열을 숫자로 바꿀 수 있음
중요 ) 문자열 즉 "12345"가능 char즉 문자 하나는 안됨

char 하나를 숫자로 바꾸는 방법 'o'-'0'해주면 된다

*/

int main()
{
    string s;
    int a;

    cin>>a>>s;
    int sum=0;
    
    for (int i=0 ; i<a; i++){
        
        //이거는 오류 sum+=stoi(s[i]);
        sum+=(s[i]-'0');
    }
    cout<<sum;
    
}
