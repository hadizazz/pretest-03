/*
Nama		: Hadiza Cahya Firdaus
Npm			: 140810180042
Tanggal		: 06/03/2019	
Deskripsi	: pretest-03
*/

#include<iostream>

using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int&n);
void inputMhs(larikMhs&mhs,int,n);
void cetakMhs(larikMhs&mhs,int,n);
void sortNama(larikMhs&mhs,int,n);
	int index=0,temp=0;
	larikMhs

int main(){
	int n;
	larikMhs mhs;
	banyakData(n);
	inputMhs(mhs,n);
	sortNama(mhs,n);
	cetakMhs(mhs,n);
}
