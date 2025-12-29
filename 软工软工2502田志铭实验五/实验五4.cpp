#include<iostream>
using namespace std;
class Student {
private:
	int id[5];
	int score[5];
	int maxid;
public:
	void data(Student*student){
		for (int i = 0; i < 5; i++) {
			cin >> id[i] >> score[i];
		}
	}
	void max(Student* student) {
		maxid = 0;
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				score[i] < score[j] ? maxid = j : maxid = i;
			}
		}
	}
	void display(Student* student) {
		cout << "The highest score is " << score[maxid] << ", the student ID is " << id[maxid] << endl;
	}
};
int main() {
	Student student;
	student.data(&student);
	student.max(&student);
	student.display(&student);
}