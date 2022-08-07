#include<stdio.h>

int main (){
	int a1,a2=1,n,i,next=0;
	printf("Enter the term of the sequence : ");
	scanf("%d",&n);
	for(i=1; i<=n;i++){
		printf("%d",next);
		a1=a2;
		a2=next;
		next=a1+a2;
		printf("\t");

	}
return 0;

}
