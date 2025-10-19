#include <stdio.h>
int main() {
	
	int IDs[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i;
	int k;
	int size = 10;
	int changed[10];
	
	printf("By how many positions do you want to rearrange?");
	scanf("%d", &k);
	
	
	for(i=0; i < size; i++ ) {
		changed[(i+ k)%size] = IDs[i]; 
	}
	for(i=0; i<size; i++) {
		printf("%d ",changed[i]);
	}
return 0;	
}

