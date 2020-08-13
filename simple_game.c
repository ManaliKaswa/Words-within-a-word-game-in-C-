#include <stdio.h>
#include<string.h>

int i=0; 

struct word
{
    char name[10];
};


int main()
{
    struct word form[10];
    printf("\nThe game is to search  words within A WORD ! Here u will be given a word, give ur BRAIN some excercise and try finding 15 words \n");
    printf("RULES: \n 1. You are allowed to enter 15 words in CAPS. \n 2. Enter OVER once you are unable to find anymore words.\n 3. No Similar words allowed.");
    printf("\nYOUR WORD IS: LEARN \nEnter Your Words:\n");

    do
    {
      scanf("%s", form[i].name);
      ++i;
    }

    while(strcmp(form[i-1].name,"OVER")!=0);

    printf("\nEntries were Taken\n");

    int j=0,k=0,match=0;

    struct word dict[29]=
	{"NERAL","RENAL","ARLE","EARL","EARN","ELAN","LAER","LANE","LARE","LEAR","LEAN"	,"NARE","NEAL","NEAR","RALE","REAL","REAN","ALE","ARE","EAN","EAR","ERA","ERN",	"LAR","LEA","NAE","RAN","REN",'\0'};//Dictionary

  
        for(;k<28;k++)//Keep the Limit as per the Dictionary
        {

            if(strcmp(form[0].name,dict[k].name)==0)
                       match++;
            if(strcmp(form[1].name,dict[k].name)==0)
                       match++;
            if(strcmp(form[2].name,dict[k].name)==0)
                       match++;
	    	if(strcmp(form[3].name,dict[k].name)==0)
                       match++;
	    	if(strcmp(form[4].name,dict[k].name)==0)
                       match++;
            if(strcmp(form[5].name,dict[k].name)==0)
                       match++;
            if(strcmp(form[6].name,dict[k].name)==0)
                       match++;
	    	if(strcmp(form[7].name,dict[k].name)==0)
                       match++;
	    	if(strcmp(form[8].name,dict[k].name)==0)
                       match++;
            if(strcmp(form[9].name,dict[k].name)==0)
                       match++;
            if(strcmp(form[10].name,dict[k].name)==0)
                       match++;
	    	if(strcmp(form[11].name,dict[k].name)==0)
                       match++;
      	if(strcmp(form[12].name,dict[k].name)==0)
                       match++;
	    	if(strcmp(form[13].name,dict[k].name)==0)
                       match++;
            if(strcmp(form[14].name,dict[k].name)==0)
                       match++;
          }       

	printf("YOUR SCORE: %d",match);

}

/*INPUT AND OUTPUT :

The game is to search  words within A WORD ! Here u will be given a word, give ur some excercise and try finding 15 words 
RULES: 
 1. You are allowed to enter 15 words in CAPS.
 2. Enter OVER once you are unable to find anymore words.
 3. No Similar words allowed.
YOUR WORD IS: LEARN 
Enter Your Words:
LEAR EARN NEAR OVER

Entries were Taken
YOUR SCORE: 3 */
