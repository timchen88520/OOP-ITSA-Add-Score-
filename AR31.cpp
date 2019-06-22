#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
using namespace std;  
int main(){  
    char s[1500];  
    while(fgets(s,1500,stdin)){  
        char *token=strtok(s," \n\r");  
        while(token!=NULL){  
            int len=strlen(token);  
            bool flag=false;  
            if(token[len-1]==',' || token[len-1]=='.'){  
                len--;  
                flag=true;  
            }  
            for(int i=0;i<len;i++){  
                int j=len-i-1;  
                printf("%c",/*(token[j]>='0' && token[j]<='9')?token[j]:(token[j]=='_')?'_':*/(token[j]<='Z' && token[j]>='A')?(token[j]-'A'+'a'):(token[j]<='z' && token[j]>='a')?(token[j]-'a'+'A'):token[j]);  
            }  
  
            //if(token[len]==',')  
            //if(flag) printf(",");  
            if(token[len]=='.' || token[len]==',') printf("%c",token[len]);  
            if(token[len]==','/*|| token[len]=='.'*/) printf(" ");  
            token=strtok(NULL," \n\r");  
        }  
        printf("\n");  
    }  
    return 0;  
}
