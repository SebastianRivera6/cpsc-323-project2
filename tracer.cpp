#include <vector>
#include <string>
#include <iomanip>
#include<iostream>

using namespace std;

void shift(string &input, string &output, int counter, string action)
{
output.push_back(input[0]);
output.push_back(action[1]);
input.erase(0,1);
}

void reduction(string &input, string &output, int counter, string action)
{
//add here
}

string find_action(int &counter, vector<vector<string>> lrParsingTable, string input)
{

  string action;
  for ( int i = 0; i<8; i++)
    {

    if(lrParsingTable[0][i][0] == input[0])
      {
        action = lrParsingTable[counter][i];
      }
    }
    return action;
}

int main()
{
  string input;
  string output ="$0";
  int counter = 1;
  string action;
  bool found = false;

  cout<<"enter string: ";
  cin >> input;
  cout << "State|   Stack    |    Input     |  Action" << endl;

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


while (input != "$")
{
action = find_action(counter,  lrParsingTable, input);
if (action[0] == 'S')
{
shift( input,  output,  counter,  action);
cout << counter-1<<"|   " << output<< "   |"<<"|   " << input<< "   |"<<"|   " << action<< "   |"<<endl;
counter++;

}

 else if (action[0] == 'R')
{
  reduction( input,  output,  counter,  action);
  cout << counter-1<<"|   " << output<< "   |"<<"|   " << input<< "   |"<<"|   " << action<< "   |"<<endl;
  counter++;
}

  }
}
