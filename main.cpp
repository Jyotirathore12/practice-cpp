#include<iostream>
using namespace std ;
int main(){
 cout <<"code to run"<<endl;
 int a = 5; 
 int b =3;
 int c = a+b;
 cout<<c;
 //while loop
 while(a){
  cout<<a<<endl;
  a--;
 }
 //for loop 
 for(int i =0; i<10 ; i++){
  if(i==3){
   continue; //skip 3
  }
   cout<<i<<" "; //can use endl also to give the space
 }

 //switch case 
 int i ;
 cout<<"enter value of i (1 or 2)"<<" ";
 cin>>i;
 switch(i){
  case 1: 
        cout<<"Yes"<<" ";
        break;
  case 2:
      cout<<"No"<<" ";
       break;
  default :
      cout<<"None"<<" ";
      break;
 }
return 0;
}
