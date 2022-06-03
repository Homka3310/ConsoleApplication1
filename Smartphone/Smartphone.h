#include "Components/Battery/Battery.h"
#include "Components/Camera/Camera.h"
#include "Components/Connections/Connections.h"
#include "Components/Dimensions/Dimensions.h"
#include "Components/Memory/Memory.h"
#include "Components/OS/OS.h"
#include "Components/Screen/Screen.h"
#include "Components/VideoEngine/VideoEngine.h"


struct Smartphone
{
private:
	string company;
	string model;
	string color;
	Camera camera;
	Connection connection;
	Battery battery;
	Dimensions dimensions;
	Memory memory;
	OS os;
	Screen screen;
	VideoEngine video_engine;
public:
	void SetInfo()
	{
		company = "Samsung";
		model = "A51";
		color = "Black";
		Resolution buf;
		buf.SetInfo(1920, 1080, "Full HD");
		Answer ans = Answer::Yes;
		camera.SetInfo("13+2+2 Мп", "16 Мп", buf, ans, "5х цифровой");
		battery.SetInfo(6000, 60);
	}
	void GetInfo()
	{

	}

	
};
