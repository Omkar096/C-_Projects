#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numQuestions = 3;
    string questions[numQuestions] = {
        "1. What is the capital of India?\n(a) Mumbai\n(b) Delhi\n(c) Kolkata",
        "2. Which language is used for system programming?\n(a) Python\n(b) C++\n(c) JavaScript",
        "3. What is the output of 2 + 2?\n(a) 3\n(b) 4\n(c) 5"
    };
    char answers[numQuestions] = {'b', 'b', 'b'};
    char userAnswer;
    int score = 0;

    cout << "Welcome to the Quiz!\n\n";

    for (int i = 0; i < numQuestions; ++i) {
        cout << questions[i] << endl;
        cout << "Enter your answer (a/b/c): ";
        cin >> userAnswer;

        if (userAnswer == answers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong! The correct answer was: " << answers[i] << "\n\n";
        }
    }

    cout << "Quiz finished. Your score : " << score << "/" << numQuestions << endl;

    return 0;
}
