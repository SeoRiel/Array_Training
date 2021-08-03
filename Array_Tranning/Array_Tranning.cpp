#include <iostream>

int main()
{
	int student[5]{};
	const int STUDENT_COUNT = 5;
	int highPoint = 0;
	int lowPoint = 0;
	int swap = 0;
	int rank[5]{};


	std::cout << "5명의 학생들의 점수를 입력하세요. : ";

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
	std::cout << "1. 5명의 학생들의 점수를 입력받아 최고점과 최저점을 출력해 보세요." << std::endl;
	std::cout << "최고점 : " << highPoint << std::endl;
	std::cout << "최저점 : " << lowPoint << std::endl;

	std::cout << std::endl;
	std::cout << "2. 5명의 점수를 각각 등수를 출력해 보세요." << std::endl;
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
	std::cout << "3. 5명의 점수를 높은 순서부터 정렬보세요. (내림차순)" << std::endl;
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
