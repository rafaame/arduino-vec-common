#include "utils.h"

using namespace std;

string str_replace(string needle, string replace, string haystack) {
	while(haystack.find(needle) != string::npos) {
  		haystack.replace(haystack.find(needle), needle.size(), replace);
	}

	return haystack;
}

vector<string> explode(string separator, string s) {
	vector<string> result;

	size_t pos = 0;
	while ((pos = s.find(separator)) != string::npos) {
	    result.push_back(s.substr(0, pos));
	    
	    s.erase(0, pos + separator.length());
	}

	result.push_back(s);
	return result;
}