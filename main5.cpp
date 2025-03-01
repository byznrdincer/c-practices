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
	String aylar[]{"ocak","þubat","mart","nisan","mayýs","haziran","Temmuz","Aðustos","Eylül","Ekim","Kasým","Aralik"};
	
	//bir sonraki güne geçiþi saðlar
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
