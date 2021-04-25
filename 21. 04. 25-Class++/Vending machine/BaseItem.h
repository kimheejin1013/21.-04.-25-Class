#pragma once

class BaseItem
{
public:
	// 생성자도, 소멸자도 함수!
	// BaseItem = BaseItem;
	// BaseItem = BaseItem();
	// BaseItem = BaseItem(name, price);	선택적으로 생성자 호출
	// 조심! 생성자가 존재는 해야 함
	// 내가 안 만들어도 컴파일러가 암묵적으로 기본 생성자를 만든다
	BaseItem();
	BaseItem(std::string name, int price);
	~BaseItem();

protected:
	// 문자열
	std::string m_Name;
	int m_Price;

public:
	bool isSell;

public:
	std::string GetName() { return m_Name; }
	int GetPrice() { return m_Price; }

	

};

