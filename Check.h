#pragma once
#include <stdio.h>
#include <iostream>

class Check
{
	//メンバ変数
public:
	static const int nameLength_ = 20;
	static const int indexStorage = 5;
	char name_[indexStorage][nameLength_] = { { "noName" } };	//名前
	int age_;								//年齢

	//メンバ関数
public:
	//コンストラクタ
	Check();
	//デストラクタ
	~Check();
	//指定されたインデックスの配列の要素を返す
	int Get(int index);
	//指定されたインデックスの配列の要素を変更する
	void Set(int index, char val);

private:
	//指定されたインデックスが配列の範囲内かチェックする
	void checkIndex(int index);
	//指定された年齢が0～30の範囲内かチェックする
	void checkAge(int age);
};