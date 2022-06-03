#include "../Other/Answer.h"
#include "../Other/Resolution.h"

struct Camera
{
	string main_camera;
	string front_camera;
	Resolution video_resolution;
	Answer has_flash;
	string zoom;

public:
	void SetInfo(string main_camera, string front_camera, Resolution video_resolution, Answer has_flash, string zoom)
	{
		this->main_camera = main_camera;
		this->front_camera = front_camera;
		this->video_resolution = video_resolution;
		this->has_flash = has_flash;
		this->zoom = zoom;
	}
	void GetInfo()
	{
		cout << "Main camera : " << main_camera << endl;
		cout << "Front camera : " << front_camera << endl;
		video_resolution.GetInfo();
		cout << "Flash : " << has_flash << endl;
		cout << "Zoom : " << zoom << endl;
	}
};
