// Please see README.txt
// We will go over the answers in class.
// Thank you.

#include <iostream>
#include <string>

using namespace std;

string type = "Credit";

class credit_card {
public:
	credit_card() = default;

	explicit credit_card(const double& balance, string com = "Disney") :
		com_(move(com)), balance_(balance) {}

	void display_info() const {
		cout << credit_card::type_ << " [" << this->com_ << "]: " << this->balance_ << endl;
	}

	void set_com(const string& com) {
		this->com_ = com;
	}

private:
	static string type_;
	string com_{ "N/A" };
	double balance_{ 0 };
};

string credit_card::type_ = type;

credit_card& update_credit_card(const double& balance) {
	credit_card cc1{ balance };
	static credit_card* cc2 = new credit_card{ 100 };
	cc1.set_com("Tesla");
	*cc2 = cc1;
	return *cc2;
}

int main()
{
	credit_card cc3 = update_credit_card(300);
	cc3.display_info();

	credit_card cc4 = credit_card{ cc3 };
	cc4.set_com("Zoom");
	cc4.display_info();

	credit_card* cc5 = new credit_card{ update_credit_card(500) };
	cc5->display_info();

	cc3.set_com("Google");
	cc4.display_info();

	return 0;
}

//- Memory Area 1: Environment
//- Memory Area 2 : Runtime Stack
//- Memory Area 3 : Free - store
//- Memory Area 4A : Uninitialized Data
//- Memory Area 4B : Initialized Data
//- Memory Area 5 : Binary Program

//a. In which memory area is this element stored ? Please circle your choice and explain why ?
//b. The lifetime, beginning & end, of this element ? Why ?

//c. What is the output of the program?

/*
Credit [Tesla]: 300
Credit [Zoom]: 300
Credit [Tesla]: 500
Credit [Zoom]: 300
*/