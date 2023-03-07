#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, surname;
    double lab_grade, midterm_grade, final_grade, last_score;

    cout << "Enter student's name:";
    cin >> name;
    cout << "Enter student's surname:";
    cin >> surname;
    cout << "Enter lab grade (%25):";
    cin >> lab_grade;
    cout << "Enter midterm grade (%35):";
    cin >> midterm_grade;
    cout << "Enter final grade (%40):";
    cin >> final_grade;

    last_score = lab_grade /100 *25 + midterm_grade /100 *35 + final_grade /100 *40;
    //I cannot solve this bug sorry teacher It is always adding line third word below this text
    cout << "Your name is: " << name +" " + surname << endl;
    cout << "Lab score is: " << lab_grade << endl;
    cout << "Midterm grade is: " << midterm_grade << endl;
    cout << "Final grade is: " << final_grade << endl;
    cout << "Your last score is: " << last_score << endl;


    return 0;
}
