#include <stdio.h>
int i,n, m=1;;

typedef struct{										/*We define structure type to save memory( im not sure about this!!!)   */
	int x,y;
} coord;

void set_var(int *n){
	printf("Enter number of points:");
	scanf("%d", n);
}

void manual(coord a[],int n) {						/*With this function i enter data in main program.*/
	for(i=0; i<n; i++) {
		printf("Insert x:");
		scanf("%d",&a[i].x);
		printf("Insert y:");
		scanf("%d",&a[i].y);
		printf("\n");
	}
}

void printinprog(coord a[]){					/*This just prints data in program so we can check that program works correctly.*/
	for(i=0; i<n; i++) {
		printf("(%d, %d)\n",a[i].x,a[i].y);
	}
}

void export(coord a[]){							/*Export data that is entered in main program to text file output.txt that is in same folder as program*/
	FILE *text;
	text=fopen("xy.txt","w");
	for(i=0;i<n;i++){
		fprintf(text,"%d\t%d\n",a[i].x,a[i].y);
	}
	fclose(text);
}

void automatic(coord a[]){
	for(i=0;i<n;i++){
		switch (m){
			case 1:
				
				break;
			case 2:
				
			case 3:
				system("cls");
				printf("3) Y=X*X\n\n");
			case 4:
				system("cls");
				printf("4) Y=X*X*X\n");
		}	
	}
}

void mode(coord a[20], int n){
	do{
		printf("Choose a mode:\n\t");
		printf("1) Manual\n\t");
		printf("2) Y=X\n\t");
		printf("3) Y=X*X\n\t");
		printf("4) Y=X*X*X\n");
		scanf("%d", &m);
		if(!((m>0)&&(m<=4))){
			system("cls");
			printf("Invalid answer. Please type a integer between 1 and 4\n\n");
		}
		
	}while (!((m>0)&&(m<=4)));
	
	
	set_var(&n);
		
	switch (m){
		case 1:
			system("cls");
			printf("1) Manual:\n\n");
			manual(a,n);
			break;
		case 2:
			system("cls");
			printf("2) Y=X\n\n");
			break;
		case 3:
			system("cls");
			printf("3) Y=X*X\n\n");
			break;
		case 4:
			system("cls");
			printf("4) Y=X*X*X\n");
			break;
	}
	
	printinprog(a);
	export(a);
}

main() {
	coord a[20];
	mode(a,n);
}
