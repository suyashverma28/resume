#include<bits/stdc++.h>
using namespace std;

int main()
{
    int amt, r100=0, r50=0, r20=0, r10=0, r5=0, r2=0 , r1=0 ,count=0; 

  cout<<"Enter The Amount in Rupees : \n\n" ; 
  cin>>amt ; 

  while(amt >= 100) 
  { 
    r100 = amt / 100 ; 
    amt = amt % 100;
    cout<<"\nTotal Number Of 100 Dollar Notes : "<< r100 ;
    break ; 
  } 
  while(amt >= 50) 
  { 
    r50 = amt / 50 ;
    amt = amt % 50; 
    cout<<"\nTotal Number Of 50 Dollar Notes : "<< r50 ; 
  break ; 
  }  
  while(amt >= 20) 
  { 
    r20 = amt / 20 ; 
    amt = amt % 20;
    cout<<"\nTotal Number Of 20 Dollar Notes : "<< r20 ; 
    break ; 
  }  
  while(amt >= 10) 
  { 
    r10 = amt / 10 ; 
    amt = amt % 10;
    cout<<"\nTotal Number Of 10 Dollar Or Coin : "<< r10 ; 
    break ; 
  } 
  while(amt >= 5) 
  { 
    r5 = amt / 5 ; 
    amt = amt % 5;
    cout<<"\nTotal Number Of 5 Dollar Or Coin : "<< r5 ; 
    break ; 
  } 
  while(amt >= 2) 
  { 
    r2 = amt / 2 ; 
    amt = amt % 2;
    cout<<"\nTotal Number Of 2 Dollar Or Coin : "<< r2 ; 
    break ; 
  } 
  while(amt >= 1) 
  { 
    r1 = amt / 1 ; 
    amt = amt % 1;
    cout<<"\nTotal Number Of 1 Dollar Or Coin : "<< r1 ; 
    break ; 
  }
 count = r100 + r50 + r20 + r10 + r5 + r2 + r1;   
  cout<<"\n\nTotal Number Of Dollar Require :"<< count<<endl ; 
 return 0;  

}