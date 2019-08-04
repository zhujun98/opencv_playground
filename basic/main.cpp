#include <cstdio>
#include <opencv2/opencv.hpp>


int main(int argc, char** argv )
{
  if (argc != 2)
  {
    printf("usage: basic <Image_Path>\n");
    return -1;
  }
  cv::Mat image;
  image = cv::imread( argv[1], 1 );
  if (!image.data)
  {
    printf("No image data \n");
    return -1;
  }
  namedWindow("Display Image", cv::WINDOW_AUTOSIZE );
  imshow("Display Image", image);
  cv::waitKey(0);
  return 0;
}
