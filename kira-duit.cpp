#include <iostream>
//Muhammad Najmi Ahmad Zabidi <najmi.zabidi@gmail.com>, 2017
//Kira jumlah dividen dgn mengambil kira baki tahun sebelum
using namespace std;

int main()
{

float kadar_dividen;
float simpanan_tahunan[1000]={};
float dividen_tahunan[1000]={};
int tahun;

cout<<"Masukkan jumlah duit"<<endl;
cin>>simpanan_tahunan[1];

cout<<"Masukkan jumlah tahun"<<endl;
cin>>tahun;

cout<<"Masukkan kadar dividen (dalam peratus)"<<endl;
cin>>kadar_dividen;

kadar_dividen=kadar_dividen/100;

cout<<"\tTAHUN\t\tSIMPANAN\t\tDIVIDEN"<<endl;
cout<<"-----------------------------------------------------"<<endl;

for (int i=1;i<=tahun;i++)

	{

	 if (i != 1){
		dividen_tahunan[i]=simpanan_tahunan[i-1]*kadar_dividen;
		simpanan_tahunan[i]=simpanan_tahunan[i-1]+dividen_tahunan[i];
		}

	 else
		{		
		dividen_tahunan[i]=simpanan_tahunan[i]*kadar_dividen;
		simpanan_tahunan[i]=simpanan_tahunan[i]+dividen_tahunan[i];
		}


	cout<<endl;
	cout<<"\t"<<i<<"\t\t"<<simpanan_tahunan[i]<<"\t\t\t"<<dividen_tahunan[i];

	}


cout<<endl;
cout<<"-----------------------------------------------------"<<endl;


return 0;
}

