#include <stdio.h>
#include <string.h>
#include<math.h>

#define PI 3.141592653
#define G 9.81
#define DELTA 0.0001
#define ARRAY_SIZE 10

void time_request();
void average_calc();
void ball_throw();
void Get_bigger();
void Grade_status_to_screen();
void Hot_cold_game();
void Fibonachi_series();
void calculate_pie_value_lyvnitch();
void free_ball_throw();
void encrypt();
void catch_id();


void main()
{
	//average_calc();
	//time_request();
	//ball_throw();
	//Get_bigger();
	//Grade_status_to_screen();
	//Hot_cold_game();
	//Fibonachi_series();
	//calculate_pie_value_lyvnitch();
	//free_ball_throw();
	//encrypt();
	//catch_id();
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

void Grade_status_to_screen()
{
	//We can assume that the input is between 0 - 100

	int grade;
	printf_s("Give me your grade: ");
	scanf_s("%d", &grade);
	
	if (grade <= 56)
	{
		printf_s("You failed\n");
	}
	else if (grade >= 57 && grade <= 79)
	{
		printf_s("You passed\n");
	}
	else
	{
		printf_s("You passed in a good grade!\n");
	}
}

void Hot_cold_game()
{
	int num_to_guess, guessed_num;
	int difference, flag = 0;
	printf_s("Give me the number that the player should guess: ");
	scanf_s("%d", &num_to_guess);

	for (int i = 0; i < 500; i++)
	{
		printf_s("%d \n",i+1);
	}

	do
	{
		printf_s("write your guess: ");
		scanf_s("%d", &guessed_num);

		difference = num_to_guess - guessed_num;
		difference = abs(difference);

		/* we could have used this short if check instead of abs():
		
		if (difference < 0)
		{
			difference *= -1; //the value without the sign
		} */ 

		if (difference != 0)
		{
			//first command
			if (difference >= 1000)
			{
				printf_s("VERY COLD!\n");
			}
			else if (difference >= 100)
			{
				printf_s("COLD!\n");
			}
			else if (difference >= 10)
			{
				printf_s("WARM!\n");
			}
			else if (difference >= 5)
			{
				printf_s("WARMER!\n");
			}
			else if (difference >= 2)
			{
				printf_s("HOT!\n");
			}
			else
			{
				printf_s("BURNNING!\n");
			}
			//second command
			printf_s("try again\n\n");
			//and so on...
		}
		else
		{
			printf_s("YOU WON!\n");
			flag = 1; //ends the while loop
		}
	} while (!flag);
}

void Fibonachi_series()
{
	/*
	The program starts from the index 1 - this means that the first variable
	in Fibonatchi series in on place 1 - the index 0 that equels 0
	and the second variable in index 1 is 1 and so on...
	*/

	int index;
	int Two_back = 0, One_back = 1, current = 1;
	printf_s("write the index of the number you wish to see in the Fibonatchi series: ");
	scanf_s("%d", &index);

	if (index == 0)
	{
		printf_s("The number on the 1st place in Fibonatchi series is 0\n");
	}
	else
	{
		/*
		additinally we subtract 1 from the index the user gave
		us because we already took care with the choise that the user 
		chose the index 1.
		*/

		for (int i = 0; i < index-1; i++) 
		{
			current = One_back + Two_back;
			Two_back = One_back;
			One_back = current;
		}
		printf_s("The number on the %d place with the index %d, in Fibonatchi series is %d.\n", index+1, index, current);
		printf_s("The index count start from 0 and the variable with the index 0 is the first variable, and so on...\n");
	}
}

void calculate_pie_value_lyvnitch()
{
	int flag = 0, count = 2;
	float temp, sum = 1;
	float devided_by = 3;

	while (!flag)
	{
		temp = (1 / devided_by);
		
		if (count % 2 == 0)
		{
			sum -= temp;
		}
		else
		{
			sum += temp;
		}

		if (temp < DELTA)
		{
			flag = 1;
		}
		else
		{
			devided_by += 2;
			count++;
		}
	}

	printf_s("%f\n", temp);
	printf_s("The number of variables we used to calculate pie is %d,\n", count);
	printf_s("and the value of pie we calculated is %f.\n",(sum * 4.0));
}

void free_ball_throw()
{
	double x0, y0, alpha, delta_t, v0;
	double x, y ,t = 0;
	int flag = 0;
	printf_s("Give me the initial x cordinate please (meters): ");
	scanf_s("%lf", &x0);
	printf_s("Give me the initial y cordinate please (meters): ");
	scanf_s("%lf", &y0);
	printf_s("Give me the angle of the throw please (degrees): ");
	scanf_s("%lf", &alpha);
	printf_s("Give me the size of the time gamps of every mesurment please (seconds): ");
	scanf_s("%lf", &delta_t);
	printf_s("Give me the initial speed value please (meters per sec): ");
	scanf_s("%lf", &v0);

	alpha *= PI / 180;
	printf_s("\n\n");

	while(!flag)
	{
		x = x0 + (v0 * cos(alpha) * t);
		y = y0 + (v0 * sin(alpha) * t) - ((G * pow(t, 2)) / 2);
		
		if (y >= 0) 
		{
			printf_s("The x cordinate in after %.2lf seconds is %.2lf\n", t, x);
			printf_s("The y cordinate in after %.2lf seconds is %.2lf\n\n\n", t, y);
			t += delta_t;
		}
		else
		{
			flag = 1;
		}
	}
}

void encrypt()
{
	char str[31];
	char temp;
	printf_s("Give me a sentence to encrypt: ");
	gets_s(str,sizeof(str));

	for (int i = 0; i < (strnlen_s(str, sizeof(str)) + 1 ) / 2; i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '_';
		}

		if (str[(strnlen_s(str, sizeof(str)) - 1) - i] == ' ')
		{
			str[(strnlen_s(str, sizeof(str)) - 1) - i] = '_';
		}

		temp = str[i];
		str[i] = str[(strnlen_s(str, sizeof(str)) - 1) - i];
		str[(strnlen_s(str, sizeof(str)) - 1) - i] = temp;
	}

	printf_s("\n%s",str);
}

void catch_id()
{
	int found = 1;
	int list1[ARRAY_SIZE] = { 123,321,564,548,695,852,476,325,641,854 };
	int list2[ARRAY_SIZE] = { 259,321,564,236,201,700,476,217,641,655 };

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		found = 1;
		for (int j = 0; j < ARRAY_SIZE && found; j++)
		{
			if (list1[i] == list2[j])
			{
				printf_s("The problematic student is: %d\n", list1[i]);
				found = 0;
			}
		}
	}
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