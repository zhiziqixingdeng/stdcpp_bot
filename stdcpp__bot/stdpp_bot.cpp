#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string str,name;
int a,b,c,d,n;
char y;
double t,f;
bool isprime(int yu){
	if(yu<=1){
		return false;
	}
	else{
		for(int i=2;i<yu;i++){
			if(yu%i==0){
				return false;
			}
		}
	}
	return true;
}
void chuli(string x){
	if(x.find("���")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("����")!=std::string::npos){
		cout<<"���ã�����stdcpp_bot"<<endl;
	}
	else if(x.find("������")!=std::string::npos||x.find("����")!=std::string::npos){
		cout<<"�õ�"<<endl;
		cout<<"����������Ҫʲô���͵ļ��� 1.���� 2.���� 3.С��"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������ʽ(*�ǳƺ�,/�ǳ��ţ�):";
			cin>>a>>y>>b;
			if(y=='+'){
				cout<<"���:"<<a+b<<endl;
			}
			else if(y=='-'){
				cout<<"���:"<<a-b<<endl;
			}
			else if(y=='*'){
				cout<<"���:"<<a*b<<endl;
			}
			else if(y=='/'&&b!=0){
				cout<<"���:"<<a/b<<"......"<<a%b<<endl;
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==2){
			cout<<"�������һ��������ĸ�ͷ���(�ո����):";
			cin>>a>>b;
			cout<<"������ڶ������ķ�ĸ�ͷ���(�ո����):";
			cin>>c>>d;
			cout<<"�����������(*�ǳ˺�,/�ǳ���):";
			cin>>y;
			if(y=='+'){
				if(a==c){
					cout<<"���:"<<a<<"��֮"<<b+d<<endl; 
				}
				else{
					cout<<"���:"<<a*c<<"��֮"<<b*c+a*d<<endl;
				}
			}
			else if(y=='-'){
				if(a==c){
					cout<<"���:"<<a<<"��֮"<<b-d<<endl;
				}
				else{
					cout<<"���:"<<a*c<<"��֮"<<b*c-d*a<<endl;
				}
			}
			else if(y=='*'){
				cout<<"���:"<<a*c<<"��֮"<<b*d<<endl; 
			}
			else if(y=='/'){
				cout<<"���:"<<a*d<<"��֮"<<b*c<<endl;
			}
			else{
				cout<<"����!"<<endl;
			}
		}
		else if(n==3){
			cout<<"��������ʽ(*�ǳ˺ţ�/�ǳ���):";
			cin>>t>>y>>f;
			if(y=='+'){
				cout<<"���:"<<t+f<<endl;
			}
			else if(y=='-'){
				cout<<"���:"<<t-f<<endl; 
			}
			else if(y=='*'){
				cout<<"���:"<<t*f<<endl; 
			}
			else if(y=='/'&&f!=0){
				cout<<"���:"<<t/f<<endl;
			}
			else{
				cout<<"���ڸ���???"<<endl;
			}
		}
		else{
			cout<<"���������"<<endl;
		}
	}
	else if(x.find("������")!=std::string::npos||x.find("��ʱ")!=std::string::npos){
		cout<<"�õ�"<<endl;
		sleep(1);
		cout<<"����һ����Ҫ��Сʱ:";
		cin>>a;
		cout<<"����һ����Ҫ������:";
		cin>>b;
		cout<<"����һ��Ҫ������:";
		cin>>c;
		cout<<"��ʼ��ʱ"<<endl;
		sleep(a*3600+b*60+c);
		cout<<"��ʱ���"<<endl;
	}
	else if(x.find("��ѧ")!=std::string::npos||x.find("��ѧ��ҵ")!=std::string::npos){
		cout<<"�ã���������"<<endl;
		sleep(1);
		cout<<"Ҫʲô���͵� 1.������ 2.���� 3.�׳� :";
		cin>>n;
		if(n==1){
			cout<<"��������Ҫʲô�� 1.�ڴ� 2.��� 3.����"<<endl;
			cin>>d;
			if(d==1){
				cout<<"־ͬ��ϰ������Ƕ���"<<endl;
				cout<<"���������bit:";
				cin>>a;
				cout<<"һ����:"<<a/8<<"byte"<<endl;
				cout<<"һ����:"<<a/8/1024<<"kb"<<endl;
				cout<<"һ����:"<<a/8/1024/1024<<"MB"<<endl;
				system("pause"); 
			}
			else if(d==2){
				cout<<"�����뼸ƽ������:";
				cin>>a;
				cout<<"ƽ����:"<<a/10000<<endl;
				cout<<"ƽ��ǧ��:"<<a/1000000<<endl;
				system("pause");
			}
			else if(d==3){
				cout<<"�����뼸����:";
				cin>>a;
				cout<<"����:"<<a/10<<endl;
				cout<<"��:"<<a/100<<endl;
				system("pause");
			}
			else{
				cout<<"��������!!!"<<endl;
			}
		}
		else if(n==2){
			cout<<"����һ�����������ж��ǲ�������:";
			cin>>a;
			if(isprime(a)==true){
				cout<<"���������"<<endl;
			}
			else{
				cout<<"�����������"<<endl;
			}
		}
		else if(n==3){
			cout<<"����Ҫ�󼸵Ľ׳�:";
			cin>>a;
			b=1;
			for(int i=1;i<=a;i++){
				b=b*a;
			}
			cout<<"���:"<<b<<endl;
		}
		else{
			cout<<"������"<<endl;
		}
	}
	else if(x.find("��Ϸ")!=std::string::npos){
		cout<<"����������Ϸ"<<endl;
		sleep(1);
		system("start ��Ϸ.exe");
	}
	else if(x.find("˵��")!=std::string::npos){
		cout<<"�������������ĸ�"<<endl;
		sleep(1);
		system("start https://music.163.com/#/song?id=1895164923"); 
	}
	else if(x.find("���")!=std::string::npos||x.find("c++")!=std::string::npos||x.find("py")!=std::string::npos){
		cout<<"��ѧ���,̫����"<<endl;
	}
	else if(x.find("�˵�")!=std::string::npos){
		cout<<"����:"<<endl;
		cout<<"(������Щ�ؼ��ֿ��Ի��)"<<endl;
		cout<<"���㣬��ѧ����Ϸ��˵��"<<endl;
		sleep(1);
	}
	else if(x.find("ɵ��")!=std::string::npos||x.find("250")!=std::string::npos||x.find("cnm")!=std::string::npos){
		cout<<"ϵͳ�������˵�໰"<<endl;
	}
	else{
		d=rand()%2;
		if(d==0){
			cout<<"����������������˵��˽�һ���ҵĹ��ܰ�"<<endl;
		}
		else if(d==1){
			cout<<"Ҫ��������? 1.�� 2.������"<<endl;
			cin>>n;
			if(n==1){
				system("start https://music.163.com/#/song?id=2048824267"); 
			}
			else{
				cout<<"�õ�"<<endl;
			}
		}
		else{
			cout<<"�Һ���������,������㣬������������ѧ��ҵ"<<endl;
		}
	}
	sleep(1);
	return;
} 
int main(){
	cout<<"��ð�������stdcpp_bot,�Ժ��ҽ��Լ�std��!"<<endl;
	cout<<"���ʲô:";
	cin>>name;
	if(name=="����"||name=="zhizi"){
		cout<<"¡�ػ�ӭ"<<endl;
	}
	else{
		cout<<"��ð�,"<<name<<endl;
	}
	sleep(1);
	cout<<"std:����˵����Դ��ҵ����й���Ŷ"<<endl;
	while(1==1){
		cout<<name<<":";
		cin>>str;
		if(str=="�ټ�"){
			cout<<"�ټ�!"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"std:";
			chuli(str);
		}
	}
}
