#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
typedef long long lint;  
using namespace std;  
void solve(int n){  
    int x=0;  
    while(n>0){  
        x=x*10+n%10;  
        n/=10;  
    }  
    printf("%d",x);  
}  
int main(){  
    char s[200];  
    while(gets(s)){  
        int len=strlen(s);  
        if(s[0]>'9' || s[0]<'0'){  
            for(int i=len-1;i>=0;i--){  
                solve(s[i]-' '+32);  
            }  
            printf("\n");  
        }  
        else{  
            int x=0;  
            for(int i=len-1;i>=0;i--){  
                if(x>=32 /*&& x<=126*/){  
                    printf("%c",x-32+' ');  
                    //printf("x=%d\n",x);  
                    x=0;  
                    i++;  
                }  
                else{  
                    x=x*10+s[i]-'0';  
                }  
            }  
            if(x>=32 && x<=126) printf("%c",x);  
            printf("\n");  
        }  
    }  
    return 0;  
}
