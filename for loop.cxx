//for loop output numbers1-30
#include<stdio.h>
int main(){
	int start,stop;
	printf("enter a value to start;");
	scanf("%d\n",&start);
	printf("enter a value to stop:");
	scanf("%d\n",&stop);
	for(int i=start;i<=stop;i++){
		printf("%d\n",i);}
		return 0;
}