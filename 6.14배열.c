#include <stdio.h>
int main(){
	int score[5];
	for(int i=0;i<5;i++){
		scanf("%d",&score[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d번째 학생의 성적은 %d점입니다.\n",i+1,score[i]);
	}
	
	
	return 0;
}
