#pragma once
#include <stdio.h>
#include <iostream>

class Check
{
	//メンバ変数
public:
	char _name[20];
	int _age;		//年齢

	//メンバ関数
public:
	//コンストラクタ
	Check(int index,const char* str);
	//デストラクタ
	~Check();
	//指定されたインデックスの配列の要素を返す
	char Get(int index);
	//指定されたインデックスの配列の要素を変更する
	void Set(int index, char val);

private:
	//指定されたインデックスが配列の範囲内かチェックする
	void checkIndex(int index);
	//指定された年齢が0～30の範囲内かチェックする
	void checkAge(int age);
};