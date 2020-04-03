
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
using namespace cv;
using namespace std;



int main()
{

	cv::Mat dstMat;
	cv::Mat srcMat = cv::imread("D:\\360downloads\\7.png", 1);

	float angle = -10.0, scale = 1;
	cv::Point2f center(srcMat.cols*0.5, srcMat.rows*0.5);
	const cv::Mat affine_matrix = cv::getRotationMatrix2D(center, angle, scale);
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());

	imshow("原", srcMat);
	imshow("换", dstMat);


	// 等待用户按任意按键退出程序
	waitKey(0);

	return 0;
}
