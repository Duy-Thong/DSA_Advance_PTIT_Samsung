#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

set<string> extract(const string &text)
{
    set<string> words;
    istringstream iss(text);
    string word;

    while (iss >> word)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        words.insert(word);
    }

    return words;
}

int main()
{
    string line1, line2;

    getline(cin, line1);
    getline(cin, line2);

    set<string> set1 = extract(line1);
    set<string> set2 = extract(line2);
    set<string> unionSet;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(unionSet, unionSet.begin()));
    set<string> intersectionSet;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersectionSet, intersectionSet.begin()));
    for (const string &word : unionSet)
    {
        cout << word << " ";
    }
    cout << endl;
    for (const string &word : intersectionSet)
    {
        cout << word << " ";
    }

    return 0;
}
