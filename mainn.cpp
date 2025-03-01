#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class STRING{
	public:
		char *str1;
		char *str2;
		char *s;
		void STRCAT(char *str1,char *str2,char *s){
			int i=0;
			while(str1[i]!='\0'){
				s[i]=str1[i];
				i++;
			}
			int j = 0;
        while (str2[j] != '\0') {
            s[i] = str2[j];
            i++;
            j++;
        }

        // Sonuna null karakteri ekleyelim
        s[i] = '\0';
		}
};
int main(int argc, char** argv) {
	STRING deneme;
	deneme.str1=new char[1000];
	deneme.str2=new char[1000];
	deneme.s=new char[1000];
	cout<<"string giriniz "<<endl;
	cin>>deneme.str1;
	cout<<"ikinci string giriniz "<<endl;
	cin>>deneme.str2;
	deneme.STRCAT(deneme.str1,deneme.str2,deneme.s);
	cout<<endl<<"toplam string"<<deneme.s;
	 delete[] deneme.str1;
    delete[] deneme.str2;
    delete[] deneme.s;
    

	
	
	return 0;
}
