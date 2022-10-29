#include <iostream>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int num[26]={0};
  for(int i=0;i<str.length();i++)
  {
    num[(int(str[i])-'a')]++;
  }
  int max=0;
  int index=0;
  for(int i=0;i<26;i++)
  {
    
    if(num[i]>max) 
    {
      max=num[i];
      index=i;
    }
  }
  cout<<(char)(index+'a')<<endl;
  cout<<max;
  return 0;
}