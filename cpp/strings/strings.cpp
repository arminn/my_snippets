// SPDX-License-Identifier: Apache-2.0

#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <string_view>

using std::cout;
using std::exception;
using std::stoi;
using std::string;
using std::stringstream;

// c++17  #include <charconv>	std::from_chars(s.data(), s.data()+s.size(), val);

bool strtolToInt(const string& str, int& i) {
	char* end = nullptr;
	int d = strtol(str.c_str(), &end, 10);
	if (*end) {
		return false;
	}
	i = d;
	return true;
}

template <typename T>
bool fromString(const string& str, T t) {
	stringstream ss;
	ss << str;
	bool result = ss >> t;
	return result;
}

bool sstreamToInt(const string& str, int& i) {
	stringstream ss(str);
	int x = 0; 
	ss >> x;
	if (ss.fail()) {
		return false;
	}
	i = x;
	return true;
}

int stoiToInt(const string& str, int& i) {
	try {
		i = stoi(str);
	} catch (exception& e) {
	    return false;
	}
	return true;
}

void testString(const string& s) {
	cout << "Will try " << s << "\n";
	int val;
    
    if (sstreamToInt(s, val)) {    
    	cout << "Convert to int using std::sstream : " << val << "\n";
    } else {
    	cout << "Unable to convert " << s << " to int using std::sstream\n";
    }
    
	
	if (stoiToInt(s, val)) {
		cout << "Convert to int using std::stoi : " << val << "\n";
	} else {
	    cout << "Unable to convert " << s << " to int using std::stoi\n";
	}
	
	if (strtolToInt(s, val)) {
		cout << "Convert to int using std::strtol : " << val << "\n";
	} else {
    	cout << "Unable to convert " << s << " to int using std::strtol\n";
    }
	
	if (fromString(s, val)) {
		cout << "Convert to int using fromStringl : " << val << "\n";
	} else {
	    cout << "Unable to convert " << s << " to int using fromString\n";
	}
	
}

int main(int argc, char* argv[]) {
    string s = {"bad"}, s2 = {"12345"}, s3 = {"2.45"};
    testString(s);
    testString(s2);
    testString(s3);
	return 0;
}
