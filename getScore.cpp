#include<stdio.h>
#include<math.h>

float getScore(float gpa);
int main(){
	float gpa = 4; 
	printf("GPAΪ��%.4fʱ��Ӧ�ķ���Ϊ��%.2f\n",gpa,getScore(gpa));
}
//����gpa���㵱ǰ��ƽ���� 
float getScore(float gpa){
	if(gpa == 0) return 0;
	else return 100-sqrt((4-gpa)*1600/3);
}
