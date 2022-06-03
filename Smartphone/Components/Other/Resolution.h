#include "../../../Lib.h"

struct Resolution
{
private:
	uint32_t w;
	uint32_t h;
	string type;
public:
	void SetInfo(uint32_t w, uint32_t h, string type)
	{
		this->w = w;
		this->h = h;
		this->type = type;
	}
	void GetInfo()
	{
		cout << "Resolution : " << w << "x" << h << " " << type << endl;
	}

};