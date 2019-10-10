#include <iostream>

using namespace std;

int main() {

	float totalScore, optOutScore;
	char yesOrNo;

	cout << "Did you take the opt out test? Please press y or n" << endl;
	cin >> yesOrNo;

	if (yesOrNo == 'y' || yesOrNo == 'Y') {
		cout << "What wa syour test score?" << endl;
		cin >> optOutScore;
		if (optOutScore > 80) {
			cout << "Wow, you're done!" << endl;
			exit(1);
		}

	}
	else if (yesOrNo == 'y') {


	}
	else {

	}

	cout << "What is your total score for the semester?" << endl;
	cin >> totalScore;

	//does this person get an A?
	//rule: if total score is >90, then it's an A

	if (totalScore > 90) {
		cout << "You have an A!" << endl;
	}
	else if (totalScore > 80 && totalScore <= 90) {

		cout << "You have a B!";

	}
	else if (totalScore > 70 && totalScore <= 80) {

		cout << "You have a C!";

	}
	else {
		cout << "You failed :(" << endl;
	}


	return 1;

}