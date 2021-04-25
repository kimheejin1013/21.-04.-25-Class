#pragma once
#include "CharacInfo.h"

#include "Coke.h"
#include "Sida.h"

// 선언, 정의 만들기
// ctrl + . (드래그하면 여러개 한번에 가능!)
class GameRoot
{
public:
	GameRoot();
	~GameRoot();

private:
	CharacInfo* pCharacter;
	
	Coke m_Cokes[10]; //음료수 10개 씩
	Sida m_Sidas[10];

public:
	void Update();
	// FixedUpdate
	// LateUpdate
	void LateUpdate(int input);

	void PrintCharacterInfo();
};

