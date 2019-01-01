#include <iostream> //Nama Umar Ibnu Zainam M
using namespace std; //NIM : 311810909
void logika(int x,int y,int kuadran)
{
	if(x>0 && y>0)
	{
		cout<<"Titik koordinat ("<<x<<","<<y<<") ada pada kuadran ke-1";
	}else if(x>0 && y<0)
	{
		cout<<"Titik koordinat ("<<x<<","<<y<<") ada pada kuadran ke-4";
	}else if(x<0 && y>0)
	{
		cout<<"Titik koordinat ("<<x<<","<<y<<") ada pada kuadran ke-2";
	}else if(x<0 && y<0)
	{
		cout<<"Titik koordinat ("<<x<<","<<y<<") ada pada kuadran ke-3";
	}
}

int main()
{
	int x,y,kuadran;
	cout<<"Masukan titik koordinat x : ";
	cin>>x;
	cout<<"Masukan titik koordinat y : ";
	cin>>y;
	logika(x,y,kuadran);
}
