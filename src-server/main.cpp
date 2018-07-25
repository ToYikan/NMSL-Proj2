#include <iostream>
#include "opencv2/opencv.hpp"
#include "PlateDetection.h"
#include "PlateRecogonization.h"
#include "CharSegment.h"
using namespace std;
using namespace cv;

int main()
{
    for(int i = 1; i <= 41; i++) {
        string filename = "/Users/Haibara/Desktop/carPicture/P" + to_string(i) + ".jpg";//打开的文件
        Mat srcImage = imread(filename, 1);


        Rect r = PlateDetection::process(srcImage);

        Mat result = PlateRecogonization::process(srcImage, r);

//        rectangle(result, r, Scalar(0,0,255), 2);


        namedWindow("Result", CV_WINDOW_NORMAL);

        resizeWindow("Result", result.size().width, result.size().height + 22);

        vector<vector<int>> char_width = CharSegment::process(result);

//        for(vector<int> i : char_width){
//            for(int j : i){
//                cout << j << " ";
//            }
//            cout << endl;
//        }

        for(int i = 0; i < 7; i++){
            imshow("Result", result.colRange(char_width.at(i).at(0),
                                             char_width.at(i).at(1)));
            waitKey(0);
        }
    }

    return 0;
}