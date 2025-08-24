#include <stdio.h>

int main(){

    char questions[2][50] = {"What is the capital of United States?",
                             "Who is the prime minister of india?",
                            
    };

    char options[4][100] = {"1. Washington \n2. Texas \n3. Vatican \n4. New York",
                           "1. Rahul Gandhi \n2. Narendra Mode \n3. Dropadi Murmu \n4. Amit shah "                        
    };

    char answers[] = {'A', 'B'};
    int responses[] = {0};

    
    int queSize = sizeof(questions) / sizeof(questions[0]);
    printf("%d",queSize);
    
    for(int i = 0; i < queSize; i++){
        printf("%s\n",questions[i]);
        printf("%s\n",options[i]);
        // printf("%c\n",answers[0]);
        scanf("%d",&responses[i]);

    }
    printf("\n%d\n",sizeof(responses)/sizeof(responses[0]));

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("\n%d\n",responses[i]);
    // }
    

    // for (int i = 0; i < sizeof(responses)/sizeof(responses[0]); i++)
    // {
    //     printf("The answer of %d question is: %d\n",i+1,responses[i]);
    // }
    


}