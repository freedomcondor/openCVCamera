#include<stdio.h>
#include<opencv2/opencv.hpp>

using namespace cv;

VideoCapture video1;
Mat im1_1;

int main()
{
	video1.open(0);
	//video1.set(CV_CAP_PROP_FRAME_WIDTH,320);
    //video1.set(CV_CAP_PROP_FRAME_HEIGHT,240);
	if (video1.isOpened())
		printf("video1 open successful\n");
	else
	{
		printf("video1 open failed\n");
		return -1;
	}

	video1 >> im1_1;

	namedWindow("im1_1",WINDOW_NORMAL);

	while (1)
	{
		video1 >> im1_1;
		imshow("im1_1",im1_1);
		if (waitKey(1) >= 0) break;
	}

	return 0;
}
