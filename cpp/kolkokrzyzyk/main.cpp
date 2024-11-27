#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
char t[2][2];
for(char x=0;x<3;x++){
	for(char y=0;y<3;y++)
		t= [x][y] = '0';
		cout<<t [x][y];
		}
		cout<<endl;
}
int gracz1;
int gracz2;
void Rysowanie_planszy()
{

	cout << " " tab[0][0]<<" | "<< tab[0][1] <<" | " <<tab[0][2] << " " << endl;
	cout << "---|---|---" << endl;
	cout << " " << tab[1][0] << " | " << tab[1][1] << " | " << tab[1][2] << " " << endl;
	cout << "---|---|---" << endl;
	cout <<  " " << tab[2][0] << " | " << tab[2][1] << " | " << tab[2][2] << " " << endl;
	cout << "Gracz nr 1 - X" << endl;
	cout << "Gracz nr 2 - O" << endl;
}

return 0;
}
