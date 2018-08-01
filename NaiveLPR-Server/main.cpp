#include "TCPConnection.h"
#include <QApplication>



#include "processor.h"

#define PICNUM 41

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SQLTool::connection();
    TCPConnection w;

//    int failCount = 0;
//    for(int i = 1; i <= PICNUM; i++) {
//        string filename = "/Users/Haibara/Desktop/carPicture/P" + to_string(i) + ".jpg";//打开的文件
//        Mat srcImage = imread(filename, 1);
//        Mat midImage;
//        midImage = PlateDetection::process(srcImage);
//        Mat result = PlateRecognition::process(midImage);
//        vector<Mat> chars = CharSegment::process(midImage, result);
//        string plate = "";
//        double rate = 0;

//        for(int j = 0; j < 7; ++j){
//            if(j == 0){
//                vector<string> r = CharRecognition::process_ch(chars.at(j));
//                plate += r.at(0);
//                rate += stod(r.at(1)) / 7;
//            }else if(j == 1){
//                vector<string> r = CharRecognition::process_sp(chars.at(j));
//                plate += r.at(0);
//                rate += stod(r.at(1)) / 7;
//            }else{
//                vector<string> r = CharRecognition::process(chars.at(j));
//                plate += r.at(0);
//                rate += stod(r.at(1)) / 7;
//            }
//        }
//        cout << "Plate:  " << plate << endl;
//        cout << "Probability:  " << rate << "%" << endl;
//        if(rate < 90){
//            failCount++;
//        }
//    }
//    cout << endl <<  "Total accuracy:  " << (double)(PICNUM - failCount) * 100 / PICNUM << "%" << endl;

    return a.exec();
}
