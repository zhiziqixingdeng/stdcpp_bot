#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <ctime>
using namespace std;
struct xx{
  string wt;
  string hd;
}s[1000000];
string name;
string str;
int cnt,r;
void cl(string x){
  for(int i=1;i<=cnt;i++){
    if(str==s[i].wt){
      cout<<"zhizi-bot"<<":"<<s[i].hd<<endl;
    }
  }
  if(str=="clear history"){
    system("cls");
    cout<<"zhizi-bot"<<":"<<"�Ѿ������Ŷ"<<endl;
  }
  else if(str=="coler"){
    r=rand()%3+1;
    if(r==1){
      system("coler F2");
    }
    else if(r==2){
      system("coler A1");
    }
    else{
      system("coler C0");
    }
    cout<<"zhizi-bot"<<":"<<"�ı�����ˣ�"<<endl;
  }
  else if(str=="time"){
    cout<<"zhizi-bot"<<":"<<time(NULL)<<endl;
  }
  else{
    cout<<"zhizi-bot"<<":"<<"�Բ����Һ�����������˵ʲô����һ�ַ�ʽ���ʰ�"<<endl;
  }
}
int main(){
  srand(time(NULL));
  freopen("ѵ��.txt","r",stdin);
  cin>>cnt;
  for(int i=1;i<=cnt;i++){
    getline(cin,s[i].wt);
    getline(cin,s[i].hd);
  }
  freopen("CON","r",stdin);
  cout<<"��ã�����zhizi-bot"<<endl;
  while(true){
    cout<<"�㣺";
    getline(cin,str);
    cl(str);
  }
}
