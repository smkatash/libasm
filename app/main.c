# include <stdio.h>
# include "include/libasm.h"
# include <string.h>
# include <assert.h>
# include <errno.h>
# include <unistd.h>
# include <stdio.h> 
# include <fcntl.h>
# include <stdlib.h>

#define TEST_STRING "42424242424242424242424242\n" 

void    ft_strlen_test(void) {
	char *str = "Hello\n";
	size_t  sizeA = ft_strlen(str);
	size_t  sizeB = strlen(str);
	assert(sizeA == sizeB);

	str = "42424242424242424242424242";
	sizeA = ft_strlen(str);
	sizeB = strlen(str);
	assert(sizeA == sizeB);
}

void    ft_strcmp_test(void) {
	printf("%d\n", strcmp("Hello", "Hel"));
	printf("%d\n", strcmp("Hel", "Hello"));
	printf("%d\n", strcmp("Hello", "Hello"));

	printf("%d\n", ft_strcmp("Hello", "Hel"));
	printf("%d\n", ft_strcmp("Hel", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "Hello"));
}

void    ft_strcpy_test(void) {
	char src[6] = "Hello";
	char dst1[6];
	char dst2[6];

	printf("%s\n", strcpy(dst1, src));
	printf("%s\n", ft_strcpy(dst2, src));
	assert(strcmp(strcpy(dst1, src), ft_strcpy(dst2, src)) == 0);
}

// void    ft_strdup_test(void) {
//     char src[6] = "Hello";
//     char *dest1 = strdup(src);
//     char *dest2 = ft_strdup(src);

//     printf("%s\n", dest1);
//     printf("%s\n", dest2);
//     assert(strcmp(dest1, dest2) == 0);
//     assert(strlen(dest1) == strlen(dest2));
// }

void    ft_write_test() {
	size_t bytes; 
	size_t test_bytes; 
 
	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); 
	if (fd < 0) 
	{ 
		perror("r1"); 
		exit(1); 
	}
	bytes = write(fd, TEST_STRING, strlen(TEST_STRING)); 
	printf("called write(% d, \"hello geeks\\n\", %ld)."
		" It returned %ld\n", fd, strlen(TEST_STRING), bytes); 
	close(fd);

	fd = open("ft_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); 
	if (fd < 0) 
	{ 
		perror("r1"); 
		exit(1); 
	}
	
	test_bytes = ft_write(fd, TEST_STRING, strlen(TEST_STRING)); 
	printf("called write(% d, \"hello geeks\\n\", %ld)."
		" It returned %ld\n", fd, strlen(TEST_STRING), test_bytes); 
	close(fd);
	assert(bytes == test_bytes);
}

void    ft_read_test() {

}

int main(void) {
	ft_strlen_test();
	ft_strcmp_test();
	ft_strcpy_test();
	//ft_strdup_test();
	ft_write_test();
	ft_read_test();
}
