#include <iostream>
using namespace std;
/*Postest5
Nama :Bagas Muhammad Shaka
Kelas: DDP A 2021
NPM  :2117051047*/

int main(){
	int m; cin >> m;
	int x[m];
	int jumlah;
	int Ratarata;
	
	for (int i=0 ; i < m ; i++){
	  cin >> x [i];
	  cout << x [i] << " " << endl;
	  jumlah += x[i];
	}
	Ratarata = jumlah/m;
//	Ratarata = (x[0]+x[1]+x[2]+x[3]+x[4]) / m;
	cout << "Rata rata : " << Ratarata << endl;
	
}
