#include <iostream>
#include <cmath>

using namespace std;

struct Srecord
{
    double quiz1; // Worth 10 points
    double quiz2; // Worth 10 points (Quizzes are 25% of grade)
    double quizav; //average quiz score
    double midterm; // Worth 100 points (Midterm is worth 25% of grade)
    double exam; // Worth 100 points (Exam is worth 50% of grade)
};

void fungrade(Srecord *ptr); //Prototype

int main()
{
    double finalgrade;
    string lettergrade;

    //pointer setup
    Srecord *subject;
    Srecord myscore;

    subject = &myscore; //assigned the address of myscore to the pointer

    fungrade(&myscore);

    // Math for getting the final letter grade
    myscore.quizav = ((myscore.quiz1 + myscore.quiz2)/2)*10;
    myscore.quizav = myscore.quizav*.25;
    myscore.midterm = myscore.midterm*.25;
    myscore.exam = myscore.exam*.5;
    finalgrade = myscore.exam + myscore.midterm + myscore.quizav;
    cout << " "<<endl;
    cout <<"The final grade is: "<<finalgrade<<endl;

    // get letter grade
    if (finalgrade>=90)
    {
        lettergrade = 'A';
    }
    else if (finalgrade>=80)
    {
        lettergrade = 'B';
    }
    else if (finalgrade>=70)
    {
        lettergrade = 'C';
    }
    else if (finalgrade>=60)
    {
        lettergrade = 'D';
    }
    else if (finalgrade<60)
    {
        lettergrade = 'F';
    }

    // Present letter grade
    cout << "The letter grade for this student is: "<<lettergrade;
}

void fungrade(Srecord *ptr)
{

    // get quiz grades
    cout << "What is the score of quiz 1 (10 points possible):"<<endl;
    cin >> ptr->quiz1;

    cout << "What is the score of quiz 2 (10 points possible):"<<endl;
    cin >> ptr->quiz2;


    // get midterm score
    cout << "What is the score of the midterm (100 points possible):"<<endl;
    cin >> ptr->midterm;


    //get exam score
    cout << "What is the score of the exam (100 points possible):"<<endl;
    cin >> ptr->exam;
}
