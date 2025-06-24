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

    // Question 2
    cout << "\n2. Which of the following is the strongest password?\n";
    cout << "A. password123\n";
    cout << "B. MyName2023\n";
    cout << "C. #TxR@91!bQx$\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'C') score++;

    // Question 3
    cout << "\n3. What is malware?\n";
    cout << "A. A software update from your vendor\n";
    cout << "B. A type of malicious software designed to harm or exploit systems\n";
    cout << "C. A tool for backing up data\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'B') score++;

    // Question 4
    cout << "\n4. What is the primary function of a firewall?\n";
    cout << "A. To increase internet speed\n";
    cout << "B. To physically block hackers\n";
    cout << "C. To monitor and control incoming/outgoing network traffic based on rules\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'C') score++;

    // Question 5
    cout << "\n5. Which is a recommended practice to enhance cybersecurity?\n";
    cout << "A. Using the same password for all accounts for convenience\n";
    cout << "B. Clicking unknown email links to verify their content\n";
    cout << "C. Enabling multi-factor authentication on all major accounts\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'C') score++;

    // Question 6
    cout << "\n6. What is two-factor authentication (2FA)?\n";
    cout << "A. Using two passwords\n";
    cout << "B. A security process requiring two separate forms of identification\n";
    cout << "C. Logging in from two devices at once\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'B') score++;

    // Question 7
    cout << "\n7. Which of the following is a sign of a secure website?\n";
    cout << "A. The website loads quickly\n";
    cout << "B. The URL starts with 'http://'\n";
    cout << "C. The URL starts with 'https://' and displays a padlock icon\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'C') score++;

    // Question 8
    cout << "\n8. What is a common way that ransomware spreads?\n";
    cout << "A. Through social media likes\n";
    cout << "B. Via email attachments or malicious links\n";
    cout << "C. By browsing secure websites\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'B') score++;

    // Question 9
    cout << "\n9. What should you do if you suspect a computer is infected with malware?\n";
    cout << "A. Ignore it and hope it goes away\n";
    cout << "B. Keep using the device as normal\n";
    cout << "C. Disconnect from the internet and run antivirus software\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'C') score++;

    // Question 10
    cout << "\n10. What is the purpose of software updates?\n";
    cout << "A. To add advertisements\n";
    cout << "B. To slow down your device\n";
    cout << "C. To fix bugs and patch security vulnerabilities\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'C') score++;

    // Final feedback
    cout << "\n=============================\n";
    cout << "Quiz Completed. Your score: " << score << "/10\n";

    if (score == 10)
    cout << "Excellent! You have strong cybersecurity knowledge.\n";
    else if (score >= 7)
        cout << "Good effort! Keep learning to stay safe online.\n";
    else
        cout << "Consider reviewing cybersecurity best practices to improve.\n";

    return 0;
}
