

#include <string.h>
#include <string>
#include <sstream>
#include <iostream>

// c++17  #include <charconv>	std::from_chars(s.data(), s.data()+s.size(), val);

bool strtolToInt(const std::string& str, int& i) {
	char* end = nullptr;
	int d = strtol(str.c_str(), &end, 10);
	if (*end) {
		return false;
	}
	i = d;
	return true;
}

template <typename T>
bool fromString(const std::string& str, T t) {
	std::stringstream ss;
	ss << str;
	bool result = ss >> t;
	return result;
}

bool sstreamToInt(const std::string& str, int& i) {
	std::stringstream ss(str);
	int x = 0; 
	ss >> x;
	if (ss.fail()) {
		return false;
	}
	i = x;
	return true;
}

int stoiToInt(const std::string& str, int& i) {
	try {
		i = std::stoi(str);
	} catch (std::exception& e) {
	    return false;
	}
	return true;
}

void testString(const std::string& s) {
	std::cout << "Will try " << s << "\n";
	int val;
    
    if (sstreamToInt(s, val)) {    
    	std::cout << "Convert to int using std::sstream : " << val << "\n";
    } else {
    	std::cout << "Unable to convert " << s << " to int using std::sstream\n";
    }
    
	
	if (stoiToInt(s, val)) {
		std::cout << "Convert to int using std::stoi : " << val << "\n"; 
	} else {
	    std::cout << "Unable to convert " << s << " to int using std::stoi\n";
	}
	
	if (strtolToInt(s, val)) {
		std::cout << "Convert to int using std::strtol : " << val << "\n";
	} else {
    	std::cout << "Unable to convert " << s << " to int using std::strtol\n";
    }
	
	if (fromString(s, val)) {
		std::cout << "Convert to int using fromStringl : " << val << "\n";
	} else {
	    std::cout << "Unable to convert " << s << " to int using fromString\n";
	}
	
}

int main(int argc, char* argv[]) {
    std::string s = {"edede"}, s2 = {"12345"}, s3 = {"2.45"}; 
    testString(s);
    testString(s2);
    testString(s3);
	return 0;
}