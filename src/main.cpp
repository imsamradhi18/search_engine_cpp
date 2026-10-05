#include <iostream> //use to print or display
#include <string>   // to store text
#include <vector>   ///dynamic array (list of words)
#include <cctype>   // isalnum() or to;ower() ; char check krna
#include<map>     //words -> jodna
#include <set>  // ids for unique docs
using namespace std;

// tokeniz is use jese ki ek hi word ko alg alg tareeke se search kia ho pr mtlb same hai for eg. hii hi hey all are same so tokenize make it also use splitIntoWords

vector<string> tokenize(const string &text)
{
    vector<string> words; // stores the final list
    string current = "";  // words, adds here letter by letter

    // go trough each letter of the word like hi, you so h, i , y , o , u
    for (char c : text)
    {
        if (isalnum(c))
        {
            // true if c letter is  (a-z, A-Z) or digit (0-9)
            // lower case it and add into current one
            current += tolower(c);
            // ('Q') and ' q' will be smae like Quick = quick
        }
        else
        {
            if (current != "")
            {
                // means i thave , . ! that means word ends
                words.push_back(current);
                // word set to list
                current = "";
                // space fofr new word
            }
        }
    }
    if (current != "") // may be a left word after loop ends therfore it may be added here

        words.push_back(current);

    return words; // returns the whole list
}
int main()
{

    // inverted index
    vector<string> docs;
    docs.push_back("The quick brown fox jumps over the lazy dog");
    docs.push_back("A quick brown dog outpaces a quick fox");
    docs.push_back("The lazy cat sleeps all day");

    map<string, set<int>> index;

    for (int docId = 0; docId < (int)docs.size(); docId++)
    {
        vector<string> words = tokenize(docs[docId]);
        for (const auto &word : words)
        {
            index[word].insert(docId);
        }
    }
cout<< "INVERTED INDEX" << endl;
for(const auto& entry : index){
    cout<< entry.first << " -> ";
    for( int id : entry.second){
        cout<< id << " ";
    }
    cout <<endl;
}
// search word 
string query = "quick";
cout << endl << "Search " << query << endl;
if (index.count(query)) {
    for(int id : index[query]) {
        cout<< "Found in doc " << id << " : " << docs[id] << endl;
    }
}else {

    cout<< "not found"<< endl;
}
return 0;

}