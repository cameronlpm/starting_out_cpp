#include "FinalExam.h"
#include "GradedActivity.h"

// set function
// parameters are number of questions and number of questions missed
void FinalExam::set(int questions, int missed)
{
    double numericScore;

    // set the number of questions and number missed
    numQuestions = questions;
    numMissed = missed;

    // calculate points for each question
    pointsEach = 100.0 / numQuestions;

    // calculate numeric score for this exam
    numericScore = 100.0 - (missed * pointsEach);

    // call inherited setScore function to set numeric score
    setScore(numericScore);

    // call the adjustScore function to adjust the score
    adjustScore();
}