#include <stdio.h>
#include <string.h>

int main(void) 
{
  char choice[20];
  char cont=1;
  int course=1;
  /*course -1 died, not complete the game
    course 0 survived but lost
    course 1+ won
  */
  
  printf("WELCOME TO TREASURE ISLAND GAME!\n\nYou just woke up in a dark dungeons after being captured by aborigine canibals of the treasure island, where you came with your expedition to search for the biggest diamond on Earth, that the tribe is said to possess.");
  while(cont)
  {
    
    printf("\nIn the dark you see outlines of 3 doors, one is RED, second is BLUE and the other is GOLDEN. Better run, you can hear the canibals coming back. Which door do you go through? ");
    scanf("%s", choice);
    if((strncmp("r", choice, 1)==0)||(strncmp("R", choice, 1)==0))
    {
      printf("\nYou chose the red door! You entered a room... in the dark of the room you see a huge grizzly eating some fruits, it has not seen you yet...There is a hole at the end of the room, which probably leads to the exit. What do you do? RUN to the exit or HIDE behind a pile of rocks? ");
      scanf("%s", choice);

        if((strncmp("r", choice, 1)==0)||(strncmp("R", choice, 1)==0))
        {
            printf("\nYou chose to run. Not very lucky choice. The grizzly could hear you and teared you to pieces alive.\nWanna go BACK to 3 doors or EXIT the game? ");
            
            course++;
            scanf("%s", choice);
            if((strncmp("e", choice, 1)==0)||(strncmp("E", choice, 1)==0))
            {
            cont=0;
            course=-1;
            }
        }
        else
        {
            printf("\nYou chose to hide! Good choice! Fed grizzly fell asleep in few minutes and you could walk past him to the exit without any trouble. ");
            cont=0;
        }
    }
    else if((strncmp("g", choice, 1)==0)||(strncmp("G", choice, 1)==0))
    {
        printf("\nYou walked through the gold door and entered a temple, where the aborigines burried their elderly. The tombs are probably full of gold and jewelry... Do you want to OPEN them or CONTINUE your way? ");
        scanf("%s", choice);
        if((strncmp("o", choice, 1)==0)||(strncmp("O", choice, 1)==0))
        {
            printf("\nAn old spell protecting the dead punished your greed. The temple collapsed and huge stones burried you inside it forever. ");
            printf("Wanna go BACK to 3 doors or EXIT the game? ");
            course++;
            scanf("%s", choice);
            if((strncmp("e", choice, 1)==0)||(strncmp("E", choice, 1)==0))
            {
                cont=0;
                course=-1;
            }
        }
        else 
        {
            printf("\nYou chose to continue through the temple! Good choice, scarcely had you left, could you hear the temple collapsed.");
            cont=0;
        }
    }
    else
    {
      printf("\nYou walked through the blue door. You frightened some bats living in this chamber, but otherwise, there is nothing harmful. You see a hole at the end. Hurry up! ");
      cont=0;
    }
  }
  if(course==-1)
  {
      printf("\nYou failed! Doesn't matter, you may be luckier next time");
      return 0;
  }
  if(cont==0)
  {
    cont++;
  }
  while(cont)

  {
        printf("\nYou entered a tunnel, you can see there is also a ledder. Do you want to use the LEDDER or continue through the TUNNEL?  ");
        scanf("%s", choice);
        if((strncmp("L", choice, 1)==0)||(strncmp("l", choice, 1)==0))
        {
            printf("\nYou can see the light and breath fresh air. You escaped the dungeons, although you did not find the diamond, you can run AWAY, save your life and forget all these horrors, or go BACK and search for the diamond. What do you do? ");
            scanf("%s", choice);
            if((strncmp("a", choice, 1)==0)||(strncmp("A", choice, 1)==0))
            {
                course=0;
                cont=0;
            }
        }
        else
            {
                printf("\nYou continue through the tunnel and come to a crossroad. ");
                 while(cont)
                 {
                    printf("\nYou can go to the LEFT or RIGHT. From the left you hear some weird noises. While in the right passage is dead silence. Where do you go? ");
                    scanf("%s", choice);
                    if((strncmp("l", choice, 1)==0)||(strncmp("L", choice, 1)==0))
                    {
                        printf("\nYou entered a chamber. Now you see where all the howling, squealing and growling noises came from. There are 2 badly injured lions fighting each other. You can also see, that behind them, on a pedastal there is a giant radiating diamond. ");
                            while(cont)
                            {
                                printf("What do you choose? Try to FINISH the lions off or to QUIETLY take the diamond and run away? ");
                                scanf("%s", choice);
                                if((strncmp("f", choice, 1)==0)||(strncmp("F", choice, 1)==0))
                                {
                                    printf("\nYou underestimated the situation, the lions were not so badly injured that they could not kill you. You died. Wanna go BACK to the tunnel, or EXIT the game? ");
                                
                                    course++;
                                    scanf("%s", choice);
                                    if((strncmp("e", choice, 1)==0)||(strncmp("E", choice, 1)==0))
                                    {
                                        cont=0;
                                        course=-1;
                                    }

                                }
                                else
                                {
                                    cont=0;
                                }
                                
                            }
                    }
                    else
                    {
                        printf("\nYou entered an empty dark chamber, it seems there is nothing but peaceful silence. Until... you look up... there is a car-sized spider coming down for you... ");
                        printf("\nYou died. Wanna go BACK to the crossroad, or EXIT the game? ");
                        scanf("%s", choice);
                        if((strncmp("e", choice, 1)==0)||(strncmp("E", choice, 1)==0))
                        {
                            cont=0;
                            course=-1;
                        }
                    }
                 }
            }
        
  }
  printf("===============================================================================\n");
  if(course==-1)
  {
      printf("\nYou failed! Doesn't matter, you may be luckier next time");
  }
  else if(course==0)
  {
      printf("\nYou did not find the diamond but at least survived. Not bad!");
  }
  else if (course>=1 && course<3)
  {
      printf("\nYOU DID IT! You took the diamond and got away, sold the diamond to a European jewelry collector and now you are a well deserved millionare! Congrats, you won in just %d trials. Great job!",course );
  }
  else
  {
    printf("\nYou took the diamond and got away, sold the diamond to a European jewelry collector and now you are a well deserved millionare! You won in %d trials. Not best, but at least you did not give up",course );  
  }
  
    
  
  
  return 0;
}