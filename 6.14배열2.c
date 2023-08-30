#include <stdio.h>
int main(){
	int si[6];
	for(int i=0;i<6;i++){
		scanf("%d",&si[i]);
	}
	for(int i=5;i>=0;i--){
		printf("%d ",si[i]);
	}
	
	return 0;
}
