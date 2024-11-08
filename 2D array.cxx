//2D array
/*
author:mary
reg no:CT101/G/23804/24
date:16/10/2024
*/
#include<stdio.h>
int main(){
	int i,j;
	int marks [2][3]={{1,1,2},{2,1,2}};
	for (i=0;i<2;i++)
	for (j=0;j<3;j++)
	{printf("marks[%d] [%d]= %d \n",i,j,marks[i][j]);
	} 
	return 0;}