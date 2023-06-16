#pragma once

class Check
{
	//メンバ変数
public:
	char name[20];	//名前
	int age;		//年齢

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