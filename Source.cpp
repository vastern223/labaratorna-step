#include"iostream"
#include"ctime"
#include"windows.h"

using namespace std;

#define CLEAR system("cls");
#define PAUSE system("pause");
#define SLEEP Sleep(1000);
int main()
{
	setlocale(LC_ALL, "ukr");
	srand(time(NULL));
	enum MENU {
		FILL_IN = 1,
		NOTICE = 2,
		FIND = 3,
		SORT = 4,
		AVERAGE_VALUE = 5,
		ABBREVIATION = 6,
		MOVEMENT = 7,
		EXIT = 0
	};
	enum SIDE { LEFT = 1, RIGHT = 2 };
	int choice = 0;
	const int SIZE = 10;
	int arr[SIZE] = { 0 };
	int exit = true;
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
		system("cls");
		switch (choice)
		{
		case FILL_IN:
		{

			int from = 0;
			int to = 0;
			cout << "введіть дiапазон чисел\n";
			cout << "вiд:";
			cin >> to;
			cout << "до:";
			cin >> from;
			for (int i = 0; i < SIZE; i++)
			{
				arr[i] = rand() % (from + 1 - to) + (to);
			}
			PAUSE
			CLEAR
			break;
		}
		case NOTICE:
		{
			for (int i = 0; i < SIZE; i++)
			{
				cout << arr[i] << " ";


			}
			PAUSE
			CLEAR
			break;
		}
		case FIND:
		{ int sumbol = 0;
		bool zmin = false;
		int i = 0;
		cout << "введiть символ:";
		cin >> sumbol;
		cout << "ви ввели значення " << sumbol << endl;
		for (int i = 0; i < SIZE; ++i)
		{
			if (sumbol == arr[i])
			{

				cout << "iндекс символа - " << i << endl;
				zmin = true;
			}

		}
		if (zmin == false)
		{
			cout << "символа незнайдено" << endl;
		}
		PAUSE
		CLEAR
		break;
		}
		case SORT:
		{
			int choice_side = 0;
			int temp = 0;
			cout << " виберiть порядок сортування " << endl;
			cout << LEFT << "-по зростанню\n";
			cout << RIGHT << "-по спаданню\n";
			cin >> choice_side;
			switch (choice_side)
			{

			case LEFT:
			{    int counter = 0;
				for (int i = 0; i < SIZE - 1; i++)
				{
					int min = arr[i];
					int ind = i;
					for (int j = i + 1; j < SIZE; j++)
					{
						if (arr[j] < min)
						{
							min = arr[j];
							ind = j;

						}
						
					}
					temp = arr[i];
					arr[i] = arr[ind];
					arr[ind] = temp;
					counter++;
					CLEAR
					for (int k = 0; k < SIZE; k++)
					{
						cout << arr[k] << " ";
					}
					SLEEP
					CLEAR
				}
				cout << "\nкількість  -" << counter << endl;
				PAUSE
				CLEAR
				break;
			}
			case RIGHT:
			{int counter = 0;
				for (int i = 0; i < SIZE - 1; i++)
			{
				int max = arr[i];
				int ind = i;
				for (int j = i + 1; j < SIZE; j++)
				{
					if (arr[j] > max)
					{
						max = arr[j];
						ind = j;
						

					}
				}
				temp = arr[i];
				arr[i] = arr[ind];
				arr[ind] = temp;
				counter++;
				CLEAR
				for (int k = 0; k < SIZE; k++)
				{
					cout << arr[k] << " ";
				}
				SLEEP
					CLEAR
			}
			cout << "\nкількість кроків -" << counter;
			PAUSE
			CLEAR
			break;
			}
			}
			break;
		}
		case AVERAGE_VALUE:
		{ int sum = 0;
		int j = 0;
		for (int i = 0; i < SIZE; i++)
		{
			sum += arr[i];
			j = i;
		}
		cout << "середнє значеня масиву = " << sum / j;
		PAUSE
		CLEAR
		break;
		}
		case ABBREVIATION:
		{int sum5 = 0;
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] % 5 == 0)
			{
				++sum5;
			}
		}
		cout << "чисел кратних 5 - " << sum5;
		PAUSE
		CLEAR
		break;
		}
		case MOVEMENT:
		{
			int num = 0;
			int cof = 0;
			int have = 0;
			int arr1[SIZE];
			cout << "куди здвинути :" << endl;
			cout << LEFT << "-В ЛiВО" << endl;
			cout << RIGHT << "-В ПРАВО" << endl;
			cin >> have;
			cout << "наскiльки здвинути :";
			cin >> num;

			switch (have)
			{
			case LEFT:
			{
				for (int i = 0; i < SIZE; ++i)
				{
					if (i - num >= 0)
					{
						cof = arr[i];
						arr1[i - num] = cof;
					}
					else {
						cof = arr[i];

						arr1[i + SIZE - num] = cof;
					}

				}
				for (int i = 0; i < SIZE; ++i)
				{
					arr[i] = arr1[i];
					cout << arr[i] << " ";
				}
				PAUSE
				CLEAR
				break;
			}
			case RIGHT:
			{
				for (int i = 0; i < SIZE; ++i)
				{
					if (i + num < SIZE)
					{
						cof = arr[i];
						arr1[i + num] = cof;
					}
					else {
						cof = arr[i];

						arr1[i - SIZE + num] = cof;
					}

				}
				for (int i = 0; i < SIZE; ++i)
				{
					arr[i] = arr1[i];
					cout << arr[i] << " ";
				}
				PAUSE
				CLEAR
				break;
			}
			}
			break;
		}

		case EXIT:
		{
			exit = false;
		}



		}
	} while (exit == true);

	system("pause");
	return 0;
}
