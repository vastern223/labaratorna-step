#include "Header.h"

void Fill_in_an_array_with_random_numbers(int *arr)
{
	int from = 0;
	int to = 0;
	cout << "������ �i������ �����\n";
	cout << "�i�:";
	cin >> to;
	cout << "��:";
	cin >> from;
	for (int i = 0; i < SIZ; i++)
	{
		arr[i] = rand() % (from + 1 - to) + (to);
	}
	PAUSE
		CLEAR
}

void Display_the_array(int *arr)
{
	for (int i = 0; i < SIZ; i++)
	{
		cout << arr[i] << " ";


	}
	PAUSE
		CLEAR
}

void Find_an_element_in_an_array_display_its_index(int *arr)
{
	int sumbol = 0;
	bool zmin = false;
	int i = 0;
	cout << "����i�� ������:";
	cin >> sumbol;
	cout << "�� ����� �������� " << sumbol << endl;
	for (int i = 0; i < SIZ; ++i)
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
}

void Sort_the_array(int *arr)
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
	for (int i = 0; i < SIZ - 1; i++)
	{
		int min = arr[i];
		int ind = i;
		for (int j = i + 1; j < SIZ; j++)
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
			for (int k = 0; k < SIZ; k++)
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
	{   int counter = 0;
	for (int i = 0; i < SIZ - 1; i++)
	{
		int max = arr[i];
		int ind = i;
		for (int j = i + 1; j < SIZ; j++)
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
			for (int k = 0; k < SIZ; k++)
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


}


void Determine_the_average_value_of_the_array_elements(int *arr)
{
	int sum = 0;
	int j = 0;
	for (int i = 0; i < SIZ; i++)
	{
		sum += arr[i];
		j = i;
	}
	cout << "������ ������� ������ = " << sum / j;
	PAUSE
	CLEAR
}

void Find_the_number_of_elements_that_are_multiples_of_5(int *arr)
{
	int sum5 = 0;
	for (int i = 0; i < SIZ; i++)
	{
		if (arr[i] % 5 == 0)
		{
			++sum5;
		}
	}
	cout << "����� ������� 5 - " << sum5;
	PAUSE
    CLEAR
}

void Move_the_array_elements(int *arr)
{   
	   
			int num = 0;
			int cof = 0;
			int have = 0;
			int arr1[SIZ];
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
				for (int i = 0; i < SIZ; ++i)
				{
					if (i - num >= 0)
					{
						cof = arr[i];
						arr1[i - num] = cof;
					}
					else {
						cof = arr[i];

						arr1[i + SIZ - num] = cof;
					}

				}
				for (int i = 0; i < SIZ; ++i)
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
				for (int i = 0; i < SIZ; ++i)
				{
					if (i + num < SIZ)
					{
						cof = arr[i];
						arr1[i + num] = cof;
					}
					else {
						cof = arr[i];

						arr1[i - SIZ + num] = cof;
					}

				}
				for (int i = 0; i < SIZ; ++i)
				{
					arr[i] = arr1[i];
					cout << arr[i] << " ";
				}
				PAUSE
					CLEAR
					break;
			}
			}
		
		

}


