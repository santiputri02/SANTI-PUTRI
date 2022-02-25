#include<iostream>
using namespace std;

int main(){
	int jml_arr;
	int angka []= {1, 2, 3, 4, 5, 6};
	jml_arr = sizeof(angka)/sizeof(*angka);
	
	for(int a = 0; a < jml_arr; a++){
		cout<<angka[a]<<endl;
	}
		
	
}
