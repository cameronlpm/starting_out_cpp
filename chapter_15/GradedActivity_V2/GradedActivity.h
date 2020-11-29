#ifdef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
protected:
    double score;

public:
    // Default constructor
    GradedActivity() { score = 0.0; }

    // Constructor
    GradedActivity(double s) { score = s; }

    // Mutator
    void setScore(double s) { score = s; }

    // Accessor
    double getScore() const { return score; }

    char GradedActivity::getLetterGrade() const
    {
        char letterGrade;

        if (score > 89)
            letterGrade = 'A';
        else if (score > 79)
            letterGrade = 'B';
        else if (score > 69)
            letterGrade = 'C';
        else if (score > 59)
            letterGrade = 'D';
        else
            letterGrade = 'F';

        return letterGrade;
    }
};

#endif