#include <iotream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name;
int a,b,c,d;
int n,qian,zuo=0,cnt=24;
int main(){
	 srand((unsigned)time(NULL)); 
	cout<<"��ӭ����stdcpp_bot��С��Ϸ(С��ʾ)"<<endl;
	sleep(1);
	cout<<"���Ҫ�����Ļ�����ǰ��zhizi-game"<<endl;
	sleep(1);
	system("cls");
	cout<<"�������������:";
	cin>>name;
	cout<<"��ð�,"<<name<<endl;
	while(1==1){
		sleep(1);
		cout<<"��������Ҫ��ʲô"<<endl;
		cout<<"**************"<<endl;
		cout<<"*1.������Ϸ"<<endl;
		cout<<"*2.����ģ����"<<endl;
		cout<<"*3.׬Ǯģ����"<<endl;
		cout<<"*4.������ʦ"<<endl;
		cout<<"*5.�˳�"<<endl;
		cout<<"*************"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�Ѿ����ú��������"<<endl;
			cout<<"��Χ��1~1000"<<endl;
			d=rand()%999+1;
			while(a!=d){
				cout<<"��������Ҫ�µ���:";
				cin>>a;
				if(a>d){
					cout<<"����"<<endl;
				}
				if(a<d){
					cout<<"С��"<<endl;
				}
			}
			cout<<"��ϲ�㣬�¶���!"<<endl;
		}
		else if(n==2){
			cout<<"��ʼ��Ϸ,"<<name<<endl;
			sleep(1);
			cout<<"�����������"<<endl;
			cnt=24;
			sleep(2);
			system("cls");
			while(1==1){
				cout<<"���������:";
				qian=rand()%10000;
				cout<<"�����¼�"<<endl;
				sleep(1);
				a=rand()%3;
				if(a==0){
					cout<<"�����";
					b=rand()%1000;
					cout<<b<<"ԪǮ"<<endl;
					qian-=b;
				}
				else if(a==1){
					cout<<"���Ʊ����100Ԫ"<<endl;
					qian+=100;
				}
				else{
					cout<<"��������һЩС�£����ǲ���Ϊ��"<<endl;
				}
				cout<<"��:"<<cnt<<"����"<<endl;
				cnt++;
				if(cnt>100){
					a=rand()%20;
					if(a<=15){
						cout<<"������"<<endl;
						break;
					}
				}
				system("pause");
			}
		}
		else if(n==3){
			cnt=0;
			qian=0;
			cout<<"��ӭ����׬Ǯģ����"<<endl;
			system("pause");
			while(1==1){
				cout<<"��������Ҫ��ʲô 1.�� 2.��Ʊ 3.��˾ 4.�ؼ�˯�� 5.�˳�"<<endl;
				cin>>a;
				if(a==1){
					cout<<"����1׬1��Ǯ,����2����"<<endl;
					cout<<"������ٵö���"<<endl;
					system("pause");
					cout<<"����:";
					for(int i=1;b!=2;i++){
						cin>>b;
						qian+=b;
					}
					cout<<"ok"<<endl;
					cout<<"��������:"<<qian<<"��Ǯ"<<endl;
					system("pause");
				}
				else if(a==2){
					cout<<"�Ƿ�Ū��Ʊ(��Ʊ�з���)"<<endl;
					cout<<"1.Ҫ 2.��Ҫ"<<endl;
					cin>>a;
					if(a==1){
						cout<<"��Ĺ�Ʊ:";
						b=rand()%1;
						if(b==0){
							cout<<"׬��";
							c=rand()%10000;
							cout<<c<<"��Ǯ"<<endl;
							qian+=c;
							sleep(1);
						}
						else{
							cout<<"����";
							c=rand()%10000;
							cout<<c<<"��Ǯ"<<endl;
							qian-=c;
							sleep(1);
						}
					}
					else{
						cout<<"�õ�"<<endl;
						sleep(1);
					} 
				}
				else if(a==3){
					cout<<"��Ĺ�˾��Ҫʲô 1.��� 2.�������� 3.�˳�"<<endl;
					cin>>a;
					if(a==1){
						cout<<"��׬��:";
						b=rand()%1000;
						cout<<b<<endl;
						qian+=b;
					}
					else if(a==2){
						cout<<"���������������:";
						cin>>name;
						system("pause");
					}
					else{
						system("pause");
					}
				}
				else if(a==4){
					cout<<"����˼�"<<endl;
					system("pause");
					system("cls");
				}
				else{
					cout<<"��׬��:"<<qian<<"��"<<endl;
					break;
				}
			} 
		}
		else if(n==4){
			cout<<"��ӭ����������ʦ"<<endl;
			cnt=0;
			cout<<"(С��ʾ������996699�����˳�)"<<endl;
			cout<<"��ʼ������!"<<endl;
			sleep(2);
			for(int i=1;c!=996699;i++){
				a=rand()%100;
				b=rand()%100;
				d=rand()%2;
				cout<<a;
				if(d==0){
					cout<<"+"<<endl; 
				}
				else if(d==1){
					cout<<"-"<<endl;
				}
				else{
					cout<<"x"<<endl;
				}
				cin>>c;
				if(c==996699){
					cout<<"�ټ�"<<endl;
					cout<<"��������:"<<cnt<<"��"<<endl; 
					system("pause");
					break;
				}
				if(d==0){
					if(c==a+b){
						cout<<"��ȷ!"<<endl;
						cnt++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else if(d==1){
					if(c==a-b){
						cout<<"��ȷ!"<<endl;
						cnt++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
				else{
					if(c==a*b){
						cout<<"��ȷ"<<endl;
						cnt++;
					}
					else{
						cout<<"����"<<endl;
					}
				}
			}
		}
		else if(n==5){
			cout<<"�ټ�"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	} 
} 
