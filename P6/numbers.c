/*Author Steven Faulkner
 *takes a string of command line arguments
 *and finds max/min number depending on input
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void find_largest(int a[], int n);
void find_smallest(int a[], int n);


int main(int argc, char *argv[]) {

	//chekcs that there are command line arguments	

	if(argc <= 1) {
	
	printf("invalid option, -l for largest or -s for smallest ");
		return 0;
	}
	

	int i;
	int num[argc];
	char *argv1 = argv[1];
	char *lrg = "-l";
	char *sml = "-s";

	//if statement to pass control to appropriate function, or terminate if undesired input is recieved

	if (argc == 12) {
	
		if (strcmp(argv1,lrg) == 0) {
		
			for( i = 2; i < argc; i++)
			   num[i] = atoi(argv[i]);


		printf("Largest number: ");
		find_largest(num, argc);

	   }
	
		else if (strcmp(argv1,sml) == 0) {
	
			for( i = 2; i < argc; i++)
			   num[i] = atoi(argv[i]);
	
		
		printf("Smallest number: ");
		find_smallest(num, argc);
	   }  

	else {
		printf("Invalid Input!");
		return 0;
	   }
	}	
	else {
		printf("Input is not 10 numbers");	
		return 0;
	}

return 0;
}

void find_largest(int a[], int n) {
	
	//accepts array and size of, then finds largest integer in string

	int *p;
	int lrg = a[2];

	for( p = a+2; p< a+n;p++) {
	
		if( *p > lrg)
		  lrg = *p;
	}

	printf("%d", lrg);	

}

void find_smallest(int a[], int n) {

	//accepts array and size of, then finds smallest integer in string

	int *p;
	int sml = a[2];
	
	for(p = a+2; p < a+n; p++) {
	
		if( *p < sml)
		  sml = *p;
	}
	
	printf("%d", sml);
}
