#include<stdio.h>
#include<math.h>

float getGpa(float score);
int main(){
	float score = 100; 
	printf("����Ϊ��%.2fʱ��Ӧ��GPAΪ��%.4f\n",score,getGpa(score));
}
//����ƽ���ּ����Ӧ��gpa
float getGpa(float score){
	if(score<60) return 0;
	else return 4-3*pow((100-score),2)/1600;
}
