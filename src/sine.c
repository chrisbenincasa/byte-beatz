#include <stdio.h>
main(t){unsigned int u;for(t=u=85;;t+=u>>2,u-=t>>2);putchar(t+128);}