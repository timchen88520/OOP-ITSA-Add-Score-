#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
#include<iostream>

using namespace std;  
struct team{  
    int num,score;  
};  
bool cmp(team a,team b){  
    if(a.score==b.score) return a.num<b.num;  
    return a.score>b.score;  
}  
int main(){  
    char s1[10],s2[10],s3[10];  
    int n;  
    //while(scanf("%d",&n)!=EOF){  
    while(cin>>n){}
        team a[5];  
        memset(a,0,sizeof(a));  
        a[0].num=1;  
        a[1].num=2;  
        a[2].num=3;  
        while(n--){
            cin>>s1>>s2>>s3;  
            //scanf("%s %s %s",s1,s2,s3);  
            if(s1[0]=='c') a[0].score+=10;  
            else if(s1[0]=='w') a[0].score-=10;  
            if(s2[0]=='c') a[1].score+=10;  
            else if(s2[0]=='w') a[1].score-=10;  
            if(s3[0]=='c') a[2].score+=10;  
            else if(s3[0]=='w') a[2].score-=10;  
        }  
        sort(a,a+3,cmp);  
        for(int i=0;i<3;i++){  
            cout<<"("<<a[i].num<<","<<a[i].score<<")";
            //printf("(%d,%d)",a[i].num,a[i].score);  
            if(i<2 && a[i].score!=a[i+1].score) cout<<endl;//printf("\n");  
        }  
        printf("\n");  
    }  
  
  
  
    return 0;  
}
