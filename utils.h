#ifndef UTILS_H
#define UTILS_H

#include <inttypes.h>

#include <cstdlib>
#include <string>
#include <vector>
#include <map>

using namespace std;

string str_replace(string needle, string replace, string haystack);
vector<string> explode(string separator, string s);

#endif