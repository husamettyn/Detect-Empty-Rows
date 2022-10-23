#include <stdio.h>

int main(){
	int row=0, column=0, i, j, k, text[20][20], emptyRows[20];
	printf("Please enter the number of rows: ");
	scanf("%d", &row);
	printf("Please enter the number of columns: ");
	scanf("%d", &column);
	printf("\nEnter the matrix..\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d. row, %d. column: ", i+1, j+1);
			scanf("%d", &text[i][j]);
		}
	}
	i=j=k=0;
	while(i<row){
		while(j<column){
			if(text[i][j] == 1){
				j=column;
			}
			else if(text[i][j] == 0 && j == column-1){
				emptyRows[k] = i+1;
				k++;
				j++;
			}
			else{
				j++;
			}
		}
		i++;
		j=0;
	}
	printf("Entered Matrix:\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d ", text[i][j]);
		}
		printf("\n");
	}
	printf("\nEmpty Rows: (");
	for(i=0; i<k; i++){
		printf("%d ", emptyRows[i]);	
	}
	printf(")");
	return 0;
}
