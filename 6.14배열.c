#include <stdio.h>
int main(){
	int score[5];
	for(int i=0;i<5;i++){
		scanf("%d",&score[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d��° �л��� ������ %d���Դϴ�.\n",i+1,score[i]);
	}
	
	
	return 0;
}
