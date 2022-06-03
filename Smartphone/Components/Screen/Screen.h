#include "../Other/Resolution.h"

struct Screen //экран
{
	Resolution resolution;	//разрешение экрана 
	string type;		//тип
	string protection;	//защита
	float refresh_rate; //частота обновления
	float d;			//диагональ
};