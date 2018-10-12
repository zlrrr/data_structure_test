#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000];
    int i = 0, Up = 0, Down = 0, Num = 0, Space = 0;
    gets(s);
    for(i = 0; i < 10000; i++){
        if(s[i] == ' '){
            Space++;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            Down++;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            Up++;
        }else if(s[i] >= '0' && s[i] <= '9'){
            Num++;
        }else if(s[i] == '\0'){
            break;
    	}
	}
    printf("%d %d %d %d",Up,Down,Num,Space);
}
