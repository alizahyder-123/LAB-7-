#include <stdio.h> 
int main() {
	
	int sectionA[10] = {251001, 251002, 251003, 251004, 251005, 251006, 251007, 251008, 251009, 251010};
	int sectionB[10]= {251011, 251012,251013, 251014, 251015, 251016, 251017, 251018,251019, 251020 };
	int combined[20];
	int i = 0;
	int j = 0;
	int k = 0;
	int size = 10;
	
	for (i; i<size; i++ ) {
		combined[i] = sectionA[i];
	}
	
	
	for(j; j<size; j++) {
		combined[i+j] = sectionB[j];
	}
	
	for(k; k < 20; k++) {
		printf("%d\n", combined[k]);
	}
	
	return 0;
}

