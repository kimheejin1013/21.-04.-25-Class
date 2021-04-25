#pragma once
#include "CharacInfo.h"

#include "Coke.h"
#include "Sida.h"

// ����, ���� �����
// ctrl + . (�巡���ϸ� ������ �ѹ��� ����!)
class GameRoot
{
public:
	GameRoot();
	~GameRoot();

private:
	CharacInfo* pCharacter;
	
	Coke m_Cokes[10]; //����� 10�� ��
	Sida m_Sidas[10];

public:
	void Update();
	// FixedUpdate
	// LateUpdate
	void LateUpdate(int input);

	void PrintCharacterInfo();
};

