#include <stdio.h>

void main()
{
	float Hedva, Liniar_algebra, Graphics, Chemistry, Exp_Chemistry;
	float pHedva, pLiniar_algebra, pGraphics, pChemistry, pExp_Chemistry;
	float average, point_sum;
	printf("Give me your grades in this exact order: hedva, liniar_algebra, Graphics, Chemistry, exp_Chemistry:\n");
	printf("between each grade click the space bar once.\n");
	scanf_s("%f %f %f %f %f",&Hedva, &Liniar_algebra, &Graphics, &Chemistry, &Exp_Chemistry);
	printf_s("\nNow, give me the number of points each subject is mesured for, in the same order,");
	printf_s(" again with one click of the bar space between each subject:\n ");
	scanf_s("%f %f %f %f %f", &pHedva, &pLiniar_algebra, &pGraphics, &pChemistry, &pExp_Chemistry);
	point_sum = pHedva + pLiniar_algebra + pGraphics + pChemistry + pExp_Chemistry;
	average = Hedva * (pHedva / point_sum) + Liniar_algebra * (pLiniar_algebra / point_sum) + Graphics * (pGraphics / point_sum); 
	average += Chemistry * (pChemistry / point_sum) + Exp_Chemistry * (pExp_Chemistry / point_sum);
	printf_s("The average is %.2f", average);
}