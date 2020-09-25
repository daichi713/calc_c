#include<stdio.h>

int main(void){
	int i,num;
	
	/*要素の個数の読み込み*/
	printf("データの個数 = ");scanf("%d",&num);
	
	int point[num];
	
	/*点数の読み込み*/
	for(i=0;i<num;i++){
		printf("%d個目 : ",i+1);scanf("%d",&point[i]);
	}
	
	
	/*要素数の計算*/
	int len;
	len = sizeof(point) / sizeof(point[0]);
	
	
	/*最大点の計算*/
	int max = point[0];
	for(i=1;i<len;i++){
		if(point[i]>max) max = point[i];
	}
	
	/*最小点の計算*/
	int min = point[0];
	for(i=1;i<len;i++){
		if(point[i]<min) min = point[i];
	}
	
	
	/*合計点の計算*/
	int sum= 0;
	for(i=0;i<len;i++){
		sum += point[i];
	}
	
	/*平均点の計算*/
	double avg;
	avg = (double)sum/len;
	
	
	printf("\n");
	printf("計算結果\n");
	printf("最大点 = %d\n",max);
	printf("最小点 = %d\n",min);
	printf("合計点 = %d\n",sum);
	printf("平均点 = %g\n",avg);
	
	return 0;
}
