#include <iostream>
#include "opencv2/opencv.hpp"
#include "PlateDetection.h"
#include "PlateRecognition.h"
#include "CharSegment.h"
#include "CharRecognition.h"
using namespace std;
using namespace cv;

#define PICNUM 41

int main()
{
//    CharRecognition::ANN_Train();
//    CharRecognition::ANN_Train_CH();
//    CharRecognition::ANN_Train_SP();

    int failCount = 0;

    for(int i = 1; i <= PICNUM; i++) {
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

        string plate = "";
        double rate = 0;

        for(int j = 0; j < 7; ++j){
            namedWindow("Src" + to_string(j), WINDOW_AUTOSIZE);
            moveWindow("Src" + to_string(j), 500 + j * 25, 200);
            imshow("Src" + to_string(j), chars.at(j));
            if(j == 0){

                vector<string> r = CharRecognition::process_ch(chars.at(j));
                plate += r.at(0);
                rate += stod(r.at(1)) / 7;

            }else if(j == 1){

                vector<string> r = CharRecognition::process_sp(chars.at(j));
                plate += r.at(0);
                rate += stod(r.at(1)) / 7;

            }else{

                vector<string> r = CharRecognition::process(chars.at(j));
                plate += r.at(0);
                rate += stod(r.at(1)) / 7;
            }

//            imwrite("/Users/Haibara/Desktop/r/" + to_string(i * 7 + j) + ".png", chars.at(j));
        }

        cout << "Plate:  " << plate << endl;
        cout << "Probability:  " << rate << "%" << endl;

        if(rate < 90){
            failCount++;
        }

//        waitKey(0);

    }


    cout << endl <<  "Total accuracy:  " << (double)(PICNUM - failCount) * 100 / PICNUM << "%" << endl;

    return 0;
}