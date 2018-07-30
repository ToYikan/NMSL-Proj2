//
// Created by 杭咨存 on 2018/7/28.
//

#ifndef SRC_SERVER_CHARRECOGONIZATION_H
#define SRC_SERVER_CHARRECOGONIZATION_H

#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgcodecs/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/ml/ml.hpp"


using namespace std;
using namespace cv;
using namespace ml;

#define DIM ((2 * MSIZE) + (SSIZE * SSIZE))
#define MSIZE 20
#define SSIZE 5
#define CLASS_NUM1 34
#define CLASS_NUM2 30
#define TOTALNUM1 1946
#define TOTALNUM2 2043

class CharRecognition {

public:
    static vector<string> process(Mat);

    static vector<string> process_ch(Mat);

    static void ANN_Train();

    static void ANN_Train_CH();

private:
    static float calcMatValue(const Mat &image);
    static void calcGradientFeat(const Mat& imgSrc, vector<float>& feat);
    static void calcGrayFeat(const Mat& imgSrc, vector<float>& feat);
    static Mat features(Mat in, int sizeData);
    static Mat ProjectHistogram(Mat img, int t);

};

#endif //SRC_SERVER_CHARRECOGONIZATION_H
