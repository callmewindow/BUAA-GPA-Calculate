#include<stdio.h>
#include<math.h>

float getGpa(float score);
int main(){
	float score = 100; 
	printf("分数为：%.2f时对应的GPA为：%.4f\n",score,getGpa(score));
}
//根据平均分计算对应的gpa
float getGpa(float score){
	if(score<60) return 0;
	else return 4-3*pow((100-score),2)/1600;
}
