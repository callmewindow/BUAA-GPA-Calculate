#include<stdio.h>
#include<math.h>

float getScore(float gpa);
int main(){
	float gpa = 4; 
	printf("GPA为：%.4f时对应的分数为：%.2f\n",gpa,getScore(gpa));
}
//根据gpa计算当前的平均分 
float getScore(float gpa){
	if(gpa == 0) return 0;
	else return 100-sqrt((4-gpa)*1600/3);
}
