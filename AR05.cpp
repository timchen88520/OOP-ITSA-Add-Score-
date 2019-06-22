#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
#include<iostream>
//#include<bits/stdc++.h>  
using namespace std;  
int main(){  
    int ncase,n,t,N;  
    while(cin>>ncase){  
        while(ncase--){  
            int a[15];  
            int i=0;  
            while(cin>>t &&t!=-1){  
                a[i++]=t;  
            }  
            n=i;  
            cin>>N;  
            sort(a,a+n);  
            int ans=0;  
            do{  
                int num=0;  
                for(i=0;i<n;i++){  
                    num=num*10+a[i];  
                }  
                //printf("num=%d\n",num);  
                if(num%N==0) ans++;  
            }while(next_permutation(a,a+n));  
            cout<<ans<<endl;  
        }  
    }  
  
  
  
    return 0;  
} 
