#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	cout << CV_VERSION << endl;
	Mat image = imread("./images/0(1).jpg");

	if(image.empty())
	{
    	    fprintf(stderr, "Can not load image\n");
	    return -1;
	}
	
	cout << "Width=" << image.cols << ", Height=" << image.rows << endl;	
	imshow("image", image);	
	waitKey(0);

	return 0;	
}
