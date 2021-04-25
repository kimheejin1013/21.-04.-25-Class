
#include <iostream>

int main()
{
	// if 문제
	// 1. int 형식의 4 인 value 변수를 선언한다
	// 2. int 형식의 12인 minus 변수를 선언한다
	// 3. 1번째와 2번째를 뺀 값을 int result 변수에 넣는다
	// 4. 만약 result가 음수이면 "Minus"라는 문자열을 출력
	//		아니면 "Plus"라는 문자열을 출력
	{
		int value = 4;
		int minus = 12;

		int result;

		result = value - minus;

		if (result < 0)
			std::cout << "Minus" << std::endl;
		else 
			std::cout << "Plus" << std::endl;
		std::cout << "=======================" << std::endl;

			
	}


	// 1. int 형식의 배열 10칸인 arrays 변수 선언
	// 2. arrays 배열에는 0부터 9까지의 숫자를 순차적으로 삽입
	// 3. for문을 이용하여 arrays 값을 출력하되, 배열의 마지막부터 출력
	// 4. 한 라인에 모두 출력할 것
	//	  ex) 9 8 7 6 5 ...
	{
		int arrays[10] = { 0, };

		for (int i = 0; i < 10; ++i)
			arrays[i] = i;

		for (int i = 9; i > 0; --i)
			std::cout << arrays[i] << " ";

		std::cout << std::endl;
		std::cout << "=======================" << std::endl;

	}

	// int value 안에 임의의 숫자를 받는다(cin)
	// 받은 숫자에 10을 곱해 출력
	{
		int value;

		std::cin >> value;
		std::cout << value * 10 << std::endl;

	}



	return 0;
}

