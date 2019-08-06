#include<stdio.h>
#include<math.h>
//课程分数学分列表 
	
	//每一个基础的元素即为一门课程的有关信息，只需要不断向下添加课程即可
	//成绩和学分可在教务系统中个人成绩查询中得到 
	 
	//第一个值为课程分数
	//正常课程（100分制）直接分数即可
	//其他课程（五级制），分数需要设定为绩点4，3.5，2.8，1.7，0对应的成绩 
	//对应的成绩即为：100，83.67，74.70，64.98，0  分别对应成绩的五个层次 
	
	//第二个值为学分
	//第三个是是否为特定计算的课程，可单独提取出来计算，例如进行必修课程绩点的计算 
float course[99][3]={
	
	//大一上 
	{100,1,1}, 
	
	//结束 
	{-1,-1,-1},
};
float getScore(float gpa);
float getGpa(float score);
int main(){
	//单个课程的绩点和对应的学分绩点 
	float gpa_course,gpa_credit;
	
	//所有课程的总绩点、总学分和平均分 
	float gpa_all,credit_all,score_all;
	
	//特定课程的总绩点、总学分和平均分 
	float gpa_specific,credit_specific,score_specific;
	
	for(int i = 0;course[i][0]!=-1;i++){
		gpa_course = getGpa(course[i][0]);
		gpa_credit = gpa_course*course[i][1];
		
		//所有课程计算 
		gpa_all += gpa_credit;
		credit_all += course[i][1];
		
		//特定课程计算 
		if(course[i][2] == 0) continue;
		gpa_specific += gpa_credit;
		credit_specific += course[i][1];
		
	}
	
	//所有课程计算 
	gpa_all /= credit_all;
	score_all = getScore(gpa_all);
	
	//特定课程计算 
	gpa_specific /= credit_specific;
	score_specific = getScore(gpa_specific);

	printf("所有课程总评GPA：%.4f，对应分数：%.2f\n",gpa_all,score_all);
	printf("特定课程总评GPA：%.4f，对应分数：%.2f\n",gpa_specific,score_specific);
	
	return 0;
}
//根据gpa计算当前的平均分 
float getScore(float gpa){
	if(gpa == 0) return 0;
	else return 100-sqrt((4-gpa)*1600/3);
}
//根据分数计算GPA
float getGpa(float score){
	if(score<60) return 0;
	else return 4-3*pow((100-score),2)/1600;
}
