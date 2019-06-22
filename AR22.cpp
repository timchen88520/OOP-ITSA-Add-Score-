#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>
#include<iostream>

using namespace std;  
int main(){  
    char s[100];  
    //while(scanf("%s",s)!=EOF){  
    while(cin>>s){
        int len=strlen(s);  
        for(int i=0;i<len;i++){
            cout<<s[i]-3;  
            //printf("%c",s[i]-3);  
        } 
        cout<<endl; 
        //printf("\n");  
    }  
  
  
    return 0;  
} 
