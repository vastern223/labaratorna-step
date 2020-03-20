#include"iostream"
#include"ctime"
#include"windows.h"
#include "Header.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "ukr");
	
	int choice = 0;

	int arr[SIZ] = { 0 };

	do {
		cout << endl << "оберiть операцiю з масивом" << endl;
		cout << FILL_IN << "-Заповнити масив випадковими числами" << endl;
		cout << NOTICE << "-Вивести масив на екран" << endl;
		cout << FIND << "-Знайти елемент в масиві – вивести на екран його індекс" << endl;
		cout << SORT << "-Відсортувати масив " << endl;
		cout << AVERAGE_VALUE << "-Визначити середнє значення елементів масива" << endl;
		cout << ABBREVIATION << "-Знайти кількість елементів, що кратні 5-ти" << endl;
		cout << MOVEMENT << "-Здвинути елементи масива." << endl;
		cout << EXIT << "-Вихід." << endl;
		cin >> choice;
		CLEAR
		switch (choice)
		{
		case FILL_IN:
		{
		    Fill_in_an_array_with_random_numbers(arr);
			break;
		}
		case NOTICE:
		{
		     Display_the_array(arr);
			break;
		}
		case FIND:
		{ 
		    Find_an_element_in_an_array_display_its_index(arr);
		break;
		}
		case SORT:
		{
			Sort_the_array(arr);
			break;
		}
		case AVERAGE_VALUE:
		{ 
			 Determine_the_average_value_of_the_array_elements( arr);
		break;
		}
		case ABBREVIATION:
		{
			Find_the_number_of_elements_that_are_multiples_of_5(arr);
			break;
		}
		case MOVEMENT:
		{
			Move_the_array_elements(arr);
			break;
		}
	

		case EXIT:
		{
			exit(0);
		}



		}
	} while (choice =! EXIT);

	system("pause");
	return 0;
}
