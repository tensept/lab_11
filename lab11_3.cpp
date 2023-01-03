#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
#include <cstdlib>
using namespace std;

int main (){
    int count = 0;
    float sum = 0, sum_standard = 0, mean, num;
    string textline;
	ifstream source("score.txt");
    while (getline(source,textline))
    {
        num = atof(textline.c_str());
        sum += num;
        sum_standard += pow(num,2);
        count++;
    }
    mean = sum/count;
    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << sqrt((sum_standard/count)-(pow(mean,2)));

}