#include<stdio.h>
#include<string.h>

int isDown(char m){
	if((m >= 'a' && m <= 'z') || m == '&'){
		return 1;
	}else{
		return 0;
	}
}

int main()
{
    char s[3000];
    int flag = 0;
    gets(s);
    int i = 0, j = strlen(s) - 1;
    while(i <= j){
        if(s[i] != s[j] || !isDown(s[i]) || !isDown(s[j]) || (i != j && s[i] == '&')){
            break;
        }
        if(i == j && s[i] == '&' && i != 0){
        	flag = 1;
		}
        i++;j--;
	}
	if(flag == 1){
		printf("YES");
	}else{
		printf("NO");
	}
}
