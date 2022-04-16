// https://www.beecrowd.com.br/judge/en/problems/view/1047

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d, h , m = 0;
	cin >> a >> b >> c >> d;
	int dif = (c*60 + d) - (a*60+b);
	if(dif <= 0) dif += 24*60;
	h = dif / 60;
	m = dif - h*60;
	cout << "O JOGO DUROU " << h << " HORA(S) E " <<m << " MINUTO(S)" << endl;
	return 0;
}