#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void weightedMovingAverage(vector<string> &vecMonth, vector<int> &vecTemp, ofstream &myfile) {
  myfile << endl
         << endl;
  for(int i = 0; i < vecTemp.size() - 2; i++) {
    double temp = vecTemp[i] + (2 * vecTemp[i + 1]) + (3 * vecTemp[i + 2]);
    temp /= 6;
    
    myfile << "Weighted moving average for " << vecMonth[i] << " is " << temp << endl;
  }
}

double average(vector<int> vecTemp) {
  double sum = 0;
  
  for(auto x : vecTemp) {
    sum += x;
  }
  
  return sum / vecTemp.size();
}

int main() {
  ifstream input("weather.csv.txt");

  vector<int> vecTemp;
  vector<string> vecMonth;
  string month, temperature;

  getline(input, month);

  while(input.good()) {
    //save the input line to line
    getline(input, month, ',');
    getline(input, temperature, '\n');
    
    vecMonth.push_back(month);
    vecTemp.push_back(stoi(temperature)); //stoi() string to integer
    
  }
  
  ofstream myfile;
  myfile.open("output.txt");
  myfile << "raw data is: " << endl;
  
  for(int i = 0; i < vecMonth.size(); i++) {
    myfile << vecMonth[i] << " ";
    myfile << vecTemp[i] << endl;
  }
  
  myfile << endl
         << "average is " << average(vecTemp) << endl
         << endl;
  
  double moveAverage;
  for(int i = 2; i < vecTemp.size(); i++) {
    moveAverage = (vecTemp[i - 2] + vecTemp[i - 1] + vecTemp[i]) / 3;
    myfile << "Moving average for " << vecMonth[i] << " is " << moveAverage << endl;
  }

  weightedMovingAverage(vecMonth, vecTemp, myfile);
}