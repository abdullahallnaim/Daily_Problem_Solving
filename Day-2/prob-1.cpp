// https://www.beecrowd.com.br/judge/en/problems/view/1044

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,t;
    cin >> a >> b;
    if(b<a){
        t = b;
        b = a;
        a = t;
    }
    if(b%a == 0) cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;
 
    return 0;
}