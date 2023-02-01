#include"myheader.h"
int i =-1;
int arr[SIZE];
int main()
{
        while(1)
        {
        	int opt;
                printf("menu\n 0.exit\n 1.push\n 2.pop\n 3.display\n");
                printf("select the option\n");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0:exit(0);
                               break;
                        case 1:
                               push();
                               break;
                        case 2:
                               pop();
                               break;
                        case 3:
                               display();
                               break;
               }
        }
}

