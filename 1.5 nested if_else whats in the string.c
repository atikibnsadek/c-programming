#include<stdio.h>

void main(){
    int i,vowel,consonant, digit, word, other;
    char string[80],c;
    i=vowel=consonant=digit=word=other=0;
    printf("program to count vowels, consonants, words, digit\n");
    printf("and other characters in the string...\n\n");
    printf("Thype a string: ");
    scanf("%[^\n]",string);///%[^\n]fancy or old way if saying get().

    while((c=tolower(string[i++]))!='\0'){

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            ++vowel;
        }
        else{
            if((c>'a'&&c<'e')||(c>'e'&&c<'i')||(c>'i'&&c<'o')||(c>'o'&&c<'u')||(c>'u')){
                ++consonant;
            }
            else{
                if(c>='0'&&c<='9'){
                    ++digit;
                }
                else{
                    if(c==' '){
                        ++word;
                    }
                    else{
                        ++other;
                    }
                }
            }
        }
    }
    ++word;
    printf("# of Vowels          :%d\n",vowel);
    printf("# of Consonants      :%d\n",consonant);
    printf("# of Digits          :%d\n",digit);
    printf("# of Words           :%d\n",word);
    printf("# of other chars     :%d\n",other);
}


