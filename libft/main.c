#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int		main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	alarm(5);
	if (!(mem = malloc(sizeof(*mem) * 15)) || argc == 1)
		return (0);
	memset(mem, 'j', 15);
	if ((arg = atoi(argv[1])) == 1)
	{
		if (mem != ft_memset(mem, 'c', 5))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
	else if (arg == 2)
	{
		if (mem != ft_memset(mem, 'c', 14))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
	else if (arg == 3)
	{
		if (mem != ft_memset(mem, '\n', 6))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
	else if (arg == 4)
	{
		if (mem != ft_memset(mem, '\0', 1))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
    free(mem);
	return (0);
}



//                                        strnstr

// int main()
// {
// 	const char *str = "find the needle in the haystack";
// 	const char *substr = "haystck";
// 	char *result = ft_strnstr(str, substr, 40);
// 	if (result)
// 	{
// 		printf("found substr: %s", substr);
// 	}
// 	else
// 		printf("substring not found");
// }


/**#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>



// // pre-processor -> compilation -> linker
//     .c.preprocessed    .o             a.out/libft.a

// int main()
// {
// 	char s[32];
// 	ft_strcpy(s, "hello there");
// 	printf("%d\n", ft_strlen(s));
// 	return 0;
// }



                                                       //ft_isascii

// int main()
// {
    
//     int val;

//     val = -1;
//     printf("%d\n", ft_isascii(val));

//     val = 0;
//     printf("%d\n", ft_isascii(val));

//     val = 65;
//     printf("%d\n", ft_isascii(val));

//     val = 127;
//     printf("%d\n", ft_isascii(val));

//     val = 128;
//     printf("%d\n", ft_isascii(val));

//     return 0;
// }



                                                        //ft_strchr
// int main()
// {
//     const char *s = "hello";

//     printf("  strchr:    %s\n", strchr(s, 'e'));
//     printf("mine = %s\n", ft_strchr(s, 'e'));

//     printf("  strchr:    %s\n", strchr(s, '\0'));
//     printf(" mine =  %s\n", ft_strchr(s, '\0'));

//     printf("  strchr:    %s\n", strchr(s, 'z'));
//     printf(" mine =  %s\n", ft_strchr(s, 'z'));

//     printf("  strchr:    %p\n", (void *)strchr(s, '\0'));
//     printf(" mine =  %p\n", (void *)ft_strchr(s, '\0'));

//     return 0;
// }





                                          //ft_strncmp

// int main(void)
// {
//     const char *s1 = "HelloWorld";
//     const char *s2 = "HelloThere";
//     int n;

//     n = 5;
//     printf("  strncmp:    %d\n", strncmp(s1, s2, n));
//     printf(" mine %d\n\n", ft_strncmp(s1, s2, n));

//     n = 7;
//     printf("  strncmp:    %d\n", strncmp(s1, s2, n));
//     printf("  mine %d\n\n", ft_strncmp(s1, s2, n));

//     n = 0;
//     printf("  strncmp:    %d\n", strncmp(s1, s2, n));
//     printf("  mine %d\n\n", ft_strncmp(s1, s2, n));

//     n = 20;
//     printf("  strncmp:    %d\n", strncmp(s1, s2, n));
//     printf("  mine: %d\n", ft_strncmp(s1, s2, n));

//     return 0;
// }






                                               //ft_atoi


// int main(void)
// {
//     printf("Test 1: \"42\"\n");
//     printf("  atoi:    %d\n", atoi("42"));
//     printf("  ft_atoi: %d\n\n", ft_atoi("42"));

//     printf("Test 2: \"   1337\"\n");
//     printf("  atoi:    %d\n", atoi("   1337"));
//     printf("  ft_atoi: %d\n\n", ft_atoi("   1337"));

//     printf("Test 3: \"+123\"\n");
//     printf("  atoi:    %d\n", atoi("+123"));
//     printf("  ft_atoi: %d\n\n", ft_atoi("+123"));

//     printf("Test 4: \"-456\"\n");
//     printf("  atoi:    %d\n", atoi("-456"));
//     printf("  ft_atoi: %d\n\n", ft_atoi("-456"));

//     printf("Test 5: \"42abc\"\n");
//     printf("  atoi:    %d\n", atoi("42abc"));
//     printf("  ft_atoi: %d\n\n", ft_atoi("42abc"));

//     printf("Test 6: \"abc42\"\n");
//     printf("  atoi:    %d\n", atoi("abc42"));
//     printf("  ft_atoi: %d\n\n", ft_atoi("abc42"));

//     printf("Test 7: \"   -0\"\n");
//     printf("  atoi:    %d\n", atoi("   -0"));
//     printf("  ft_atoi: %d\n\n", ft_atoi("   -0"));

//     printf("Test 8: \"\"\n");
//     printf("  atoi:    %d\n", atoi(""));
//     printf("  ft_atoi: %d\n\n", ft_atoi(""));

//     return 0;
// }






                                                     //ft_strdup

// int	main(void)
// {
// 	const char	*original = "Hello, 42!";
// 	char		*copy;

// 	copy = ft_strdup(original);

// 	if (copy == NULL)
// 	{
// 		printf("ft_strdup failed: malloc returned NULL\n");
// 		return (1);
// 	}

// 	printf("Original: %s\n", original);
// 	printf("Copy:     %s\n", copy);

// 	// Confirm different memory addresses
// 	if (copy != original)
// 		printf("Memory OK: strings are in different locations\n");
// 	else
// 		printf("Memory ERROR: strings share the same address\n");

// 	free(copy); // Always free memory allocated with malloc
// 	return (0);
// }





                                               //ft_strrchr


// int main(void)
// {
// 	const char	*str = "hello world";

// 	// Test 1: last occurrence of 'l'
// 	char *result1 = ft_strrchr(str, 'l');
// 	printf("Test 1 - ft_strrchr: %s\n", result1);
// 	printf("Test 1 -    strrchr: %s\n", strrchr(str, 'l'));

// 	// Test 2: character not in string
// 	char *result2 = ft_strrchr(str, 'z');
// 	printf("Test 2 - ft_strrchr: %s\n", result2 ? result2 : "NULL");
// 	printf("Test 2 -    strrchr: %s\n", strrchr(str, 'z') ? 
strrchr(str, 'z') : "NULL");

// 	// Test 3: null terminator
// 	char *result3 = ft_strrchr(str, '\0');
// 	printf("Test 3 - ft_strrchr points to: %p (should be at end of string)
\n", (void *)result3);
// 	printf("Test 3 -    strrchr points to: %p\n", (void *)strrchr(str, '\0'));

// 	// Test 4: first character
// 	char *result4 = ft_strrchr(str, 'h');
// 	printf("Test 4 - ft_strrchr: %s\n", result4);
// 	printf("Test 4 -    strrchr: %s\n", strrchr(str, 'h'));

// 	return 0;
// }






                               //ft_bzero

// int main(void)
// {
//     char buffer1[20] = "Hello, World!";
//     char buffer2[20] = "Hello, World!";

//     printf("Before ft_bzero:\n");
//     printf("buffer1: %s\n", buffer1);
//     printf("buffer2: %s\n", buffer2);

//     ft_bzero(buffer1, 6);    // zero out first 6 bytes in buffer1
//     bzero(buffer2, 6);       // zero out first 6 bytes in buffer2 
(standard libc)

//     printf("\nAfter ft_bzero (buffer1):\n");
//     for (int i = 0; i < 20; i++)
//         printf("%02x ", (unsigned char)buffer1[i]);
//     printf("\n");

//     printf("After bzero (buffer2):\n");
//     for (int i = 0; i < 20; i++)
//         printf("%02x ", (unsigned char)buffer2[i]);
//     printf("\n");

//     return 0;
// }







                                        //ft_strcpy

// int main(void)
// {
//     char src[] = "Hello, bunny!";
//     char dest[50];  // Make sure the destination has enough space

//     ft_strcpy(dest, src);

//     printf("Source:      %s\n", src);
//     printf("Destination: %s\n", dest);

//     return 0;
// }





                            //ft_itoa

int main()
{
	printf("%s\n", ft_itoa(247));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-247));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(156));
	printf("%s\n", ft_itoa(-0));

}






                            //ft_strtrim
					
// int main()
// {
// 	printf("%s", ft_strtrim("==hello==", "="));
// }





 


                                         //ft_split 


// int main(void)
// {
//     char **result;
//     char *str = "Hello,42,World,this,is,a,test";
//     char sep = ',';

//     printf("Splitting string: \"%s\" with separator '%c'\n", str, sep);
//     result = ft_split(str, sep);
//     if (!result)
//     {
//         printf("ft_split returned NULL\n");
//         return (1);
//     }

//     int i = 0;
//     while (result[i])
//     {
//         printf("result[%d] = \"%s\"\n", i, result[i]);
//         i++;
//     }

//     free_split(result);

//     // Another test with spaces
//     str = "   split   this   properly   ";
//     sep = ' ';
//     printf("\nSplitting string: \"%s\" with separator '%c'\n", str, sep);
//     result = ft_split(str, sep);
//     if (!result)
//     {
//         printf("ft_split returned NULL\n");
//         return (1);
//     }

//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d] = \"%s\"\n", i, result[i]);
//         i++;
//     }

//     free_split(result);

//     return (0);
// } **/