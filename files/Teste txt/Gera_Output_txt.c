#include <stdio.h>
int i;

typedef struct{										/*We define structure type to save memory( im not sure about this!!!)   */
	char name[20];
	int num;
} cont;

void input(cont a[],int n) {						/*With this function i enter data in main program.*/
	for(i=0; i<n; i++) {
		printf("Insert name:");
		scanf("%s",&a[i].name);
		printf("Insert number:");
		scanf("%d",&a[i].num);
		printf("\n");
	}
}

void export(cont a[],int n){						/*Export data that is entered in main program to text file output.txt that is in same folder as program*/
	FILE *text;
	text=fopen("output.txt","w");
	for(i=0;i<n;i++){
		fprintf(text,"Name:%s\tNumber:%d\n",a[i].name,a[i].num);
	}
	fclose(text);
}

void printinprog(cont a[],int n){					/*This just prints data in program so we can check that program works correctly.*/
	for(i=0; i<n; i++) {
		printf("Name:%s   Number:%d\n",a[i].name,a[i].num);
	}
}

main() {
	cont per[20];
	int n;
	printf("Enter number of contacts:");
	scanf("%d",&n);
	input(per,n);
	export(per,n);
//	getch();
}
