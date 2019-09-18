#include<bits/stdc++.h>
using namespace std;
string encryption(string,char);
string descryption(string,char);
int main()
{ 
  cout<<"enter plaintext\t";
  string p;
  cin>>p;
  cout<<"enter key";
  char k;
  cin>>k;
  string c,s;
  c=encryption(p,k);
  s=descryption(c,k);
  cout<<"cipher_text="<<c<<"\n";
  cout<<"plain_text="<<s<<"\n";
  return 0;
}

string encryption(string x,char k)
{
  int l=x.length();
  int c[l],i;
  int key=(int)k-97;
  for(i=0;i<l;i++)
  {
    c[i]=((int)x[i]-97+key)%26+97;
  }
  char q[l];
  string z="";
  for(i=0;i<l;i++)
  {
    q[i]=(char)c[i];
    z=z+q[i];
  }
  return z;
}

string descryption(string x,char k)
{
  int l=x.length();
  int c[l],i;
  int key=(int)k-97;
  for(i=0;i<l;i++)
  {
    c[i]=((int)x[i]-97-key)%26+97;
  }
 char q[l];
 string z;
 for(i=0;i<l;i++)
 {
   q[i]=(char)c[i];  
   z=z+q[i];
 }
return z;
}


