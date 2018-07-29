#include <iostream>
#include "opencv2/opencv.hpp"
#include "PlateDetection.h"
#include "PlateRecognition.h"
#include "CharSegment.h"
#include "CharRecognition.h"
using namespace std;
using namespace cv;

int main()
{
    for(int i = 1; i <= 41; i++) {
        string filename = "/Users/Haibara/Desktop/carPicture/P" + to_string(i) + ".jpg";//打开的文件
        Mat srcImage = imread(filename, 1);

        Mat midImage;

        midImage = PlateDetection::process(srcImage);
//
        Mat result = PlateRecognition::process(midImage);



//
//        namedWindow("Result", CV_WINDOW_NORMAL);
//
//        resizeWindow("Result", result.size().width, result.size().height + 22);

        vector<Mat> chars = CharSegment::process(midImage, result);

        for(int j = 0; j < 7; ++j){
            namedWindow("Src" + to_string(j), WINDOW_AUTOSIZE);
            moveWindow("Src" + to_string(j), 500 + j * 25, 200);
            imshow("Src" + to_string(j), chars.at(j));

        }
        waitKey(0);


    }

    return 0;
}