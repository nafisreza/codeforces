#include<stdio.h>
#include<string.h>
int main()
{
    int ans=0,i,j,flag=0;
    char s[100];
    scanf("%s",s);

    for(i=0;s[i]!= '\0';i++){
        for(j=i-1;j>=0;j--){
            if(s[i]==s[j]){
                flag=1;
                break;
            }
        }
        if(flag==0) {
            ans++; 
        }
        
        flag=0;
    }
    if(ans%2==0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}
