#include <iostream> //use to print or display
#include <string>   // to store text
#include <vector>   ///dynamic array (list of words)
#include <cctype>   // isalnum() or to;ower() ; char check krna
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
    if (current != "")   // may be a left word after loop ends therfore it may be added here 
    {
        words.push_back(current);
    }
    return words; //returns the whole list
}
int main(){

    // text test 
    string text = "The Quick Brown Fox, jumps!";
    //call tokenize 
    vector<string> words = tokenize(text);
    for(string w : words){
        cout<< w <<  endl;
    } 
    return 0;
}