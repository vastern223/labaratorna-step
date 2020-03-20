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
		cout << endl << "����i�� ������i� � �������" << endl;
		cout << FILL_IN << "-��������� ����� ����������� �������" << endl;
		cout << NOTICE << "-������� ����� �� �����" << endl;
		cout << FIND << "-������ ������� � ����� � ������� �� ����� ���� ������" << endl;
		cout << SORT << "-³���������� ����� " << endl;
		cout << AVERAGE_VALUE << "-��������� ������ �������� �������� ������" << endl;
		cout << ABBREVIATION << "-������ ������� ��������, �� ����� 5-��" << endl;
		cout << MOVEMENT << "-�������� �������� ������." << endl;
		cout << EXIT << "-�����." << endl;
		cin >> choice;
		CLEAR
		system("cls");
		switch (choice)
		{
		case FILL_IN:
		{

			int from = 0;
			int to = 0;
			cout << "������ �i������ �����\n";
			cout << "�i�:";
			cin >> to;
			cout << "��:";
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
		cout << "����i�� ������:";
		cin >> sumbol;
		cout << "�� ����� �������� " << sumbol << endl;
		for (int i = 0; i < SIZE; ++i)
		{
			if (sumbol == arr[i])
			{

				cout << "i����� ������� - " << i << endl;
				zmin = true;
			}

		}
		if (zmin == false)
		{
			cout << "������� ����������" << endl;
		}
		PAUSE
		CLEAR
		break;
		}
		case SORT:
		{
			int choice_side = 0;
			int temp = 0;
			cout << " �����i�� ������� ���������� " << endl;
			cout << LEFT << "-�� ���������\n";
			cout << RIGHT << "-�� ��������\n";
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
				cout << "\n�������  -" << counter << endl;
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
			cout << "\n������� ����� -" << counter;
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
		cout << "������ ������� ������ = " << sum / j;
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
		cout << "����� ������� 5 - " << sum5;
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
			cout << "���� �������� :" << endl;
			cout << LEFT << "-� �i��" << endl;
			cout << RIGHT << "-� �����" << endl;
			cin >> have;
			cout << "����i���� �������� :";
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
