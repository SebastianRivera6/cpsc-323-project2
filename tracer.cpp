#include vector
#include <string>
using namespace std;

void shift(string &input, string &output, int counter, string action)
{

}

void reduction()
{

}


int main
{
  string input;
  string output ="$0";
  int counter = 0;
  string action;

  cout<<"enter string"
  cin >> input;

  vector<vector<string>> lrParsingTable = {
          {"i", "+", "*", "(", ")", "$", "E", "T", "F"},
          {"S5", "blank", "blank", "S4", "blank", "blank", "1", "2", "3"},
          {"blank", "S6", "blank", "blank", "blank", "acc", "blank", "blank", "blank"},
          {"blank", "R2", "S7", "blank", "R2", "R2", "blank", "blank", "blank"},
          {"blank", "R4", "R4", "blank", "R4", "R4", "blank", "blank", "blank"},
          {"S5", "blank", "blank", "S4", "blank", "blank", "8", "2", "3"},
          {"blank", "R6", "R6", "blank", "R6", "R6", "blank", "blank", "blank"},
          {"S5", "blank", "blank", "S4", "blank", "blank", "blank", "blank", "blank"},
          {"S5", "blank", "blank", "S4", "blank", "blank", "blank", "blank", "blank"},
          {"blank", "S6", "blank", "blank", "S11", "blank", "blank", "blank", "blank"},
          {"blank", "R1", "S7", "blank", "R1", "R1", "blank", "blank", "blank"},
          {"blank", "R3", "R3", "blank", "R3", "R3", "blank", "blank", "blank"},
          {"blank", "R5", "R5", "blank", "R5", "R5", "blank", "blank", "blank"}
      };
for ( i = 0, i>8; i++)
  {

  if(lrParsingTable[0][i] == input[0])
    {
      action = lrParsingTable[counter][i];
      break;
    }
   else
    {
       cout <<  input[0] << " not found in the parsing table."<<endl;
       break;
    }
  }

}

if (action[0] == 'S')
{
shift(string &input, string &output, int counter, string action);
}

else if (action[0] == 'R')
{
  reduction(string &input, string &output, int counter, string action);
}
