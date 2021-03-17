#include <stdio.h>
#include<math.h>

#define PI 3.14159265
#define G 9.81

void time_request();
void average_calc();
void ball_throw();

void main()
{
	average_calc();
	time_request(); 
	ball_throw();
}

void average_calc()
{
	float Hedva, Liniar_algebra, Graphics, Chemistry, Exp_Chemistry;
	float pHedva, pLiniar_algebra, pGraphics, pChemistry, pExp_Chemistry;
	float average, point_sum;
	printf("Give me your grades in this exact order: hedva, liniar_algebra, Graphics, Chemistry, exp_Chemistry:\n");
	printf("between each grade click the space bar once.\n");
	scanf_s("%f %f %f %f %f", &Hedva, &Liniar_algebra, &Graphics, &Chemistry, &Exp_Chemistry);
	printf_s("\nNow, give me the number of points each subject is mesured for, in the same order,");
	printf_s(" again with one click of the bar space between each subject:\n ");
	scanf_s("%f %f %f %f %f", &pHedva, &pLiniar_algebra, &pGraphics, &pChemistry, &pExp_Chemistry);
	point_sum = pHedva + pLiniar_algebra + pGraphics + pChemistry + pExp_Chemistry;
	average = Hedva * (pHedva / point_sum) + Liniar_algebra * (pLiniar_algebra / point_sum) + Graphics * (pGraphics / point_sum);
	average += Chemistry * (pChemistry / point_sum) + Exp_Chemistry * (pExp_Chemistry / point_sum);
	printf_s("The average is %.2f", average);
}

void ball_throw()
{
	double throw_angle, throw_vilocity;
	double return_value;
	printf_s("Give me the vilocity value of the throw, and the throwing angle:\n");
	printf_s("For example, 20 45 - when 20 is the vilocity and 45 is the angle in degrees.\n");
	scanf_s("%lf %lf", &throw_vilocity, &throw_angle);
	throw_angle *= PI / 180;
	return_value = (pow(throw_vilocity, 2) / G) * sin(2*throw_angle);
	printf_s("The distance is %.2lf meters", return_value);
}

void time_request()
{
	int hour, minute, random;
	int added_hour, added_minutes;
	printf_s("Give me 3 numbers: the first one the hours, the second one is the minutes, the third one is the number of minutes you want to add\n");
	printf_s("for example, if the clock now showes 23:11 you enter 23 11 (random number):\n");
	scanf_s("%d %d %d", &hour, &minute, &random);
	added_minutes = random % 60; //calculates minutes added
	added_hour = random / 60; //calculates hours added
	hour += added_hour;
	hour %= 24;
	minute += added_minutes;
	minute %= 60;
	printf_s("The new time is: %d:%d", hour,minute);
}