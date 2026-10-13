
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Unicorn {
private:
	string name;
	bool newname;
	static vector<string> Allnames;



public:

	Unicorn(const string& A) {
		for (int i = 0; i < Allnames.size(); i++) {
			if (Allnames[i] == A) {
				cout << "This Name has been used before" << endl;
				newname = false;
				return;
			}
		}
		name = A;
		Allnames.push_back(A);
		cout << A << "A new Unicorn has joined this planet!" << endl;
		newname = true;

	}
	
	~Unicorn() {
		if (!newname) {
			return;
		}

		for (int i = 0; i < Allnames.size(); i++) {
			if (Allnames[i] == name) {
				Allnames.erase(Allnames.begin() + i);
				break;
			}
		}
		cout << name << " is no longer with us" << endl;
	}


};
vector<string> Unicorn::Allnames;






int main()
{

	Unicorn unicorn1("Jap");
	Unicorn unicorn2("Jay");
	Unicorn unicorn3("Jap");
}

