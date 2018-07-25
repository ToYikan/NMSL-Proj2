//
// Created by 杭咨存 on 2018/7/25.
//

#include "CharSegment.h"


int CharSegment::getColSum(Mat& bimg, int col)
{
    int height = bimg.rows;
    int sum = 0;
    for (int i = 1; i < height; i++)
    {
        sum += bimg.at<uchar>(i, col);
    }
//    cout << sum << endl;
    return sum;
}

vector<int> CharSegment::cutLeft(Mat& src, int Tsum, int left, int right)//左右切割
{

//    cout << left << endl;
    int i;
    for (i=left; i < src.cols; i++)
    {
        int colValue = getColSum(src, i);
        if (colValue > Tsum)
        {
            left = i;
            right = i;
            break;
        }
    }

    vector<int> r;
    for (; i < src.cols; i++)
    {
        int colValue = getColSum(src, i);
        if (colValue < Tsum)
        {
            right = i;
//            cout << right - left << endl;
            if ((right - left) < (src.cols/10)){
                continue;
            }else{
                break;
            }
        }
    }

    r.push_back(left);
    r.push_back(right);
    return r;

}

vector<vector<int>> CharSegment::process(Mat& inimg)
{
//    Mat gimg,histimg;
//    cvtColor(inimg, gimg, CV_BGR2GRAY);
////    equalizeHist(gimg,histimg);
//    //imshow("histimg", histimg);
//    threshold(gimg, gimg, 100, 255, CV_THRESH_BINARY);
//    imshow("gimg", gimg);
//    waitKey(0);

    int psum=0;
    for (int i = 0; i < inimg.cols; i++)
    {
        psum+=getColSum(inimg, i);
    }
    cout <<"psum/col:"<< psum/inimg.cols << endl;
    int Tsum = (int)(0.4 * (psum / inimg.cols));

    vector<vector<int>> result;
    int left = 0;
    for(int i = 0; i < 7; i++){
//        cout << left << endl;
        vector<int> r = cutLeft(inimg, Tsum, left, left);
        if(r.at(0) == -1){
            left = r.at(1) + 1;
            i--;
            continue;
        }
        cout << r.at(0) << " " << r.at(1) << endl;
        result.push_back(r);
        left = r.at(1) + 1;
    }

    return result;
}