#include<stdio.h>
int main(){
	
//	int a=65;
//	for(int i=1;i<=5;i++,a++){
//		for(int j=5;j>=i;j--){
//			printf(" ");
//		}
//		for(int k=1;k<i;k++){
//			printf("*");
//		}
//		printf("%c",a);
//		for(int o=1;o<i;o++){
//			printf("*");
//		}
//		for(int l=5;l>=i;l--){
//			printf(" ");
//		}
//		printf("\n");
//	}

	int a=65;
	for(int i=1;i<=5;i++,a++){
		for(int j=5;j>=1;j--){
			if(j<i)	printf("*");
			else	printf(" ");
		}
		printf("%c",a);
		for(int k=1;k<=5;k++){
			if(k<i)	printf("*");
			else	printf(" ");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
