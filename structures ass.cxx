//structures
/*author: mary
regno:Ct101/G/23804/24
date:24/10/2024
*/
#include<stdio.h>
#include<string.h>
struct book{
	char title[30],author[30],ISBN[13];
	int publication_year;
	float price;};
	int main(){
		struct book b1;
		strcpy(b1.title,"introduction to programming");
		strcpy(b1.author,"John Smith");
		strcpy(b1.ISBN,"9780131103627");
		b1.publication_year=2022;
		b1.price=49.99;
		printf("title:%s\n",b1.title);
		printf("author:%s\n",b1.author);
		printf("ISBN:%s\n",b1.ISBN);
		printf("publication_year:%d\n",b1.publication_year);
		printf("price:%f\n",b1.price);
		
		return 0;}
		
		