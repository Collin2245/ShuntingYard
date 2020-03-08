#include "StringFunctions.hpp"
using namespace std;

string * StringFunctions::splitString(string s, string delims)
{
    LinkedList * ll = new LinkedList();
    char* fullChar = StringFunctions::stringToCharArray(s);
    char *fullChar2 = StringFunctions::stringToCharArray(s);
    char* delimsChar = StringFunctions::stringToCharArray(delims);
    char * tokenizer;
    char * delimTokens;
    std::cout<<delimsChar[0];
    string firstTester = string(1,fullChar[0]);
    std::cout<< firstTester;
    bool toggle = false;
    std::size_t found = firstTester.find_first_of(delims);

    tokenizer = strtok (fullChar,delimsChar);
    delimTokens = strpbrk(fullChar2,delimsChar);
    if( found != std::string::npos)
    {
        std::cout<<"running!";
        toggle = true;
    }

    while (tokenizer != 0 || delimTokens !=0)
    {
        if(tokenizer != 0 && delimTokens !=0)
        {
            if(toggle == true)
            {
                string thingToAdd =  string(1,delimTokens[0]);
                ll->addEnd(thingToAdd);
                delimTokens = strpbrk (delimTokens+1 , delimsChar);
                ll->addEnd(tokenizer);
                tokenizer = strtok (NULL, delimsChar);
            }
            else
            {
                string thingToAdd =  string(1,delimTokens[0]);
                ll->addEnd(tokenizer);
                tokenizer = strtok (NULL, delimsChar);
                ll->addEnd(thingToAdd);
                delimTokens = strpbrk (delimTokens+1 , delimsChar);
            }
        }
        else if (tokenizer!=0)
        {
            ll->addEnd(tokenizer);
            tokenizer = strtok (NULL, delimsChar);
        }
        else if (delimTokens != 0)
        {
            string thingToAdd =  string(1,delimTokens[0]);
            ll->addEnd(thingToAdd);
            delimTokens = strpbrk (delimTokens+1 , delimsChar);
        }
    }
       std::cout<<"\n"<<"\n";
       //ll->display();
       std::cout<<"\n"<<"\n";
       int c = ll->count;
       string * arrayStart =  ll->toStringArray();
       
       return arrayStart;
}

char * StringFunctions::stringToCharArray(string s)
{

    char * cstr = new char [s.length()+1];
    strcpy (cstr, s.c_str());




    return  cstr;
}