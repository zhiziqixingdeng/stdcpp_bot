#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
int a,b,c,d,n,w,cnt,g,g2,g3;
string str,name,str2;
int main(){
	cout<<"��ӭʹ���°汾��Ϸ������"<<endl;
	sleep(1);
	cout<<"�������������:";
	cin>>name;
	cout<<"�ҽ�����,���"<<name<<endl;
	sleep(1);
	system("cls");
	srand((unsigned int)time(NULL)); 
	while(1==1){
		cout<<"����������Ҫ��ʲô"<<endl;
		cout<<"1.�ɻ���(�������㲻�Ῠbug��)"<<endl<<"2.�������"<<endl<<"3.������ϰ"<<endl<<"4.��¼"<<endl<<"5.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�õ�"<<endl;
			cout<<"�����������ŷ"<<endl;
			while(str!="����"){
				cnt++;
				cout<<"������ʫ��:";
				cin>>str;
				if(str.find("��")!=std::string::npos){
					cout<<"��һ��"<<endl;
				}
				else{
					cout<<"û�л�����˵��"<<endl;
					cnt--;
				}
			}
			cout<<"�������"<<cnt<<"��"<<endl<<"��ʷ��¼���:"<<g<<endl;
			if(cnt>g){
				cout<<"������˼�¼"<<endl;
				sleep(1);
				g=cnt;
			}
			else{
				cout<<"����Ŷ"<<endl;
			}
		}
		else if(n==2){
			cnt=1;
			cout<<"�������"<<cnt<<"��:";
			cin>>str;
			w=2;
			while(1==1){
				cnt++;
				if(w==2){
					cout<<"�������"<<cnt<<"��:";
					cin>>str2;
					if(str2[1]!=str[str.length()]){
						cout<<"����"<<endl;
						break;
					}
					else{
						cout<<"����"<<endl;
						w=1;
					}
				}
				else if(w==1){
					cout<<"�������"<<cnt<<"��:";
					cin>>str;
					if(str[1]!=str2[str2.length()]){
						cout<<"����"<<endl;
						break;
					} 
					else{
						cout<<"����"<<endl;
						w=2;
					}
				}
				else{
					cout<<"С���ӣ��Ĵ���ɲ��ã��Ұ����¼�����˰�"<<endl;
					g=0;
					g2=0;
				}
			} 
			cout<<"�������"<<cnt<<"��"<<endl<<"��ʷ��߼�¼:"<<g2<<endl;
			if(cnt>g2){
				cout<<"������˼�¼!"<<endl;
				g2=cnt;
			}
			else{
				system("pause");
			}
		}
		else if(n==3){
			cout<<"��������ϰ����:";
			cin>>cnt;
			for(int i=1;i<=cnt;i++){
				a=rand()%1000+1;
				b=rand()%1000+1;
				c=rand()%3+1;;
				if(c==1){
					cout<<a<<"+"<<b<<"=";
					cin>>d;
					if(d==a+b){
						cout<<"��ȷ!"<<endl;
						w++;
					} 
					else{
						cout<<"����"<<endl;
					}
				}
				else if(c==2){
					cout<<a<<"-"<<b<<"=";
					cin>>d;
					if(d==a-b){
						cout<<"��ȷ!"<<endl;
						w++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else if(c==3){
					cout<<a<<"x"<<b<<"=";
					if(d==a*b){
						cout<<"��ȷ"<<endl;
						w++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else{
					cout<<"������"<<a<<"����"<<b<<"����"<<endl;
					cin>>d;
					if(d==a/b){
						if(a%b==0){
							cout<<"��ȷ!"<<endl;
							w++;
						}
						else{
							cout<<"������"<<a<<"����"<<b<<"������"<<endl;
							cin>>d;
							if(d==a%b){
								cout<<"��ȷ!"<<endl;
								w++;
							}
							else{
								cout<<"����"<<endl;
							}
						}
					}
				}
			}
			cout<<"�����"<<w<<"��,"<<"��ʷ���"<<g3<<"��"<<endl;
			if(w>g3){
				cout<<"���������ļ�¼"<<endl;
				g3=w;
			}
			else{
				cout<<"����Ŷ"<<endl;
			}
		}
		else if(n==4){
			cout<<"��¼:"<<endl;
			sleep(1);
			cout<<"�ɻ���:"<<g<<"��"<<endl<<"�������:"<<g2<<"��"<<endl<<"����:"<<g3<<"��"<<endl;
			system("pause");
		}
		else if(n==5){
			cout<<"��лʹ��"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
