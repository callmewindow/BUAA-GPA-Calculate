#include<stdio.h>
#include<math.h>
//�γ̷���ѧ���б� 
	
	//ÿһ��������Ԫ�ؼ�Ϊһ�ſγ̵��й���Ϣ��ֻ��Ҫ����������ӿγ̼���
	//�ɼ���ѧ�ֿ��ڽ���ϵͳ�и��˳ɼ���ѯ�еõ� 
	 
	//��һ��ֵΪ�γ̷���
	//�����γ̣�100���ƣ�ֱ�ӷ�������
	//�����γ̣��弶�ƣ���������Ҫ�趨Ϊ����4��3.5��2.8��1.7��0��Ӧ�ĳɼ� 
	//��Ӧ�ĳɼ���Ϊ��100��83.67��74.70��64.98��0  �ֱ��Ӧ�ɼ��������� 
	
	//�ڶ���ֵΪѧ��
	//���������Ƿ�Ϊ�ض�����Ŀγ̣��ɵ�����ȡ�������㣬������б��޿γ̼���ļ��� 
float course[99][3]={
	
	//��һ�� 
	{100,1,1}, 
	
	//���� 
	{-1,-1,-1},
};
float getScore(float gpa);
float getGpa(float score);
int main(){
	//�����γ̵ļ���Ͷ�Ӧ��ѧ�ּ��� 
	float gpa_course,gpa_credit;
	
	//���пγ̵��ܼ��㡢��ѧ�ֺ�ƽ���� 
	float gpa_all,credit_all,score_all;
	
	//�ض��γ̵��ܼ��㡢��ѧ�ֺ�ƽ���� 
	float gpa_specific,credit_specific,score_specific;
	
	for(int i = 0;course[i][0]!=-1;i++){
		gpa_course = getGpa(course[i][0]);
		gpa_credit = gpa_course*course[i][1];
		
		//���пγ̼��� 
		gpa_all += gpa_credit;
		credit_all += course[i][1];
		
		//�ض��γ̼��� 
		if(course[i][2] == 0) continue;
		gpa_specific += gpa_credit;
		credit_specific += course[i][1];
		
	}
	
	//���пγ̼��� 
	gpa_all /= credit_all;
	score_all = getScore(gpa_all);
	
	//�ض��γ̼��� 
	gpa_specific /= credit_specific;
	score_specific = getScore(gpa_specific);

	printf("���пγ�����GPA��%.4f����Ӧ������%.2f\n",gpa_all,score_all);
	printf("�ض��γ�����GPA��%.4f����Ӧ������%.2f\n",gpa_specific,score_specific);
	
	return 0;
}
//����gpa���㵱ǰ��ƽ���� 
float getScore(float gpa){
	if(gpa == 0) return 0;
	else return 100-sqrt((4-gpa)*1600/3);
}
//���ݷ�������GPA
float getGpa(float score){
	if(score<60) return 0;
	else return 4-3*pow((100-score),2)/1600;
}
