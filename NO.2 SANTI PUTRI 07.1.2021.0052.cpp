#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int kuota [4][2]={{2,20000},
	{4,40000},
	{8,80000},
	{12,100000}};
	
	
	for(int a=0;a<4;a++){
		for (int b=0;b<2; b++){
			cout<<kuota [a][b]<<" ";
			
		}
		cout<<endl;
	}
getch();
}

