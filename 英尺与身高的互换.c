#include <stdio.h>
void main (){
	printf("请输入身高的英尺和英寸"); 
	double foot;
	double inch;
	scanf("%lf %lf",&foot,&inch);
	printf("%f",(foot+inch/12)*0.3048);
	
}
