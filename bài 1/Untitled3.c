#include <stdio.h>

int main(){
	char fullName[]="Nguyen Gia Bao";
    int size=sizeof(fullName)/sizeof(char);
	printf("%d",size);
	int i;
	for(i=0; i<size-1; i++){
		printf("ki tu thu %d la: %c \n", i+1, fullName[i]);
	}
	return 0;
}
