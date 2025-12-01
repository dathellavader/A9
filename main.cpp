// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: 9
// Date ✅: 11/30/25
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 9
// Participation ✅: 100%
// Challenge ✅: 81%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count: 1


// ------------- CODE -------------
#include <iostream>

using namespace std;

// funct prototypes
void getInput(int &num);
void doStats(int num);

int main() {
int num;
 
cout << "Welcome to my Final Exam Practice!" << endl;

getInput(num);
if (num <= 0) {
    cout << "No integers were entered." << endl;
    }
else {
    doStats(num);
}

cout << "Thank you for using my program!" << endl;


  return 0;
}

// funct
void getInput(int &num) {
    cout << "How many positive integers do you want to process? ";
    cin >> num;
}
void doStats(int num) {
int minNum, maxNum, minPos, maxPos;
int currentNum;

for(int i = 1; i <= num; i++) {
    cout << "Enter integer #" << i << ": ";
    cin >> currentNum;

    if (currentNum <= 0) {
        cout << "Enter a positive integer!" << endl;
        i = i - 1;
        continue;
    }
    if (i == 1) {
        minNum = maxNum = currentNum;
        minPos = maxPos = i;
    }
    else {
        if (currentNum < minNum) {
                minNum = currentNum;
                minPos = i;
            }
        else if (currentNum > maxNum) {
                maxNum = currentNum;
                maxPos = i;
    }
}

}
cout << "The minimum number entered was " << minNum << " entered in position " << minPos << endl;
cout << "The maximum number entered was " << maxNum << " entered in position " << maxPos << endl;
}


// ------------- DESIGN -------------
/* 
Program Name: Final Exam Practice

Program Description:

Design:
A. INPUT
int num
int currentNum

B. OUTPUT
int minNum
int maxNum
int minPos
int maxPos

C. CALCULATIONS
i = i - 1;

D. LOGIC and ALGORITHMS
// Funct proto
VOID getInput(int &num);
VOID doStats(int num);

// Main
MAIN() {
    MESSAGE "Welcome to my Final Exam Practice!";

    CALL getInput(num);

    IF (num <= 0) {
        DISPLAY "No integers were entered.";
    } 
    ELSE {
        CALL doStats(num);
    }

    MESSAGE "Thank you for using my program!";
    RETURN 0;
}

// Funct getInput
VOID getInput(int &num) {
    DISPLAY "How many positive integers do you want to process? ";
    INPUT num;
}

// Funct doStats
VOID doStats(int num) {
    int minNum, maxNum, minPos, maxPos;
    int currentNum;

    FOR (int i = 1; i <= num; i++) {
        DISPLAY "Enter integer #" << i << ": ";
        INPUT currentNum;

        IF (currentNum <= 0) {
            DISPLAY "Enter a positive integer!";
            i = i - 1;
            CONTINUE;
        }

        IF (i == 1) {
            minNum = maxNum = currentNum;
            minPos = maxPos = i;
        } 
        ELSE {
            IF (currentNum < minNum) {
                minNum = currentNum;
                minPos = i;
            }
            ELSE IF (currentNum > maxNum) {
                maxNum = currentNum;
                maxPos = i;
            }
        }
    }

    DISPLAY "The minimum number entered was " << minNum << " entered in position " << minPos;
    DISPLAY "The maximum number entered was " << maxNum << " entered in position " << maxPos;
}


SAMPLE RUNS
Welcome to my Final Exam Practice.
How many positive integers do you want to process? 0
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? -9
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? 3
Enter integer #1: 1
Enter integer #2: 2
Enter integer #3: 3
The minimum number entered was 1 entered in position 1.
The maximum number entered was 3 entered in position 3.
Thank you for using my program.


How many positive integers do you want to process? 4
Enter integer #1: 2
Enter integer #2: 2
Enter integer #3: 2
Enter integer #4: 2
The minimum number entered was 2 entered in position 1.
The maximum number entered was 2 entered in position 1.
Thank you for using my program.


How many positive integers do you want to process? 4
Enter integer #1: 10
Enter integer #2: -9
Enter a positive integer!
Enter integer #2: 0
Enter a positive integer!
Enter integer #2: -3
Enter a positive integer!
Enter integer #2: 4
Enter integer #3: 3
Enter integer #4: -9
Enter a positive integer!
Enter integer #4: 5
The minimum number entered was 3 entered in position 3.
The maximum number entered was 10 entered in position 1.
Thank you for using my program.

*/