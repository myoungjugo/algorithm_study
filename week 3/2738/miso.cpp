/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    int a,b;
    cin>>a>>b;
    vector<vector<int>> v;  //필요 없음.
    vector<vector<int>> v2;  //필요없음
    //vector<vector<int>> ans(a)(b); -> 이렇게 하면 오류
    //vector<vector<int>> ans(a, vector<int>(b));
    vector<vector<int>> ans(a, vector<int>(b,0)); //값까지 0으로 초기화
    /*
    for (int i=0;i<a;i++){
        vector<int> row(b);
        for(int k=0;k<b;k++){
            int m;
            cin>>m;
            row[k]=m;
        }
        v.push_back(row);
    }
    for (int i=0;i<a;i++){
        vector<int> row(b);
        for(int k=0;k<b;k++){
            int m;
            cin>>m;
            row[k]=m;
        }
        v2.push_back(row);
    }
    for (int i=0;i<a;i++){
        for(int k=0;k<b;k++){
            ans[i][k]=v[i][k]+v2[i][k];
    }}
    뻘짓...가능하기는 한데 굳이 벡터를 두개 만들 필요없이 그냥 하나의 벡터를 사용해도 가능하다.*/
    
    for (int i=0;i<a;i++){
        for(int k=0;k<b;k++){
            int m;
            cin>>m;
            ans[i][k]=m;
            
        }
    }
    for (int i=0;i<a;i++){
        for(int k=0;k<b;k++){
            int m;
            cin>>m;
            ans[i][k]+=m;
            
        }
    }
    
    
    for (int i=0;i<a;i++){
        for(int k=0;k<b;k++){
            cout<<ans[i][k]<<" ";
    }
        cout<<"\n";
    }
    
    
}





