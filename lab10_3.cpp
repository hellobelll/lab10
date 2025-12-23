#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    double sum = 0,sum2=0,mean,sd;
    string line;
    ifstream source("score.txt");
    while(getline(source, line)){
        //cout << line << "\n";
        sum += atof(line.c_str());
        sum2 += pow(atof(line.c_str()),2);
        count++;
    }
    mean = sum / count;
    sd = sqrt((sum2/count)-(mean*mean));
    source.close();
    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd << "\n";
}