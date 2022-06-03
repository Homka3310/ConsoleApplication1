#include "../../../Lib.h"

struct Battery
{
private:
	uint32_t capacity;
	uint32_t charging_power;
public:
	void SetInfo(uint32_t capacity, uint32_t charging_power)
	{
		this->capacity = capacity;
		this->charging_power = charging_power;
	}
	void GetInfo()
	{
		cout << "Capacity : " << capacity << endl;
		cout << "Charging power : " << charging_power << endl;
	}


};
