
#include<bits/stdc++.h>
using namespace  std;


 int main()
{
    int i, leng;
    char phrase[DIM], word[DIM], word2[DIM];

    printf("Write a sentence\n>>");
    fgets(phrase, sizeof(phrase), stdin);

    printf("Enter the word you want to replace in the sentence\n>> ");
    fgets(word, sizeof(word), stdin);

    printf("What do you want to replace it with?\n>> ");
    fgets(word2, sizeof(word2), stdin);

    leng = strlen(phrase);

    for(i = 0; i < leng; i++){
        if(phrase[i] == word){
            phrase[i] = word2;
        }
    }
    printf("%s", phrase);
}