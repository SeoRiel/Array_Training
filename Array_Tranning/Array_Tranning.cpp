#include <iostream>

int main()
{
	int student[5]{};
	const int STUDENT_COUNT = 5;
	int highPoint = 0;
	int lowPoint = 0;
	int swap = 0;
	int rank[5]{};


	std::cout << "5���� �л����� ������ �Է��ϼ���. : ";

	for (int next = 0; next < STUDENT_COUNT; ++next)
	{
		std::cin >> student[next];

		highPoint = student[next];

		if (highPoint <= student[next + 1])
		{
			highPoint = student[next + 1];
		}

		if (lowPoint <= student[next + 1])
		{
			lowPoint = student[next];
		}

	}
	std::cout << std::endl;
	std::cout << "1. 5���� �л����� ������ �Է¹޾� �ְ����� �������� ����� ������." << std::endl;
	std::cout << "�ְ��� : " << highPoint << std::endl;
	std::cout << "������ : " << lowPoint << std::endl;

	std::cout << std::endl;
	std::cout << "2. 5���� ������ ���� ����� ����� ������." << std::endl;
	for (int next = 0; next < STUDENT_COUNT; ++next)
	{
		std::cout << student[next] << " ";
	}

	std::cout << std::endl;

	for (int next = 0; next < STUDENT_COUNT; ++next)
	{
		for (int count = 0; count < STUDENT_COUNT; ++count)
		{
			if (student[next] <= student[count])
			{
				rank[next] += 1;
			}
		}
	}

	for (int list = 0; list < STUDENT_COUNT; ++list)
	{
		std::cout << " " << rank[list] << " ";
	}

	std::cout << std::endl;
	std::cout << "3. 5���� ������ ���� �������� ���ĺ�����. (��������)" << std::endl;
	for (int next = 0; next < STUDENT_COUNT; ++next)
	{
		for (int count = 0; count < STUDENT_COUNT; ++count)
		{
			if (student[next] >= student[count])
			{
				swap = student[next];
				student[next] = student[count];
				student[count] = swap;
			}
		}
	}

	for (int next = 0; next < STUDENT_COUNT; ++next)
	{
		std::cout << student[next] << " ";
	}

	return 0;
}
