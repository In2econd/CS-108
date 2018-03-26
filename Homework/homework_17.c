/*
  Algorithm:
  1. Link to the repository of test scores
  2. Test to see if the link is unsuccessful... if true,
     go to step 2a1, if false go to step 2b1
    2a1. Communicate that linking to the repository was unsuccessful
    2a2. Go to step 3
    2b1. Read one test score at a time and place the test
         score in an ordered and numbered list
    2b2. Continue until all 25 test scores are read and placed
         in an ordered and numbered list
    2b3. Close the link to the repository
    2b4. Read each test score at a time from the list
      i. If the test score read is the higher than the highest read so far,
      place it and it's location in the array into their respective variables
      ii. If the test score read is lower than the lowest read so far, place it
      and it's location in the array into their respective variables
      iii. Add the test score to the total
    2b5. Divide the total by the number of elements in the array
    2b6. Display the information to the user
      i. Display highest score and it's respective location in the array
      ii. Display lowest score and it's respective location in the array
      iii. Display the average score to two decimal places
    2b7. Go to step 3
  3. Terminate
*/

#include <stdio.h>

#define SIZE 25

int main(void)
{
    FILE *scores_ptr = NULL ;
    int scores_array[ SIZE ] ;
    int x = 0;
    // Test score highest and lowest variables
    int highest = 0, highest_location = 0, lowest = 100, lowest_location = 0;
    // Test score totals and average variables
    int score_total = 0;
    double average = 0.0;

    //1. Link to the repository of test scores
    scores_ptr = fopen("hw17_test_scores.dat" , "r");

    //2. Test to see if the link is unsuccessful... if true,
    //   go to step 2a1, if false go to step 2b1
    if(scores_ptr == NULL)
    {
          //2a1. Communicate that linking to the repository was unsuccessful
          //2a2. Go to step 3
          printf("\n\ntest_scores.dat was not properly opened.\n");
    }
    else
    {
          //2b1. Read one test score at a time and place the test
          //     score in an ordered and numbered list
          //2b2. Continue until all 25 test scores are read and placed
          //     in an ordered and numbered list
         for(x = 0 ; x < SIZE ; x++ )
         {
            fscanf(scores_ptr ,"%d" , &scores_array[ x ]);
         }

         //2b3. Close the link to the repository
         fclose(scores_ptr);

         //2b4. Read each test score at a time from the list
         for (x = 0; x < SIZE; x++)
         {
             //i. If the test score read is the higher than the highest read so
             //far, place it and it's location in the array into their
             //respective variables
             if (scores_array[x] > highest)
             {
                 highest = scores_array[x];
                 highest_location = x;
             }
             //ii. If the test score read is lower than the lowest read so far,
             //place it and it's location in the array into their
             //respective variables
             if (scores_array[x] < lowest)
             {
                 lowest = scores_array[x];
                 lowest_location = x;
             }
             //iii. Add the test score to the total
             score_total += scores_array[x];
         }

         //2b5. Divide the total by the number of elements in the array
         average = (double)score_total / SIZE;

         //2b6. Display the information to the user
         //i. Display highest score and it's respective location in the array
         printf("Highest score: %d at array element %d\n", highest, highest_location);
         //ii. Display lowest score and it's respective location in the array
         printf("Lowest score: %d at array element %d\n", lowest, lowest_location);
         //iii. Display the average score to two decimal places
         printf("Average score: %.2lf\n", average);

         //2b7. Go to step 3
    }

    //3. Terminate
    return(0);
}
