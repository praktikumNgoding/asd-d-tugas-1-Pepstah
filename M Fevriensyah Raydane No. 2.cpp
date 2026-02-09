#include <iostream>
#include <math.h>

using namespace std;

typedef struct kompleks{
int bil;
char var;
};
kompleks a, b, c, d;

void nilai(){
 a.bil = 2; 
 b.bil = 4;
 b.var = 'i';
 c.bil = 3;
 d.bil = 5;
 d.var = 'i';
 cout << "a = " << a.bil << endl;
 cout << "b = " << b.bil << b.var << endl;
 cout << "c = " << c.bil << endl;
 cout << "d = " << d.bil << d.var << endl;
}

void penambahan(){
	 cout << a.bil + c.bil << " + " << b.bil + d.bil << d.var << endl;
	}

void pengurangan(){
	 cout << a.bil - c.bil << " + " << b.bil - d.bil << d.var << endl;
	}

void perkalian(){
	 int x = (a.bil * c.bil) - (b.bil * d.bil);
 	 int y = (a.bil * d.bil) - (b.bil * c.bil);
 	 cout << x + y << d.var << endl;
	 }

void pembagian(){
 	 int x1 = ((a.bil * c.bil) + (b.bil * d.bil));
 	 int x2 = (pow(a.bil, 2) + pow(b.bil, 2));
 	 int x3 = ((b.bil * c.bil) - (a.bil * d.bil));
 	 int x4 = (pow(c.bil, 2) + pow(d.bil, 2));
 	 cout << ((x1 / x2) + (x3 / x4)) << d.var << endl;
	}

int main(){
 	nilai();
 	int pilihan;
 	do{
  		cout << "\nTerdapat empat operasi aritmatika dasar untuk bilangan kompleks, yaitu : " << endl;
  		cout << "1. Penambahan" << endl;
  		cout << "2. Pengurangan" << endl;
  		cout << "3. Perkalian" << endl;
  		cout << "4. Pembagian" << endl;
		cout << "Pilih : "; cin >> pilihan;
	if (pilihan == 1){
	penambahan();
	}
	else if (pilihan == 2){
	pengurangan();
	}
	else if (pilihan == 3){
	perkalian();
	}
	else if (pilihan == 4){
	pembagian();
	}
	else{
	break;
	}
 
 	}while (true);
    return pilihan;
}
