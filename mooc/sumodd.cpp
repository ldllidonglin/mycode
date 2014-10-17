#include<iostream>
using namespace std;
int main(){
    int a[22];
    int oddsumtotal=0;
    cout<<"pleae enter two number\n"<<endl;
    int i=0;
    for(i=0;i<2;i++){
         cin>>a[i];
    }
    for(i=a[0];i<=a[1];i++){
        if(i%2==0){
        }
        else{
          oddsumtotal+=i;
          i++;
        }
    }
    cout<<oddsumtotal<<endl;
    return 0;
}
