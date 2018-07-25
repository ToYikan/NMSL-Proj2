//
// Created by 杭咨存 on 2018/7/25.
//

#include "PlateRecogonization.h"


Mat PlateRecogonization::process(Mat srcImage, Rect rect){

    Mat result = srcImage;
    result = result(rect);

    cvtColor(result, result, COLOR_BGR2GRAY);

    threshold(result, result, 120, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);

    Mat element_x = getStructuringElement(MORPH_RECT,
                                          Size(2, 1));

    Mat element_y = getStructuringElement(MORPH_RECT,
                                          Size(1, 2));

    erode(result, result, element_y, Point(-1, -1), 1);

    dilate(result, result, element_y, Point(-1, -1), 1);

    erode(result, result, element_x, Point(-1, -1), 1);

    dilate(result, result, element_x, Point(-1, -1), 1);



    return result;
}