#include <stdio.h>
#include <string.h>

char rights[101];
char* count(int n,char *s)
{
    int counts = 0;
    for(int i = 0;i < n;i++)
    {
        
        char ss = s[i];
        for(int ii = i+1;ii < n;ii++)
        {
            
            if(s[ii] == ss)
            {
                
                rights[counts] = ss ;
                counts++;
                i = ii;
                break;
            
            }
            
        }
        
        
        
    }




    return rights;
}




int main()
{
    int t = 0;
    scanf("%d",&t);

    for(int i = 0;i < t;i++)
    {
        
        int n = 0;
        scanf("%d",&n);
        char s[100];
        scanf("%s",s);
        
        printf("%s\n",count(n,s));
        memset(rights, 0, sizeof(rights));
    }
    


    return 0;
}