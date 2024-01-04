#include <stdio.h>
#include <stdlib.h>

//suture�޷�������ʽ��
int buffer[10];
void bad_69(int data) //bad_69 0,  
{
	fscanf(stdin, "%d", &data); //coverity scan
	int tmp =0;
       if(data){
			tmp =1;
	   }
	printf( buffer[tmp+1] );//SLIVER_SINK
}
