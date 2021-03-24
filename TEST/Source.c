#include <stdio.h>
#include<math.h>

#define PI 3.14159265
#define G 9.81

void time_request();
void average_calc();
void ball_throw();
void Get_bigger();

void main()
{
	//average_calc();
	//time_request(); 
	//ball_throw();
	Get_bigger();
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
	printf_s("The new time is: %2d:%1d%1d", hour,minute/10,minute%10);
}

void Get_bigger()
{
	int num1, num2, num3;
	printf_s("Hi, give me 3 numbers, and i'll tell you which one of them is the biggest\n");
	printf_s("Enter the numbers in this structure: num1 num2 num3\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 >= num2)
	{
		//num1 > num2, and now we check the relations with num3
		if (num1 >= num3) //num1 > num2 && num1 > num3
			printf_s("The biggest number is: %d", num1);
		else //num1 > num2 && num3 > num1
			printf_s("The biggest number is: %d", num3);
	}
	else if (num2 >= num3) //we defenitly know num2 > num1
		printf_s("The biggest number is: %d", num2);
	else
		printf_s("The biggest number is: %d", num3);
}

/*
	Tirgul class number 3, question 2:

	~0 << 3 & 3 * 3 =
	((~0) << 3) & (3*3) =
	([(11111111) = (binary of ~0)] << 3) & (9)
	(11111000) & [(00001001) = (binary of 9)]
	(00001000) = 8 (decimal value)

	Hex = 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F = [16 base]
	octal = 0,1,2,3,4,5,6,7,8 = [8 base]
*/
