#include <stdio.h>
#include <assert.h>
void *my_memmov(void *dest,void *src,int n)
{
	assert((dest != NULL) && (src != NULL));
	assert(n>0);

	char *d=(char *)dest;
	char *s=(char *)src;
	if(d <= s || d>=(s+n))
	{
		while(n--)
			*d++=*s++;
	}
	else 
	{
		d+=n-1;
		s+=n-1;
		while(n--)
			*d--=*s--;
	}
	return dest;
}

void *my_memcpy(void *dest,void *src,int n)
{
	assert((dest != NULL) && (src != NULL));
	assert(n>0);

	char *d=(char *)dest;
	char *s=(char *)src;
	while(n--)
	{
		*d++=*s++;
	}
	return dest;
}

int main(int argc, const char *argv[])
{
	char a[128];
	char str[]="helloworld!";
	my_memcpy(a,str,2);
	printf("%s\n",a);
	return 0;
}
