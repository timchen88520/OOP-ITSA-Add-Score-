#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
int main(){  
    char s[200];  
    double a,b;  
    while(gets(s)){  
        int len=strlen(s);  
        int sum=0;  
        for(int i=0;i<len;i++){  
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';  
            sum+=(s[i]-'a'+1)*(len-i);  
        }  
        while(sum>=10){  
            int t=0;  
            while(sum>0){  
                t+=sum%10;  
                sum/=10;  
            }  
            sum=t;  
        }  
        a=(double)sum;  
  
        gets(s);  
        len=strlen(s);  
        sum=0;  
        for(int i=0;i<len;i++){  
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';  
            sum+=(s[i]-'a'+1)*(len-i);  
        }  
        while(sum>=10){  
            int t=0;  
            while(sum>0){  
                t+=sum%10;  
                sum/=10;  
            }  
            sum=t;  
        }  
        b=(double)sum;  
        printf("%.2f",min(double(100),a*100/b) );  
        printf("%\n");  
    }  
    return 0;  
}
