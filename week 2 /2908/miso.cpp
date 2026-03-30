#include <iostream>
#include<vector>
#include<string>

using namespace std;

/* 


*/

int main()
{
    string s1, s2,c1,c2;
    cin>>s1>>s2;
    
    for(int i=2;i>=0;i-- ){
        c1+=s1[i];
        c2+=s2[i];
    }
    
    int a, b;
    a=stoi(c1);
    b=stoi(c2);
    
    cout<<max(a,b);
    
    
}
