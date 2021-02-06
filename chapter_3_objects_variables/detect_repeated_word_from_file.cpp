/*
 program is meant to count repeated words in sentence given in txt file
*/

#include <iostream>
#include <fstream>
#include <vector>
#include<iomanip>

using namespace std;

vector<string> read_words;     // holds words in a file
  int num_of_repeations[100]={0}; // holds number of repeatitions of each word



bool is_word_checked_before(string s)
{ // function checks weather word read before

    if (read_words.size() == 0)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < read_words.size(); i++)
        {
            if (read_words[i] == s)
            {
                num_of_repeations[i] = num_of_repeations[i] + 1;
                return true;
            }
        }

        return false;
    }
}

int main()
{
    ifstream myReadfile;
    myReadfile.open("detect_word_file.txt");
    int word_count = 0;
    string output_word;
    

    if (myReadfile.is_open())
    {

        while (!myReadfile.eof())
        {

            myReadfile >> output_word;

            if (!is_word_checked_before(output_word))
            {
                read_words.push_back(output_word);
                num_of_repeations[word_count] = 1;
                word_count = word_count + 1;
            }
        }
    }
 
    cout << "word"<< "    "<< "repetitions" << endl;

    for (int j = 0; j < read_words.size(); j++) // display the words and their frequency
    {
        cout<<read_words[j]<< std::stew(5)<<num_of_repeations[j]<<endl;
    }

    myReadfile.close();


}