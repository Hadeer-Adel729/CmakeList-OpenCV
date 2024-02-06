#include <opencv2/opencv.hpp>
#include <iostream>
#pragma ide diagnostic ignored "EndlessLoop"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/utility.hpp>

int main() {
    // Read the input image
    cv::Mat InputImage = cv::imread("C:\\tools\\input-image.jpg");

    // Check if the image is successfully loaded
    if (InputImage.empty()) {
        std::cerr << "Error: Unable to load the image." << std::endl;
        return -1;
    }
    // Convert the image to grayscale
    cv::Mat grayscaleImage;
    cv::cvtColor(InputImage, grayscaleImage, cv::COLOR_BGR2GRAY);

    // Save the grayscale image
    cv::imwrite("C:\\tools\\output-image.jpg", grayscaleImage);

    std::cout << "Image converted to grayscale successfully." << std::endl;

    return 0;
}
