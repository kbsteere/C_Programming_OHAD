/* sizeof.c Program that informs the user of the size of C variables 
   had to change %d to %zu because of a compile error*/
#include <stdio.h>

int main(void)
{
	printf("\n char			is %zu bytes", sizeof( char ));
	printf("\n int			is %zu bytes", sizeof( int ));
	printf("\n short			is %zu bytes", sizeof( short ));
	printf("\n long			is %zu bytes", sizeof( long ));
	printf("\n long long		is %zu bytes", sizeof( long long ));
	printf("\n unsigned char		is %zu bytes", sizeof( unsigned char ));
	printf("\n unsigned int		is %zu bytes", sizeof( unsigned int ));
	printf("\n unsigned short		is %zu bytes", sizeof( unsigned short ));
	printf("\n unsigned long		is %zu bytes", sizeof( unsigned long ));
	printf("\n unsigned long long	is %zu bytes", sizeof( unsigned long long ));
	printf("\n float			is %zu bytes", sizeof( float ));
	printf("\n double			is %zu bytes", sizeof( double ));
	printf("\n long double		is %zu bytes", sizeof( long double ));
	printf("\n");
	
	return 0;
}
