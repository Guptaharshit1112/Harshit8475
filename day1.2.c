#include <stdio.h>
int main(){
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); // printing outputs

	if(num >= 90){
	printf(" Grade A"); // printing outputs
		}
	else if ( num >=75){ // Note the space between else & if
		printf(" Grade B");
		}
	else if ( num >= 60){
		printf(" Grade C");
		}
	else if ( num >= 50){
		printf(" Grade D");
		}
	else{
	    printf(" Grade F");
	}
return 0;
}