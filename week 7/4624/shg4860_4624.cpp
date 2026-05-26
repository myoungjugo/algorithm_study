#include <iostream>
#include <string>
using namespace std;


// 전역 
char st[50];
int t = -1;

void push(char c) {
    st[++t] = c;
}

char pop() {
    return st[t--];
}

bool isempty() {
    return t == -1;
}
//

int main() {
    string s;
    cin >> s;

    int result = 0;
    int temp = 1;
    bool correct = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            push(s[i]);
            temp *= 2;
        }
        else if (s[i] == '[') {
            push(s[i]);
            temp *= 3;
        }
        else if (s[i] == ')') {
            if (isempty() || st[t] != '(') {
                correct = false;
                break;
            }

            if (s[i - 1] == '(') {
                result += temp;
            }

            pop();
            temp /= 2;
        }
        else if (s[i] == ']') {
            if (isempty() || st[t] != '[') {
                correct = false;
                break;
            }

            if (s[i - 1] == '[') {
                result += temp;
            }

            pop();
            temp /= 3;
        }
    }

    if (!isempty()) {
        correct = false;
    }

    if (correct) {
        cout << result;
    }
    else {
        cout << 0;
    }

    return 0;
}


푸느데 너무졸려서잠깐 이문제는지피티한테맡기고 다음날에 리뷰하겠습니다
