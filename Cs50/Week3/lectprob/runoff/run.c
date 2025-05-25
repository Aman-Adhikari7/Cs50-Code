// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// #define MAX_VOTERS 100
// #define MAX_CANDIDATES 9


// int preferences [MAX_VOTERS][MAX_CANDIDATES];

// typedef struct {
//     char name[100];
//     int votes;
//     bool eliminated;

// }candidate;

// #include <stdio.h>
// #include <string.h>

// #define MAX_VOTERS 100
// #define MAX_CANDIDATES 9

// // preferences[i][j] is jth preference for voter i
// int preferences[MAX_VOTERS][MAX_CANDIDATES];

// // Candidates have name, vote count, eliminated status
// typedef struct
// {
//     char name[100];
//     int votes;
//     int eliminated;  // 0 = false, 1 = true
// } candidate;

// // Array of candidates
// candidate candidates[MAX_CANDIDATES];

// // Numbers of voters and candidates
// int voter_count;
// int candidate_count;

// // Function prototypes
// int vote(int voter, int rank, char* name);
// void tabulate(void);
// int print_winner(void);
// int find_min(void);
// int is_tie(int min);
// void eliminate(int min);

// int main(int argc, char* argv[])
// {
//     if (argc < 2)
//     {
//         printf("Usage: runoff [candidate ...]\n");
//         return 1;
//     }

//     candidate_count = argc - 1;
//     if (candidate_count > MAX_CANDIDATES)
//     {
//         printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
//         return 2;
//     }

//     for (int i = 0; i < candidate_count; i++)
//     {
//         strcpy(candidates[i].name, argv[i + 1]);
//         candidates[i].votes = 0;
//         candidates[i].eliminated = 0;
//     }

//     printf("Number of voters: ");
//     scanf("%d", &voter_count);
//     if (voter_count > MAX_VOTERS)
//     {
//         printf("Maximum number of voters is %i\n", MAX_VOTERS);
//         return 3;
//     }

//     for (int i = 0; i < voter_count; i++)
//     {
//         for (int j = 0; j < candidate_count; j++)
//         {
//             char name[100];
//             printf("Rank %d: ", j + 1);
//             scanf("%s", name);

//             if (!vote(i, j, name))
//             {
//                 printf("Invalid vote.\n");
//                 return 4;
//             }
//         }
//         printf("\n");
//     }

//     while (1)
//     {
//         tabulate();

//         if (print_winner())
//         {
//             break;
//         }

//         int min = find_min();
//         int tie = is_tie(min);

//         if (tie)
//         {
//             for (int i = 0; i < candidate_count; i++)
//             {
//                 if (!candidates[i].eliminated)
//                 {
//                     printf("%s\n", candidates[i].name);
//                 }
//             }
//             break;
//         }

//         eliminate(min);

//         for (int i = 0; i < candidate_count; i++)
//         {
//             candidates[i].votes = 0;
//         }
//     }

//     return 0;
// }

// // Record preference if vote is valid
// int vote(int voter, int rank, char* name)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (strcmp(name, candidates[i].name) == 0)
//         {
//             preferences[voter][rank] = i;
//             return 1;
//         }
//     }
//     return 0;
// }

// // Tabulate votes for non-eliminated candidates
// void tabulate(void)
// {
//     for (int i = 0; i < voter_count; i++)
//     {
//         for (int j = 0; j < candidate_count; j++)
//         {
//             int candidate_index = preferences[i][j];
//             if (!candidates[candidate_index].eliminated)
//             {
//                 candidates[candidate_index].votes++;
//                 break;
//             }
//         }
//     }
// }

// // Print the winner of the election, if there is one
// int print_winner(void)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (candidates[i].votes > voter_count / 2)
//         {
//             printf("Winner: %s\n", candidates[i].name);
//             return 1;
//         }
//     }
//     return 0;
// }

// // Return the minimum number of votes any remaining candidate has
// int find_min(void)
// {
//     int min = voter_count;
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (!candidates[i].eliminated && candidates[i].votes < min)
//         {
//             min = candidates[i].votes;
//         }
//     }
//     return min;
// }

// // Return true if the election is tied between all candidates, false otherwise
// int is_tie(int min)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (!candidates[i].eliminated && candidates[i].votes != min)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// // Eliminate the candidate (or candidates) in last place
// void eliminate(int min)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (!candidates[i].eliminated && candidates[i].votes == min)
//         {
//             candidates[i].eliminated = 1;
//         }
//     }
// }




