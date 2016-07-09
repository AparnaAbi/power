# power
#include <stdio.h>

 main()
{
    int base,power;
    long long ans=1;
    scanf("%d",&base);
   scanf("%d",&power);
    while(power!=0)
    {
        ans*=base;
        --power;
    }
    printf("%lld",ans);

}
