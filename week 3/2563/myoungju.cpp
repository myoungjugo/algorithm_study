#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    bool visited[101][101] = {false, }; //전체를 false로 초기화
    int a,b,c, count=0;
    cin >> c;
    //탐색하며 
    for(int i = 0; i < c; i++){
        cin >> a >> b;
        
        for(int j=b;j<b+10;j++){
            for(int k=a; k<a+10;k++){
                if(!visited[j][k]){
                    count++;
                    visited[j][k] = true;
                } //안 칠했던 거에 칠한거면 ++
                     //표시슨
            }
        }
        
        
    }
    cout << count;
    
    
}
