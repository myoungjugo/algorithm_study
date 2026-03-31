//cin으로 단어 받을때마다 1씩 세는 방법
#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string word;
    int res = 0;
    while(cin >> word){
        
        res ++;
    }
    cout << res;
    return 0;
}

//한 글자씩 읽으며 상태 체크하는 메모리 최소화 방법
//문자열 전체를 저장하지 않음. 대용량 텍스트 처리에서 유리
#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    char ch;
    int res = 0;
    bool word = false;
    
    while(cin.get(ch)){
        
        if(isspace(ch)) 
            word = false; //공백만나면 word false로
        else if(!word){
            word = true;
            res++;
        } //ch가 공백이 아니면서 word가 false였음
        
            
    }
    cout << res;
    return 0;
}
