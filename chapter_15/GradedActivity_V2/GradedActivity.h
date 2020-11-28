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

    char getLetterGrade() const;
};

#endif