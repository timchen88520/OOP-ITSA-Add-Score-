#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
#include<iostream>
using namespace std;  
int main(){  
    char s[10];  
    bool pen = false;  
    int dir=1;//0up 1right 2down 3left  
    int a[55][55];  
    memset(a, 0, sizeof(a));  
    int x = 0, y = 0, xma = -1, yma = -1;  
    while(cin>>s){  
        if(s[0] == '9') return 0;  
        else if(s[0] == '1') pen = false;  
        else if(s[0] == '2') pen = true;  
        else if(s[0] == '3') dir = (dir + 1) % 4;  
        else if(s[0] == '4') dir = (dir + 3) % 4;  
        else if(s[0] == '5'){  
            int dis = s[2] - '0';  
            if(strlen(s) > 3) dis = dis * 10 + (s[3] - '0');  
            if(dir == 0){  
                if(pen){  
                    for(int i = 0;i < dis;i += 1, x -= 1) a[x][y] = 1;  
                }  
                else x -= dis;  
            }  
            else if(dir == 1){  
                if(pen){  
                    for(int i = 0;i < dis;i += 1, y += 1) a[x][y] = 1;  
                }  
                else y += dis;  
            }  
            else if(dir == 2){  
                if(pen){  
                    for(int i = 0;i < dis;i += 1, x += 1) a[x][y] = 1;  
                }  
                else x += dis;  
            }  
            else if(dir == 3){  
                if(pen){  
                    for(int i = 0;i < dis;i += 1, y -= 1) a[x][y] = 1;  
                }  
                else y -= dis;  
            }  
            if(pen) a[x][y]=1;  
            xma = max(xma, x);  
            yma = max(yma, y);  
        }  
        else if(s[0] == '6'){  
            for(int i = 0;i <= xma;i += 1){  
                for(int j = 0;j <= yma;j += 1){  
                    if(a[i][j]) printf("*");  
                    else printf(" ");  
                }  
                printf("\n");  
            }  
        }  
    }  
  
  
  
    return 0;  
}
