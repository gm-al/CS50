#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void printline(int size,int row);


int main(void){

	char* s_size = malloc(8);
	int n;

	printf("Height : ");
	while(1)
	{
		fgets(s_size, 8, stdin);
		n = atoi(s_size);

		if(n < 23){
            break;
        } else if (n > 0){
            break;
        }
		printf("Try again ^_^");
	}
	for(int i = 1; i <= n; i++){
        printline(n,i);
    }
}
void printline(int n, int row){
	int Empty = n - row;
	for(int i = 0; i < Empty; i++){
        printf(" ");
    }
	for(int i = 0; i < row; i++){
        printf("#");
    }
	printf("\n");
}