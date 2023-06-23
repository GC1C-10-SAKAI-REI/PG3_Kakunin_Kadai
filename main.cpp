#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//自己参照構造体
typedef struct cell
{
	char str[20];		//文字列
	int price;			//値段
	struct cell* prev;	//前のセル
	struct cell* next;	//次のセル
}CELL;

//セルを追加する関数
void Create(CELL* currentCell, const char *buf, const int strSize,const int price);
//セルの一覧表示
void Index(CELL* endCell);
//任意の位置のアドレスまで辿る関数
CELL* GetInsertListAddress(CELL* endcell, int iterator);

int main()
{
	const int strSize = 20;	//文字数
	char str[strSize];		//寿司の名前
	int price;				// 〃 の値段
	int iterator;			//挿入する箇所
	CELL* insertCell;		//

	//先頭に内容が空のセルを宣言(先頭であることを明示する為)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	while (true)
	{
		printf("何番目に好きなお寿司ですか？\n");
		scanf_s("%d", &iterator);

		printf("好きなお寿司を入力してください\n");
		scanf_s("%s", &str,strSize);

		printf("1貫の値段を入力して下さい\n");
		scanf_s("%d", &price);

		//挿入したいセルのアドレスを取得
		insertCell = GetInsertListAddress(&head, iterator);
		//セルの追加
		Create(insertCell, str, strSize,price);
		//リスト一覧の表示
		Index(&head);
	}

	return 0;
}

void Create(CELL* currentCell, const char *buf, const int strSize,const int price)
{
	//Step1：新規にセルを追加
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));	//新規セル用のメモリ確保
	
	strcpy_s(newCell->str, strSize, buf);	//値を代入
	newCell->price = price;	
	newCell->prev = currentCell;			//新しいセルの前は現在の最後尾
	newCell->next = currentCell->next;		//新しいセルの次は

	//Step2：指定したセルの次のセルの「前のセルのポインタ」に新規セルのアドレスを代入
	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	//Step3：指定したセルの「次のセルのポインタ」に新規セルのアドレスを代入
	currentCell->next = newCell;
}

void Index(CELL* endCell)
{
	printf("|rank|前のアドレス|寿司ネタ|値段| アドレス |次のアドレス|\n");
	//ランク
	int rank = 1;
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("|%4d|", rank);
		printf("%p|", endCell->prev);
		printf("%5s|", endCell->str);//5桁まで右揃え
		printf("%d|", endCell->price);
		printf("%p|", endCell);
		printf("%p|\n", endCell->next);
		rank++;
	}
}

CELL* GetInsertListAddress(CELL* endcell, int iterator)
{
	for (int i = 0; i < iterator; i++)
	{
		if (endcell->next)
		{
			endcell = endcell->next;
		}
		else
		{
			break;
		}
	}
	return endcell;
}
