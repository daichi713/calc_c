#include<stdio.h>

int main(void){
	int i,num;
	
	/*�v�f�̌��̓ǂݍ���*/
	printf("�f�[�^�̌� = ");scanf("%d",&num);
	
	int point[num];
	
	/*�_���̓ǂݍ���*/
	for(i=0;i<num;i++){
		printf("%d�� : ",i+1);scanf("%d",&point[i]);
	}
	
	
	/*�v�f���̌v�Z*/
	int len;
	len = sizeof(point) / sizeof(point[0]);
	
	
	/*�ő�_�̌v�Z*/
	int max = point[0];
	for(i=1;i<len;i++){
		if(point[i]>max) max = point[i];
	}
	
	/*�ŏ��_�̌v�Z*/
	int min = point[0];
	for(i=1;i<len;i++){
		if(point[i]<min) min = point[i];
	}
	
	
	/*���v�_�̌v�Z*/
	int sum= 0;
	for(i=0;i<len;i++){
		sum += point[i];
	}
	
	/*���ϓ_�̌v�Z*/
	double avg;
	avg = (double)sum/len;
	
	
	printf("\n");
	printf("�v�Z����\n");
	printf("�ő�_ = %d\n",max);
	printf("�ŏ��_ = %d\n",min);
	printf("���v�_ = %d\n",sum);
	printf("���ϓ_ = %g\n",avg);
	
	return 0;
}
