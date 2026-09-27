#include<stdio.h>
#include<string.h>
void main(){
	int n,i;
	char txt[20];
	printf("donner le nombre de fois ");
	scanf("%d",&n);
	printf("donner le texte ");
	scanf("%s",&txt);
	
	for (i=1;i<=n;i++){
		printf("%d %s\n",i,txt);
	}
	
}
