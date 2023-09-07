#include <iostream>

using namespace std;

int sum(int n);

int product(int n);

int main(){
  int n;
  cout<<"Enter a number"<<endl;
  cin>>n;

  cout<<sum(n)<<endl;
  cout<<product(n)<<endl;
}

int sum(int n){
  int tot=0;
  for(int i=1;i<=n;i++){
    tot+=i;
  }
  return tot;
}

int product(int n){
  int tot=1;
  for(int i=1;i<=n;i++){
    tot=tot*i;
  }
  return tot;
}
