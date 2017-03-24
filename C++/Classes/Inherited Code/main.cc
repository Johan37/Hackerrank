#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException : public exception {
  public :
    BadLengthException(int n) : n_(n) {}

    // C++03 version
    /*virtual const char* what() const throw () {
      std::stringstream ss;
      ss << n_;
      string tmp_str = ss.str();
      char const* pchar = tmp_str.c_str();
      return pchar;
    }*/

    //C++11 version
    virtual const char* what() const throw () {
      return std::to_string(n_).c_str();
    }
    
  private:
    int n_;
};

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}