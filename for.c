#include<stdio.h>
#include<string.h>
void main(){
	int n,i;
	char txt[20];
	printf("Enter the number of times: ");
	scanf("%d",&n);
	printf("Enter the text: ");
	scanf("%s",&txt);
	
	for (i=1;i<=n;i++){
		printf("%d %s\n",i,txt);
	}
	
}
