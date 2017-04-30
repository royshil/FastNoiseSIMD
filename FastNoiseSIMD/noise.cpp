#include "FastNoiseSIMD.h"

#include <opencv2/opencv.hpp>

int main() {

FastNoiseSIMD* myNoise = FastNoiseSIMD::NewFastNoiseSIMD();
myNoise->SetNoiseType(FastNoiseSIMD::Perlin);
myNoise->SetFrequency(0.03f);

cv::Mat noise(256, 256, CV_32FC1);
myNoise->FillNoiseSet((float*)noise.data, 0, 0, 0, 256, 256, 1);

cv::imshow("noise", (noise + 1.0) / 2.0);
cv::waitKey(0);

}
