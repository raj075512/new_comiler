
#include <fstream>
#include <iostream>
using namespace std;
  
int main()
{
    string line;
    // For writing text file
    // Creating ofstream & ifstream class object
    ifstream ini_file{
        "lab2-compiler.txt"
    }; // This is the original file
    ofstream out_file{ "copy.txt" };
    if (ini_file && out_file) {
  
        while (getline(ini_file, line)) {
            out_file << line << "\n";
        }
        cout<<"copy file has been changed \n";
        cout << "Copy Finished \n";
    }
    else {
        // Something went wrong
        printf("Cannot read File");
    }
    // Closing file
    ini_file.close();
    out_file.close();
    return 0;
}



// another option //


// #include<bits/stdc++.h> #include<fstream> using namespace std; int main(){
// string s; ifstream fin;
// fin.open("data.txt"); while(fin){
// getline(fin,s);
// }
// string old,newWord; cin >> old >> newWord;
// size_t found=s.find(old); while(found!=string::npos){
// s.replace(found,old.length(),newWord); found=s.find(old);
// }
// fin.close(); ofstream fout;
// fout.open("data.txt",ios::trunc);
// fout << s; fout.close();

// return 0;
// }


























































// // #include <iostream>
// // #include<fstream>
// // #include<vector>
// // #include<string>
// #include <bits/stdc++.h>
// using namespace std;

// void wordarray(string str, vector<string> &a)
// {
//     istringstream ss(str);

//     string word; // for storing each word

//     // Traverse through all words
//     // while loop till we get
//     // strings to store in string word
//     while (ss >> word)// reading the line word by word.
//     {
//         // print the read word
//         // cout << word << "\n";
//         if (word[word.size() - 1] == ',' || word[word.size() - 1] == '.' || word[word.size() - 1] == '!' || word[word.size() - 1] == '?')
//         {
//             string word_new = "";
//             for (int i = 0; i < word.size() - 1; i++)
//             {
//                 word_new.push_back(word[i]);
//             }
//             // cout<<word_new<<endl;
//             if (word_new.size() != 0)
//                 a.push_back(word_new);
//             a.push_back({word[word.size() - 1]});
//         }
//         else
//         {
//             a.push_back(word);
//         }
//     }
//     a.push_back({'\n'});
// }

// int main()
// {
//     string line, word;
//     vector<string> a;
//     ifstream fin;

//     fin.open("sample.txt");
//     while (!fin.eof())
//     {

//         getline(fin, line, '\n');
//         // strin/g* g=line;
//         // for(int i=0;i<line.size();i++){
//         //     // cout<<
//         // line2[i]=line[i];
//         // }
//         // cout<<line2<<endl;
//         wordarray(line, a);

//         // cout<<line<<endl;
//     }
//     // for (int i = 0; i < a.size(); i++)
//     // {
//     //     cout << a[i] << endl;
//     // }
//     cout << "Enter a word: " << endl;
//     cin >> word;
//     int count = 0;
//     string replace;
//     cout << "enter the word that will replace it: " << endl;
//     cin >> replace;
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (word == a[i])
//         {
//             count++;

//             a[i] = replace;
//         }
//     }

//     fin.close();
//     ofstream fout;
//     fout.open("sample.txt");
//     for (int i = 0; i < a.size() - 1; i++)
//     {
//         if(a[i+1]==","||a[i+1]=="."||a[i+1]=="!")
//         fout << a[i] ;
//         else if(a[i]=="\n")fout << a[i] ;
//         else
//         fout << a[i] << ' ';
//     }
//     fout << a[a.size()-1] ;
//     fout.close();
//     cout << count << endl;
//     return 0;
// }