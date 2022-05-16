#include <stdio.h>
#include <string.h>

struct  driver
{
	char name[50];
	char dlNo[50];
	char route[50];
	int kms;
 };
	
	int main(){
		struct driver d1,d2,d3;
	printf("Enter the details of the drivers:\n\n");
	printf("Name of the first driver:\n");
		scanf("%s", &d1.name);
		
	printf("Licence number of the first driver:\n");
		scanf("%s", &d1.dlNo);
		
	printf("Route travelled by first driver:\n");
		scanf("%s", &d1.route);
		
	printf("Kms travelled by first driver:\n");
		scanf("%d", &d1.kms);
		
		
		
	printf("\nName of the second driver:\n");
		scanf("%s", &d2.name);
		
	printf("Licence number of the second driver:\n");
		scanf("%s", &d2.dlNo);
		
	printf("Route travelled by second driver:\n");
		scanf("%s", &d2.route);
		
	printf("Kms travelled by second driver:\n");
		scanf("%d", &d2.kms);
		
		
	printf("\nName of the third driver:\n");
		scanf("%s", &d3.name);
		
	printf("Licence number of the third driver:\n");
		scanf("%s", &d3.dlNo);
		
	printf("Route travelled by third driver:\n");
		scanf("%s", &d3.route);
		
	printf("Kms travelled by third driver:\n");
		scanf("%d", &d3.kms);
		
		
		
		
		
		
		
		return 0;
		}
		
		
		
		
