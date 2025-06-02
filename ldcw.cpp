#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "=============================\n";
    cout << "  Cybersecurity Awareness Quiz\n";
    cout << "=============================\n\n";
    cout << "Answer each question by entering A, B, or C.\n\n";

    // Question 1
    cout << "1. What is the main goal of a phishing attack?\n";
    cout << "A. To block network traffic\n";
    cout << "B. To gain unauthorized access to data through deception\n";
    cout << "C. To test internet speed\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'B') score++;

    // Final feedback
    cout << "\n=============================\n";
    cout << "Quiz Completed. Your score: " << score << "\n";

    if (score == 1)
        cout << "Excellent! You have strong cybersecurity knowledge.\n";
    else
        cout << "Consider reviewing cybersecurity best practices to improve.\n";

    return 0;
}
