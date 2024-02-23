#include <iostream>

using namespace std;

int main(){

int liczba;

for (liczba = 1; liczba<= 100; ++liczba) {
int dzielnik;
for (dzielnik = 2; dzielnik<liczba; ++dzielnik) {
if (liczba % dzielnik ==0)
break;
}
if (dzielnik==liczba)
cout<< liczba << " ";
}

cout<<endl;

	return 0;
}
