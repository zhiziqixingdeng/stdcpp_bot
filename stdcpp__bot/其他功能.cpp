#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c,d;
string name;
int n;
int main(){
	cout<<"��ã���������������"<<endl;
	sleep(1);
	cout<<"�����������:";
	cin>>name;
	while(1==1){
		cout<<name<<"���кι�� 1.����stdcpp_bot 2.����(����ڻ������и���) 3.����bug 4.������־"<<endl;
		cin>>n;
		if(n==1){
			cout<<"����һ��������"<<endl;
			sleep(1);
			cout<<"Q:Ϊʲô������???"<<endl;
			cout<<"A:��Ϊ���ӿ���GPT�ĳɹ���������Ҫ�Լ�����һ��"<<endl;
			sleep(1);
			cout<<"Q:��������ڲ�������ʱ������?"<<endl;
			cout<<"A:��Ȼ��!�����ֻҪ�������exe���Ϳ�������"<<endl;
			sleep(1);
			cout<<"Q:���õ���ʲô���Կ�����?"<<endl;
			cout<<"A:c++"<<endl;
			sleep(1);
			cout<<"���"<<endl;
		}
		else if(n==2){
			cout<<"���һ��"<<endl;
			sleep(1);
			a=rand()%2;
			if(a==0){
				system("start https://music.163.com/#/song?id=2050508970"); 
			}
			else if(a==1){
				system("start https://music.163.com/#/song?id=2054066570");
			}
			else{
				system("start https://music.163.com/#/song?id=2056568880"); 
			}
		}
		else if(n==3){
			cout<<"��������ô���� 1.���䱨�� 2.github"<<endl;
			cin>>b;
			if(b==1){
				cout<<"����:wang1234567890503@163.com"<<endl;
			} 
			else{
				system("start http://github.com/zhiziqixingdeng");
			}
		}
		else if(n==4){
			cout<<"���Ӵ����������"<<endl;
		}
		else{
			cout<<"����"<<endl;
		}
	}
}
