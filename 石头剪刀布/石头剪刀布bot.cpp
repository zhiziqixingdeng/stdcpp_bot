#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int flag,td[10000],a,b,cnt,ans,aaa;
string name;
int main(){
  cout<<"��ӭ����ʯͷ������������"<<endl;
  cout<<"�������������:";
  cin>>name;
  cout<<"��ӭ,"<<name<<endl;
  sleep(1);
  system("cls");
  while(true){
    cout<<"��������Ҫ��ʲô"<<endl<<"1.ʯͷ"<<endl<<"2.����"<<endl<<"3.��"<<endl;
    cin>>a;
    if(a>=4||a<1){
      cout<<"��Ч��ѡ��"<<endl;
      sleep(1);
      break;
    }
    else{
      aaa++;
      if(aaa==1||aaa==2){
        b=rand()%2;
      }
      else if(td[aaa-1]==1){
        b=3;
      }
      else if(td[aaa-1]==2){
        b=1;
      }
      else if(td[aaa-1]==3){
        b=2;
      }
      else{
        a=3;
      }
      td[aaa]=a;
    }
    if(a==1&&b==1&&a==2&&b==2||a==1&&b==2){
      cout<<"ƽ��"<<endl;
    }
    else if(a==1&&b==2||a==2&&b==3||a==3&&b==1){
      cout<<"you win!"<<endl;
      cnt++;
    }
    else{
      cout<<"mr win!"<<endl;
      ans++;
    }
    cout<<cnt<<":"<<ans<<endl;
    sleep(1);
    system("cls");
  }
  return 0;
}
