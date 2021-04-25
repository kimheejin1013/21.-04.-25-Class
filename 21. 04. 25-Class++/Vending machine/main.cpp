#include "stdafx.h"
#include "GameRoot.h"


#define EXIT_CODE	-1

int main()
{
	// new -> 해당 변수에 메모리 할당
	// 사용시 마지막에 delete
	GameRoot* pRoot = new GameRoot();
	
	// character.GetMoney();
	// 포인터 형식은 -> 이런 형식을 사용해야 함
	// 스택형 변수는 '.' , 포인터 변수는 '->'
	pRoot->Start();

	int input = 0;
	while (input != EXIT_CODE)
	{
		pRoot->Update();
		std::cin >> input;

		pRoot->LateUpdate(input);
	}



	delete pRoot;
	pRoot = nullptr;	// NULL, 0


	return 0;
}

