#include <stdio.h>
int main() {
	
	int list[10] = {50,100, 150, 200, 300, 350, 500, 600, 1000, 2000};
	int size = 10;
	int sum = 0;
	
	int i,j;
	int askBudget;
	
	printf("How much budget do you have?\n") ;
	scanf("%d", &askBudget);
	
	for(i = 0; i < size; i++) {
		for (j = i; j < size + 1; j++) {
			
			sum = list[i] + list[j];
			
			
			if(sum == askBudget) {
				printf("the two prices are %d %d whose sum is %d", list[i], list[j], sum);
			}
			
			
		
		}
		
		
	}
	
	
	return 0;
}

