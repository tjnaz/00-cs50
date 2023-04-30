# Title: Plurality Voting System

## Description
This program simulates a simple plurality voting system. It takes a list of candidates and allows the user to input votes. The program then calculates the winner (or winners) of the election based on the number of votes each candidate received.

### Include Libraries
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>
```

### Constants
```c
#define MAX 9
```
The maximum number of candidates supported by the program is 9.

### Data Structures
```c
typedef struct {
  string name;
  int    votes;
} candidate;
```
A candidate has a name (a string) and a vote count (an integer).

### Global Variables
```c
candidate candidates[MAX]; // Array of candidates
int candidate_count;       // Number of candidates
```

### Function Prototypes
```c
bool vote(string name);
void print_winner(void);
```

### Function: main
```c
int main(int argc, string argv[]) {
  ...
}
```
1. Checks for invalid usage and enforces the maximum number of candidates.
2. Populates the array of candidates.
3. Gets the number of voters.
4. Loops over all voters, prompting for their votes and validating them.
5. Displays the winner(s) of the election.

### Function: vote
```c
bool vote(string name) {
  ...
}
```
1. Takes a string as input (the name of the candidate a voter voted for).
2. Searches for the candidate in the candidates array.
3. If the candidate is found, increments the candidate's vote count and returns true.
4. If the candidate is not found, returns false.

### Function: print_winner
```c
void print_winner(void) {
  ...
}
```
1. Finds the candidate(s) with the highest number of votes.
2. Prints the name(s) of the winning candidate(s).
