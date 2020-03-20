#pragma once
#include"iostream"
#include"ctime"
#include"windows.h"

#define CLEAR system("cls");
#define PAUSE system("pause");
#define SLEEP Sleep(1000);
using namespace std;

enum MENU {
	FILL_IN = 1,
	NOTICE = 2,
	FIND = 3,
	SORT = 4,
	AVERAGE_VALUE = 5,
	ABBREVIATION = 6,
	MOVEMENT = 7,
	EXIT = 0 ,
   

};

const int SIZ = 10;

enum SIDE { LEFT = 1, RIGHT = 2 };

void Fill_in_an_array_with_random_numbers(int *arr);
void Display_the_array(int *arr);
void Find_an_element_in_an_array_display_its_index(int *arr);
void Sort_the_array(int *arr);
void Determine_the_average_value_of_the_array_elements(int *arr);
void Find_the_number_of_elements_that_are_multiples_of_5(int *arr);
void Move_the_array_elements( int *arr);
