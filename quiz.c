// 24-12-2020
#include <stdio.h>


int main() {
  
    void exit();
    
    int q2,q3,q4,q5,q6,q7,q8,q9,q10,rate ;
    int x,i,ur,s,ans1,ans2,ans3,ans4,ans5;
    int ans6,ans7,ans8,ans9,ans10;
    int reset;
    
    printf("Loading Completed");
    
    for(x=0;x<6;x++)
    {
        printf(".");
    }
    i=0;
    printf("\n\n\n");
    printf("\n|     --      |-----------        /-------\n");
    printf("|    -        |          -      |/         -\n");
    printf("|   -         |          -      |            -\n");
    printf("|  -          |          -      |             -\n");
    printf("| -           |          -      |             |\n");
    printf("|-            |X---------       |             |\n");
    printf("|-            |          -      |             -");
    printf("\n| -           |          -      |            -");
    printf("\n|  -          |          -      |           -");
    printf("\n|   -         |          -      |          -");
    printf("\n|    --       |-----------       -----------");
    
    printf("\n\n\n  -Koun           Banegaaa         Droplet-PATII-");
    printf("\n\n\n   -We      Wants     To      Be     a     Droplet-ER-");
    printf("\n\n\n");
    
    
    if(i==0){
        printf("\nPress [01] to start:\n");
        scanf("%d" ,&ur);
    }
    
    switch(ur)
    {
        case 01:
            printf("\nRules given below-\n");
            printf("1.Your input recorded above.\n2.Total no. of questions :10\n3.Count your score own.\n4.You don't have any life line.\n6.If you score 10/10 you will win a water droplet..\n7.It take few seconds for exit the game if you choose [999].\n \n              --Best of Luck--\n"); printf("             ---Letsss  begin---\n\n");
            break;
        
        default:
             printf("Invalid choice");
    
    }  //rules
    printf("\nPress [02] to start... \n");
    scanf("%d",&s);
    
    
    
    
    switch(s){
        case 02:
        printf("\nQ1. Who is the founder of C language ?\n");
              
           printf("[1] - Chris Lattner.\n");
           printf("[2] - Salman Bhai.\n");
           printf("[3] - Dennis Ritchie.\n");
           printf("[4] - Brendan Eich\n");
           printf("[999] - Exit\n");
           break;  
           
          default:printf("Invalid choice");                
             
    }  //Q1
    
    scanf("\n %d" , &ans1);
    
    switch(ans1)
    {
        case 1:printf("\nWrong.");
        break;
        
        case 2:printf("\nWrong.");
        break;
        
        case 3:printf("\nCorrect.");
        break;
        
        case 4:printf("\nWorng");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice");
    }  //ans1
    
    printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
    scanf("%d" , &q2);
    
    switch(q2)
    {
      case 99:
      printf("\nQ2. If a giraffe has two eyes, a monkey has two eyes, and an elephant has two eyes, how many eyes do we have?\n\n");
              printf("[5] - 5\n");
              printf("[6] - 4\n");
              printf("[7] - 6\n");
              printf("[8] - 3\n");
              printf("[999] - Exit\n");
              break; 
              
      default:printf("Invalid choice");  
       }  //Q2
    
    scanf("\n %d" ,&ans2);
    
    switch(ans2)
    {
      
        case 5:printf("\nWrong.");
        break;
        
        case 6:printf("\nCorrect.");
        break;
        
        case 7:printf("\nWrong.");
        break;
        
        case 8:printf("\nWorng.");
        break;
      
        case 999:
          exit(0);
          break;
          
        default: printf("\nInvalid choice");
      
    }  //ans2
    
    printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf(" %d" ,&q3);
     
     switch(q3)
     {
       case 99:
       printf("\nQ3. In which date PUBG was ban first time in India ?");
       
       printf("\n[9] - 23 March 2017");
       printf("\n[10] - 21 March 2020");
       printf("\n[11] - 2 September 2020");
       printf("\n[12] - 19 September 2020\n");
       printf("\n[999] - Exit\n");
       break;
   
       default:printf("Invalid choice");
     }  //Q3
    
     scanf("\n %d" , &ans3);
    
     switch(ans3)
     {
        case 9:printf("\nWrong.");
        break;
        
        case 10:printf("\nWrong.");
        break;
        
        case 11:printf("\nCorrect.");
        break;
        
        case 12:printf("\nWorng.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice.");
      
     }  //ans3
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q4);
     
     switch(q4)
     {
       case 99:
         printf("\nQ4.What is the name of 1918 pendamic?\n");
         printf("\n[13] - Spanish Flu");
         printf("\n[14] - Chinese Flu");
         printf("\n[15] - Corona Virus");
         printf("\n[16] - BlackHole\n");  
         printf("\n[999] - Exit\n"); 
         break;
         
         default:
           printf("Invalid choice");
       
     }  //Q4
     
     scanf("\n%d" , &ans4);
     
     switch(ans4)
     {
        case 13:printf("\nCorrect.");
        break;
        
        case 14:printf("\nWrong.");
        break;
        
        case 15:printf("\nWrong.");
        break;
        
        case 16:printf("\nWorng.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice.");
     }   //ans4
        
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q5);
     
     switch(q5)
     {
          case 99:
          printf("\nQ5.When multiplied by itself,which number is equal to 12,345,678,987,654,321 ?");
          printf("\n[17] - 1,111,111");
          printf("\n[18] - 111,111,111");
          printf("\n[19] - 11,111,111,111");
          printf("\n[20] - 111,111,111,111\n");
          printf("\n[999] - Exit\n");
          break;
         
          default:
           printf("Invalid choice");
       
     }  //Q5
     
     scanf("%d" , &ans5);
     
     switch(ans5)
     {
        case 17:printf("\nWrong.");
        break;
        
        case 18:printf("\nCorrect.");
        break;
        
        case 19:printf("\nWrong.");
        break;
        
        case 20:printf("\nWorng.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice.");
        
     }  //ans5
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q6);
     
     switch(q6)
     {
      case 99:
       printf("\nQ6.Who was popularly known as 'The Walll' in 19s ?");
       printf("\n[21] - Sachin Tendulkar");
       printf("\n[22] - Master Blaster");
       printf("\n[23] - Rahul Gandhi");
       printf("\n[24] - Rahul Dravid\n");
       printf("\n[999] - Exit\n");
       break;
       
       default:
       printf("Invalid choice");
       
       }  //Q6
       
       scanf("%d", &ans6);
       
       switch(ans6)
       {
        case 21:printf("\nWrong.");
        break;
        
        case 22:printf("\nWrong.");
        break;
        
        case 23:printf("\nWrong.");
        break;
        
        case 24:printf("\nCorrect.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("Invalid choice");
       }   //ans6
        
       
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q7);
     
     switch(q7)
     {
       case 99:
         
         printf("\nQ7.What type of game you are playing right now ?");
         printf("\n[25] - RPG");
         printf("\n[26] - FPS Game");
         printf("\n[27] - QuiZ");
         printf("\n[28] - Cricket\n");  
         printf("\n[999] - Exit\n");
         break;
         
         default: 
           printf("Invalid choice");
     }  //Q7
     
     scanf("%d" , &ans7);
     
     switch(ans7)
     {
        case 25:printf("\nWrong.");
        break;
        
        case 26:printf("\nWrong.");
        break;
        
        case 27:printf("\nCorrect.");
        break;
        
        case 28:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
       
        default:
          printf("\nInvalid choice");
       
     }  //ans7
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q8);
     
     switch(q8)
     {
       case 99:
         printf("\nQ8.Who is the #1 programming language in 2020 ?");
         printf("\n[29] - Javascript");
         printf("\n[30] - HTML,CSS");
         printf("\n[31] - Python");
         printf("\n[32] - C++\n");
         printf("\n[999] - Exit\n");
         break;
         
         default:
           printf("Invalid choice");
   
     }  //Q8
     
     scanf("%d",&ans8);
     
     switch(ans8)
     {
        case 29:printf("\nWrong.");
        break;
        
        case 30:printf("\nWrong.");
        break;
        
        case 31:printf("\nCorrect.");
        break;
        
        case 32:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("\nInvalid choice");
       
     }  //ans8
     
 
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q9);
     
     switch(q9)
     {
       
         case 99:
         printf("\nQ9.Which answer in this list is correct answer to this question ?");
         printf("\n[33] - All of the above.");
         printf("\n[34] - None of the below.");
         printf("\n[35] - All of the above.");
         printf("\n[36] - One of the above.");
         printf("\n[37] - None of the above.");
         printf("\n[38] - None of the above.\n");
         printf("\n[999] - Exit\n");
         break;
         
         default:
           printf("Invalid choice");
     }  //Q9
     
     scanf("%d" , &ans9);
     
     switch(ans9)
     {
        case 33:printf("\nWrong.");
        break;
        
        case 34:printf("\nWrong.");
        break;
        
        case 35:printf("\nWrong.");
        break;
        
        case 36:printf("\nWrong.");
        break;
        
        case 37:printf("\nCorrect.");
        break;
        
        case 38:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("\nInvalid choice");
       
     }  //ans9
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q10);
     
     switch(q10)
     {
       case 99:
         printf("\nQ10.If you choose an answer for this question in random, what is the chance you will be correct ?");
         printf("\n[39] - 25 Percent");
         printf("\n[40] - 49 Percent");
         printf("\n[41] - 0 Percent");
         printf("\n[42] - 10 Percent \n");
         printf("\n[999] - Exit\n");
         break;
         
         default:
           printf("Invalid choice\n ");
     }   //Q10
     
     scanf("%d",&ans10);
     
     switch(ans10)
     {
     
        case 39:printf("\nCorrect.");
        break;
        
        case 40:printf("\nWrong.");
        break;
        
        case 41:printf("\nWrong.");
        break;
        
        case 42:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("\nInvalid choice");
     
     }  //ans10
     
     printf("\n\n\n                  !---Thanks for playing---!");
   
     printf("\n\n\nPlease rate this game.");
   
     printf("\n[55555] - 5 Star");
     printf("\n[44444] - 4 Star");
     printf("\n[33333] - 3 Star");
     printf("\n[22222] - 2 Star");
     printf("\n[11111] - 1 Star\n");
     printf("\n[999] - Exit\n");
     scanf("%d" , &rate);
      
      switch(rate)
      {
          case 55555:
          printf("Thanks for rating.");
          break;
          
          case 44444:
          printf("Thanks for rating.");
          break;
          
          case 33333:
          printf("Thanks for rating.");
          break;
          
          case 22222:
          printf("Thanks for rating.");
          break;
          
          case 11111:
          printf("Thanks for rating.");
          break;
          
          case 999:
          exit(0);
          printf("Thanks");
          break;
          
          
          default:
            printf("Invalid choice but, Thanks.");
        
      } //feedback
      
      printf("\n\n\n  -------------Completed--------------");    
      
      printf("\n\n\n       ------------The Q------------");
      printf("\n\n           Written by: Ayush Raj");
      printf("\n\n           Art Director: Ayush Raj");
      printf("\n\n          Studio Director: Ayush Raj");
      printf("\n\n         Technical Director: Ayush Raj");
      printf("\n\n   Production & Game Designer: Ayush Raj");
      printf("\n\n   Co-producer & Game Designer: Ayush Raj\n\n\n");
      
      printf("\n\n\n Press [00000] for Restart\n");
      // Cradit
         
      scanf("%d" ,&reset);
      
      switch(reset)
      {
        case 00000:
           printf("\n\n\n");
    printf("\n|     --      |-----------        /-------\n");
    printf("|    -        |          -      |/         -\n");
    printf("|   -         |          -      |            -\n");
    printf("|  -          |          -      |             -\n");
    printf("| -           |          -      |             |\n");
    printf("|-            |X---------       |             |\n");
    printf("|-            |          -      |             -");
    printf("\n| -           |          -      |            -");
    printf("\n|  -          |          -      |           -");
    printf("\n|   -         |          -      |          -");
    printf("\n|    --       |-----------       -----------");
    
    printf("\n\n\n  -Koun           Banegaaa         Droplet-PATII-");
    printf("\n\n\n   -We     Wants     To      Be     a     Droplet-ER-");
    
    printf("\n\n\n");
    
    
    if(i==0){
        printf("\nPress [01] to start:\n");
        scanf("%d" ,&ur);
    }
    
    switch(ur)
    {
        case 01:
            printf("\nRules given below-\n");
            printf("1.Your input recorded above.\n2.Total no. of questions :10\n3.Count your score own.\n4.You don't have any life line.\n6.If you score 10/10 you will win a water droplet..\n7.It take few seconds for exit the game if you choose [999].\n \n              --Best of Luck--\n"); printf("             ---Letsss  begin---\n\n");
            break;
        
        default:
             printf("Invalid choice");
    
    }
    printf("\nPress [02] to start... \n");
    scanf("%d",&s);
    
    
    
    
    switch(s){
        case 02:
        printf("\nQ1. Who is the founder of C language ?\n");
              
           printf("[1] - Chris Lattner.\n");
           printf("[2] - Salman Bhai.\n");
           printf("[3] - Dennis Ritchie.\n");
           printf("[4] - Brendan Eich\n");
           printf("[999] - Exit\n");
           break;  
           
          default:printf("Invalid choice");                
             
    }
    
    scanf("\n %d" , &ans1);
    
    switch(ans1)
    {
        case 1:printf("\nWrong.");
        break;
        
        case 2:printf("\nWrong.");
        break;
        
        case 3:printf("\nCorrect.");
        break;
        
        case 4:printf("\nWorng");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice");
    }
    
    printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
    scanf("%d" , &q2);
    
    switch(q2)
    {
      case 99:
      printf("\nQ2. If a giraffe has two eyes, a monkey has two eyes, and an elephant has two eyes, how many eyes do we have?\n\n");
              printf("[5] - 5\n");
              printf("[6] - 4\n");
              printf("[7] - 6\n");
              printf("[8] - 3\n");
              printf("[999] - Exit\n");
              break; 
              
      default:printf("Invalid choice");   }
    
    scanf("\n %d" ,&ans2);
    
    switch(ans2)
    {
      
        case 5:printf("\nWrong.");
        break;
        
        case 6:printf("\nCorrect.");
        break;
        
        case 7:printf("\nWrong.");
        break;
        
        case 8:printf("\nWorng.");
        break;
      
        case 999:
          exit(0);
          break;
          
        default: printf("\nInvalid choice");
      
    }
    
    printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf(" %d" ,&q3);
     
     switch(q3)
     {
       case 99:
       printf("\nQ3. In which date PUBG was ban first time in India ?");
       
       printf("\n[9] - 23 March 2017");
       printf("\n[10] - 21 March 2020");
       printf("\n[11] - 2 September 2020");
       printf("\n[12] - 19 September 2020\n");
       printf("\n[999] - Exit\n");
       break;
   
       default:printf("Invalid choice");
     }
    
     scanf("\n %d" , &ans3);
    
     switch(ans3)
     {
        case 9:printf("\nWrong.");
        break;
        
        case 10:printf("\nWrong.");
        break;
        
        case 11:printf("\nCorrect.");
        break;
        
        case 12:printf("\nWorng.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice.");
      
     }
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q4);
     
     switch(q4)
     {
       case 99:
         printf("\nQ4.What is the name of 1918 pendamic?\n");
         printf("\n[13] - Spanish Flu");
         printf("\n[14] - Chinese Flu");
         printf("\n[15] - Corona Virus");
         printf("\n[16] - BlackHole\n");  
         printf("\n[999] - Exit\n"); 
         break;
         
         default:
           printf("Invalid choice");
       
     }
     
     scanf("\n%d" , &ans4);
     
     switch(ans4)
     {
        case 13:printf("\nCorrect.");
        break;
        
        case 14:printf("\nWrong.");
        break;
        
        case 15:printf("\nWrong.");
        break;
        
        case 16:printf("\nWorng.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice.");
     }
     
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q5);
     
     switch(q5)
     {
          case 99:
          printf("\nQ5.When multiplied by itself,which number is equal to 12,345,678,987,654,321 ?");
          printf("\n[17] - 1,111,111");
          printf("\n[18] - 111,111,111");
          printf("\n[19] - 11,111,111,111");
          printf("\n[20] - 111,111,111,111\n");
          printf("\n[999] - Exit\n");
          break;
         
          default:
           printf("Invalid choice");
       
     }
     
     scanf("%d" , &ans5);
     
     switch(ans5)
     {
        case 17:printf("\nWrong.");
        break;
        
        case 18:printf("\nCorrect.");
        break;
        
        case 19:printf("\nWrong.");
        break;
        
        case 20:printf("\nWorng.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default: printf("\nInvalid choice.");
        
     }
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q6);
     
     switch(q6)
     {
      case 99:
       printf("\nQ6.Who was popularly known as 'The Walll' in 19s ?");
       printf("\n[21] - Sachin Tendulkar");
       printf("\n[22] - Master Blaster");
       printf("\n[23] - Rahul Gandhi");
       printf("\n[24] - Rahul Dravid\n");
       printf("\n[999] - Exit\n");
       break;
       
       default:
       printf("Invalid choice");
       
       }
       
       scanf("%d", &ans6);
       
       switch(ans6)
       {
        case 21:printf("\nWrong.");
        break;
        
        case 22:printf("\nWrong.");
        break;
        
        case 23:printf("\nWrong.");
        break;
        
        case 24:printf("\nCorrect.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("Invalid choice");
       }
     
       
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q7);
     
     switch(q7)
     {
       case 99:
         
         printf("\nQ7.What type of game you are playing right now ?");
         printf("\n[25] - RPG");
         printf("\n[26] - FPS Game");
         printf("\n[27] - QuiZ");
         printf("\n[28] - Cricket\n");  
         printf("\n[999] - Exit\n");
         break;
         
         default: 
           printf("Invalid choice");
     }
     
     scanf("%d" , &ans7);
     
     switch(ans7)
     {
        case 25:printf("\nWrong.");
        break;
        
        case 26:printf("\nWrong.");
        break;
        
        case 27:printf("\nCorrect.");
        break;
        
        case 28:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
       
        default:
          printf("\nInvalid choice");
       
     }
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q8);
     
     switch(q8)
     {
       case 99:
         printf("\nQ8.Who is the #1 programming language in 2020 ?");
         printf("\n[29] - Javascript");
         printf("\n[30] - HTML,CSS");
         printf("\n[31] - Python");
         printf("\n[32] - C++\n");
         printf("\n[999] - Exit\n");
         break;
         
         default:
           printf("Invalid choice");
   
     }
     
     scanf("%d",&ans8);
     
     switch(ans8)
     {
        case 29:printf("\nWrong.");
        break;
        
        case 30:printf("\nWrong.");
        break;
        
        case 31:printf("\nCorrect.");
        break;
        
        case 32:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("\nInvalid choice");
       
     }
     
 
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q9);
     
     switch(q9)
     {
       
         case 99:
         printf("\nQ9.Which answer in this list is correct answer to this question ?");
         printf("\n[33] - All of the above.");
         printf("\n[34] - None of the below.");
         printf("\n[35] - All of the above.");
         printf("\n[36] - One of the above.");
         printf("\n[37] - None of the above.");
         printf("\n[38] - None of the above.\n");
         printf("\n[999] - Exit\n");
         break;
         
         default:
           printf("Invalid choice");
     }
     
     scanf("%d" , &ans9);
     
     switch(ans9)
     {
        case 33:printf("\nWrong.");
        break;
        
        case 34:printf("\nWrong.");
        break;
        
        case 35:printf("\nWrong.");
        break;
        
        case 36:printf("\nWrong.");
        break;
        
        case 37:printf("\nCorrect.");
        break;
        
        case 38:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("\nInvalid choice");
       
     }
     
     printf("\n\nReady for next question?\n[99] - Yes\n[No] - Not available.\n");
    
     scanf("\n%d" ,&q10);
     
     switch(q10)
     {
       case 99:
         printf("\nQ10.If you choose an answer for this question in random, what is the chance you will be correct ?");
         printf("\n[39] - 25 Percent");
         printf("\n[40] - 49 Percent");
         printf("\n[41] - 0 Percent");
         printf("\n[42] - 10 Percent \n");
         printf("\n[999] - Exit\n");
         break;
         
         default:
           printf("Invalid choice\n ");
     }
     
     scanf("%d",&ans10);
     
     switch(ans10)
     {
     
        case 39:printf("\nCorrect.");
        break;
        
        case 40:printf("\nWrong.");
        break;
        
        case 41:printf("\nWrong.");
        break;
        
        case 42:printf("\nWrong.");
        break;
        
        case 999:
          exit(0);
          break;
        
        default:
          printf("\nInvalid choice");
     
     }
     
     printf("\n\n\n                  !---Thanks for playing---!");
   
     printf("\n\n\nPlease rate this game.");
   
     printf("\n[55555] - 5 Star");
     printf("\n[44444] - 4 Star");
     printf("\n[33333] - 3 Star");
     printf("\n[22222] - 2 Star");
     printf("\n[11111] - 1 Star\n");
     printf("\n[999] - Exit\n");
     scanf("%d" , &rate);
      
      switch(rate)
      {
          case 55555:
          printf("Thanks for rating.");
          break;
          
          case 44444:
          printf("Thanks for rating.");
          break;
          
          case 33333:
          printf("Thanks for rating.");
          break;
          
          case 22222:
          printf("Thanks for rating.");
          break;
          
          case 11111:
          printf("Thanks for rating.");
          break;
          
          case 999:
          exit(0);
          printf("Thanks");
          break;
            
          default:
            printf("Invalid choice but, Thanks.");
        
      } 
      
      printf("\n\n\n  -------------Completed--------------");    
      
      printf("\n\n\n       ------------The Q------------");
      printf("\n\n           Written by: Ayush Raj");
      printf("\n\n           Art Director: Ayush Raj");
      printf("\n\n          Studio Director: Ayush Raj");
      printf("\n\n         Technical Director: Ayush Raj");
      printf("\n\n   Production & Game Designer: Ayush Raj");
      printf("\n\n   Co-producer & Game Designer: Ayush Raj\n\n\n");      
        
        }  //CRADIT
          return 0;
        }   //MAIN CLOSE