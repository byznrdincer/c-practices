#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class tarih{
	int gun;
	string ay;
	int yil;
	
	
public :
	tarih(int gun,string ay,int yil)
	{
		this->gun=gun;
		this->ay=ay;
		this->yil=yil;
		
	}
	void setGun(){
		gun=gun;
	}
	void setAy(){
		ay=ay;
	}
	void setYil(){
		yil=yil;
	}
	
      void zaman(){
	String aylar[]{"ocak","�ubat","mart","nisan","may�s","haziran","Temmuz","A�ustos","Eyl�l","Ekim","Kas�m","Aralik"};
	
	//bir sonraki g�ne ge�i�i sa�lar
	gun++;
	cout<<"yeni tarih :"<< gun<<" "<<ay <<" "<<endl;}
	
	void yazdir(){
		cout<<"Tarih "<<gun<<" "<<ay<<" "<<yil<<endl;
	}

	
	
};

int main(int argc, char** argv) {
	tarih nesne1(5,"Ekim",2009);
	tarih bugun(26,"Ocak",2018);
	
	bugun.yazdir();
	bugun.zaman();
	cout<<"yarin tarih: 27 ocak 2018"<<endl;
	
	
	
	
	
	
	
	return 0;
}
