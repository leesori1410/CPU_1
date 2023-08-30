#include <stdio.h>
int main(){
	int s;
	scanf("%d",&s);
	
//	1.
/*	for(int i=1;i<=s;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
*/

//	2.
/*	for(int i=1;i<=s;i++){
		for(int j=s;j>=1;j--){
			if(j>i)	printf(" ");
			else	printf("*");
		}
		printf("\n");
	}	
*/

//	3.
/*	for(int i=s;i>=1;i--){
		for(int j=1;j<=s;j++){
			if(j<=i)	printf("*");
		}
		printf("\n");
	}
*/

//	4.
/*	for(int i=1;i<=s;i++){
		for(int j=1;j<=s;j++){
			if(j<i)	printf(" ");
			else	printf("*");
		}
		printf("\n");
	}
*/

//	5.
/*	for(int i=1;i<=s;i++){
		for(int j=s;j>=1;j--){
			if(j>i)	printf(" ");
			else	printf("*");
		}
		for(int k=1;k<s;k++){
			if(k<i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
*/

//	6.
/*	for(int i=1;i<=s;i++){
		for(int j=1;j<=s;j++){
			if(j>i)	printf("*");
			else	printf(" ");
		}
		for(int k=s;k>=1;k--){
			if(k<i)	printf(" ");
			else	printf("*");
		}
		printf("\n");
	}
*/

//	7.
/*	for(int i=1;i<=s-1;i++){
		for(int j=s;j>=1;j--){
			if(j>i)	printf(" ");
			else	printf("*");
		}
		for(int k=1;k<s;k++){
			if(k<i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
	for(int i=1;i<=s;i++){
		for(int j=1;j<=s;j++){
			if(j>=i)	printf("*");
			else	printf(" ");
		}
		for(int k=s;k>=1;k--){
			if(k<=i)	printf(" ");
			else	printf("*");
		}
		printf("\n");
	}
*/

//	8.
/*	for(int i=1;i<=s;i++){
		for(int j=1;j<=s;j++){
			if(j<=i)	printf("*");
			else	printf(" ");
		}
		for(int j=s;j>=1;j--){
			if(j<=i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
	for(int i=1;i<s;i++){
		for(int j=s;j>=1;j--){
			if(j>i)	printf("*");
			else	printf(" ");
		}
		for(int k=1;k<=s;k++){
			if(k>i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
*/

//	9. 
/*	for(int i=1;i<s;i++){
		for(int j=1;j<s;j++){
			if(j>=i)	printf("*");
			else	printf(" ");
		}
		for(int k=s;k>=1;k--){
			if(i>k)	printf(" ");
			else	printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=s;i++){
		for(int j=s;j>=1;j--){
			if(j<=i)	printf("*");
			else	printf(" ");
		}
		for(int k=1;k<=s;k++){
			if(k<i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
*/

//	12.
/*	for(int i=1;i<=s;i++){
		for(int j=s;j>=1;j--){
			if(j<=i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
		
	}
	for(int i=1;i<=s;i++){
		for(int k=1;k<=s;k++){
			if(k>i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}	
*/

//	13.
/*	for(int i=1;i<=s;i++){
		for(int j=1;j<=s;j++){
			if(j<=i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
	for(int i=1;i<s;i++){
		for(int k=s-1;k>=1;k--){
			if(k>=i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
*/

//	14.
/*	for(int i=1;i<=s;i++){
		printf("*\n");
	}
*/

//	15.	
/*	for(int i=1;i<s;i++){
		for(int j=s;j>1;j--){
			if(j==i)	printf("*");
			else	printf(" ");
		}
		for(int j=1;j<s;j++){
			if(j==i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
*/	
	
//	16.	
/*	for(int i=1;i<=s;i++){
		for(int j=s;j!=i;j--){
			printf(" ");
		}
		
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
*/

//	17.
/*	for(int i=0;i<s-1;i++){
		for(int j=-(s-1);j<s;j++){
			if(j==-i||j==i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
	for(int i=1; i<=(s*2)-1;i++){
		printf("*");
	}
*/

//	20.
/*	for(int i=1;i<=s;i++){
		if(i%2==0)	printf(" ");
		for(int j=1;j<=s;j++){
			printf("* ");
		}
		printf("\n");
	}
*/	


	
	
	





	
	
	return 0;
}
