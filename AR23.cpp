#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
int main(){  
    char s[1500];  
  
    while(gets(s)){  
        int len=strlen(s);  
        for(int i=0;i<len;i++){  
            if(s[i]<='Z' && s[i]>='A') printf("%c",s[i]<='M'?s[i]+13:s[i]-13);  
            else if(s[i]<='z' && s[i]>='a') printf("%c",s[i]<='m'?s[i]+13:s[i]-13);  
            else printf("%c",s[i]);  
        }  
        printf("\n");  
  
    }  
  
  
    return 0;  
}  
