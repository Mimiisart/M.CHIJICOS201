#include <iostream>
#include <fstream>
using namespace std;

int loadData(const char filename[], int ids[], int scores[], int maxSize) {
  ifstream file(filename);

  int lineNum = 1;
  int idx = 0;
  while (true) {
    string id;
    string score;
    if (!(getline(file, id, ',') >> score)) {
      break;
    };

    if (lineNum > 1) {
      ids[idx] = stoi(id);
      scores[idx] = stoi(score);
      idx++;
    }
    lineNum++;
  }
  return idx;
}

void printAll(int ids[], int scores[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "StudentID: " << ids[i] << " Score: " << scores[i] << endl;
  }
}

void computeStats(int scores[], int size, double &average, int &minScore,
                  int &maxScore) {
  double sum = 0;
  minScore = scores[0];
  maxScore = scores[0];

  for (int i = 0; i < size; i++) {
    int current = scores[i];
    sum += current;
    if (current < minScore) {
      minScore = current;
    }
    if (current > maxScore) {
      maxScore = current;
    }
  }
  average = sum / size;
}

void computeGradeDistribution(int scores[], int size, int &countA, int &countB,
                             int &countC, int &countD, int &countF) {
  for (int i = 0; i < size; i++) {
    int current = scores[i];
    if (current >= 70) {
      countA++;
    } else if (current >= 60) {
      countB++;
    } else if (current >= 50) {
      countC++;
    } else if (current >= 45) {
      countD++;
    } else {
      countF++;
    }
  }
}

int pickRandomPassingStudent(int ids[], int scores[], int size) {
  int passingStudents[size];
  int passingCount = 0;

  for (int i = 0; i < size; i++) {
    if (scores[i] >= 50) {
      passingStudents[passingCount++] = i;
    }
  }

  if (passingCount == 0) {
    return -1;
  }

  srand(time(0));
  int randomIndex = rand() % passingCount;
  return passingStudents[randomIndex];
}

void saveSummary(const char filename[], double average, int minScore, int maxScore, int countA, int countB, int countC, int countD, int countF) {
    ofstream file(filename);

    file << "Metric,Value" << endl;
    file << "Numbers of Students," << countA + countB + countC + countD + countF << endl;
    file << "Average Score," << average << endl;
    file << "Minimum Score," << minScore << endl;
    file << "Maximum Score," << maxScore << endl;
    file << "A Count," << countA << endl;
    file << "B Count," << countB << endl;
    file << "C Count," << countC << endl;
    file << "D Count," << countD << endl;
    file << "F Count," << countF << endl;

    file.close();
    cout << "summary.csv has been created" << endl;
}

int main() {

  int ids[100] = {};
  int scores[100] = {};
  int size = loadData("scores.csv", ids, scores, 100);
  cout << "Total Students: " << size << endl;
  printAll(ids, scores, size);

  double average;
  int minScore;
  int maxScore;
  computeStats(scores, size, average, minScore, maxScore);
  cout << "Average Score: " << average << endl;
  cout << "Minimum Score: " << minScore << endl;
  cout << "Maximum Score: " << maxScore << endl;

  int countA = 0;
  int countB = 0;
  int countC = 0;
  int countD = 0;
  int countF = 0;
  computeGradeDistribution(scores, size, countA, countB, countC, countD, countF);
  cout << "Number of A grades: " << countA << endl;
  cout << "Number of B grades: " << countB << endl;
  cout << "Number of C grades: " << countC << endl;
  cout << "Number of D grades: " << countD << endl;
  cout << "Number of F grades: " << countF << endl;

  int randomStudentIndex = pickRandomPassingStudent(ids, scores, size);
  cout << "Random Passing StudentID: " << ids[randomStudentIndex] << " Score: " << scores[randomStudentIndex] << endl;

  saveSummary("summary.csv", average, minScore, maxScore, countA, countB, countC, countD, countF);
}
