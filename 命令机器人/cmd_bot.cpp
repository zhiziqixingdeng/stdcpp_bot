#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string str,jishi;
int a,b,c,d;
int main(){
	cout<<"��ã��������������"<<endl;
	cout<<"��ӭʹ����"<<endl;
	while(1==1){
		cout<<"����������:";
		cin>>str;
		if(str=="cls"){
			system("cls");
		}
		else if(str=="cmd"){
			system("start cmd.exe");
		}
		else if(str=="bye"){
			cout<<"�ټ�"<<endl;
			system("pause");
		}
		else if(str=="bot"){
			cout<<"�õΣ������������»�����"<<endl;
			system("start https://gptgod.online/#/session/7zy9q6wxx8kw006m1boe9sojz");
		}
		else if(str=="music"){
			a=rand()%2;
			if(a==0){
				system("start https://music.163.com/#/song?id=1895164923");
			}
			else{
				system("start https://music.163.com/#/song?id=2048824267"); 
			}
		}
		else if(str=="sleep"){
			sleep(1);
		}
		else{
			cout<<"404"<<endl; 
		}
	}
} 
