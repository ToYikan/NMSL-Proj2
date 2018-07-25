//
// Created by 杭咨存 on 2018/7/25.
//

#ifndef SRC_SERVER_PLATERECOGONIZATION_H
#define SRC_SERVER_PLATERECOGONIZATION_H


#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

class PlateRecogonization {

public:
    static Mat process(Mat, Rect);
};


#endif //SRC_SERVER_PLATERECOGONIZATION_H
