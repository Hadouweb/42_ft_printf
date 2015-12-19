#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <sys/types.h>
#include <inttypes.h>
#ifndef CAPTURE_H
# define CAPTURE_H

typedef struct s_cap_stdout
{
	int target_fd;
	int saved_fd;
	int out_pipe[2];
	char buffer[10000];

} t_cap_stdout;

void			capture_stdout(void);
char			*capture_stdout_get_buffer(void);
void			capture_stdout_destroy(void);
void			capture_close_saved_stdout(void);
#endif
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MEGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define WHITE  "\x1B[37m"
#define RESET "\033[0m"
#define MAX_OF(type) \
    (((type)(~0LLU) > (type)((1LLU<<((sizeof(type)<<3)-1))-1LLU)) ? (long long unsigned int)(type)(~0LLU) : (long long unsigned int)(type)((1LLU<<((sizeof(type)<<3)-1))-1LLU))
#define MIN_OF(type) \
    (((type)(1LLU<<((sizeof(type)<<3)-1)) < (type)1) ? (long long int)((~0LLU)-((1LLU<<((sizeof(type)<<3)-1))-1LLU)) : 0LL)
#define SUCCESS printf(GREEN "test ok\n\n" RESET); \
				score++;
#define FAIL printf(RED "test fail\n\n" RESET);
#define TEST(f_, ...) \
					printf(YELLOW "===== TEST %d (voir ligne : %d) =====\n" RESET, ++t, __LINE__); \
					printf("vrai > "); \
					printf_ret = printf((f_), ##__VA_ARGS__); \
					ft_printf("faux > "); \
					ft_printf_ret = ft_printf((f_), ##__VA_ARGS__); \
					capture_stdout(); \
					printf_ret = printf((f_), ##__VA_ARGS__); \
					printf_out = strdup(capture_stdout_get_buffer()); \
					ft_printf_ret = ft_printf((f_), ##__VA_ARGS__); \
					ft_printf_out = strdup(capture_stdout_get_buffer()); \
					capture_stdout_destroy(); \
					if (memcmp(printf_out, ft_printf_out, strlen(printf_out) + 1) == 0) \
					{ \
						SUCCESS; \
					} \
					else \
					{ \
						FAIL; \
					} \
					free(ft_printf_out); \
					free(printf_out);

int main()
{
	setlocale (LC_ALL, "");
	//char test[70] = "%ll# +++-+-- h000%%%%  %% %%% 55..5%512.3.5.28d\n";
	//printf(test); printf("%s", test);
	//printf("%ll# +++-+-- h012.3.5.2812.3.5.280012.3.5.28d\n", 42);
	int 			t = 0;
	int 			printf_ret = 0;
	char			*printf_out;
	int				ft_printf_ret = 0;
	char			*ft_printf_out;
	size_t score = 0;

	char a = 0;
	char b = (char)564;
	int i = 0x80000000;
	int j = 0x7FFFFFFF;
	int k = 0x7fc00000;
	int l = 0xffc00000;
	char buf[20] = "salut la famille";
	wchar_t wbuf[15] = L"salut gérard.";
	wchar_t wbuf1[50] = L"米∆ࠀ¬πππ§ª∆åœ÷≥≤«»‘–ª•¶∞¢£™åµ˜ß¡ﷰ’";
	wchar_t wbuf2[30] = L"我是一只猫。";
	wchar_t wbuf3[50] = L"言語のプログラミングについてなのですが";
	wchar_t wbuf4[100] = L"※正しい回答をされていても、そうやって人を見下しているようではもったいないです。";
	wchar_t w = (wchar_t)0x206120;
	wchar_t wbuf5[200] = L"⋱⋰⋱⋰★⋰l .'☻♥☻.⋱★⋰o ./♥ ./█ .⋱⋰★⋰ѵ .. . . .⋱⋰⋱⋰★⋰e";
	wchar_t wbuf6[200] = {0x206120, 0x7FFFFFFF, 0x80000000};

	TEST("%d\n", 42);
	TEST("{%1000d}\n", i);
	TEST("{% 0000000000000000000000000000.000000000000000000000000001d}\n", 42);
	TEST("{%00000000000000000000000000.1d}\n", -42);
	TEST("{%.42d}\n", -j);
	TEST("{%050d}\n", j);
	TEST("%#50x\n", j);
	TEST("%+50d\n", i);
	TEST("#%-50d#\n", i);
	TEST("#%-50d#\n", -i);
	TEST("#%-20d#\n", i);
	TEST("#% 20d#\n", i);
	TEST("#%0.20d#\n", i);
	TEST("#%.12d#\n", j);
	TEST("{% 12.12d}\n", j);
	TEST("{%+12.12d}\n", j);
	TEST("{%-12.12d}\n", j);
	TEST("{%--12.12d}\n", -j);
	TEST("{%  --12.0d}\n", j);
	TEST("{%  --   12.0d}\n", j);
	TEST("{%  --   .0d}\n", INT_MAX)
	TEST("{%  --   .0d}\n", -i);
	TEST("{% 0.0d}\n", j);
	TEST("{% 0.0d}\n", j);
	TEST("{% -30.10d}\n", j);
	TEST("{% -                      --.10d}\n", j);
	TEST("{% -30.100ld}\n", __LONG_MAX__);
	TEST("{%.30ld}\n", __LONG_MAX__);
	TEST("{%30.100lld}\n", __LONG_LONG_MAX__);
	TEST("{% 30lld}\n", __LONG_LONG_MAX__);
	TEST("{% 30lld}\n", LONG_LONG_MIN);
	TEST("{%.30ld}\n", LONG_MIN);
	TEST("%1p, %p, %20p\n", NULL, NULL, NULL);
	TEST("%1p, %p, %20p\n", &i, &i, &i);
	TEST("{%s%s%s%s%s%s\n", "\0", NULL, "", &a, &b, "}");
	TEST("{%.50s}\n", buf);
	TEST("111%s333%s555\n", "222", "444");
	TEST("{%30s}\n", buf);
	TEST("{%.05s}\n", buf);
	TEST("{%S%S%S\n", L"\0", L"", L"}");
	TEST("{%S}\n", wbuf);
	TEST("{%.50ls}\n", wbuf);
	TEST("{%50S}\n", wbuf1);
	TEST("{%5S}\n", wbuf2);
	TEST("{%5C}\n", *wbuf2);
	TEST("{%5C}\n", w);
	TEST("pi ~= %10.5f\n", 4 * atan (1.0));
	TEST("pi ~= %.5f\n", 4 * atan (1.0));
	TEST("pi ~= %.50f\n", 4 * atan (1.0));
	TEST("{%S}\n", wbuf3);
	TEST("{%S}\n", wbuf4);
	TEST("{%S}\n", wbuf5);
	TEST("{%S}\n", wbuf6);
	TEST("%lld..%llu\n", MIN_OF(uint32_t), MAX_OF(uint32_t));
	TEST("uint32_t = %lld..%llu\n", MIN_OF(uint32_t), MAX_OF(uint32_t));
	TEST("int32_t = %lld..%llu\n", MIN_OF(int32_t), MAX_OF(int32_t));
	TEST("uint64_t = %lld..%llu\n", MIN_OF(uint64_t), MAX_OF(uint64_t));
	TEST("int64_t = %lld..%llu\n", MIN_OF(int64_t), MAX_OF(int64_t));
	TEST("size_t = %lld..%llu\n", MIN_OF(size_t), MAX_OF(size_t));
	TEST("ssize_t = %lld..%llu\n", MIN_OF(ssize_t), MAX_OF(ssize_t));
	TEST("pid_t = %lld..%llu\n", MIN_OF(pid_t), MAX_OF(pid_t));
	TEST("time_t = %lld..%llu\n", MIN_OF(time_t), MAX_OF(time_t));
	TEST("intptr_t = %lld..%llu\n", MIN_OF(intptr_t), MAX_OF(intptr_t));
	TEST("unsigned char = %lld..%llu\n", MIN_OF(unsigned char), MAX_OF(unsigned char));
	TEST("char = %lld..%llu\n", MIN_OF(char), MAX_OF(char));
	TEST("uint8_t = %lld..%llu\n", MIN_OF(uint8_t), MAX_OF(uint8_t));
	TEST("int8_t = %lld..%llu\n", MIN_OF(int8_t), MAX_OF(int8_t));
	TEST("uint16_t = %lld..%llu\n", MIN_OF(uint16_t), MAX_OF(uint16_t));
	TEST("int16_t = %lld..%llu\n", MIN_OF(int16_t), MAX_OF(int16_t));
	TEST("int = %lld..%llu\n", MIN_OF(int), MAX_OF(int));
	TEST("long int = %lld..%llu\n", MIN_OF(long int), MAX_OF(long int));
	TEST("long long int = %lld..%llu\n", MIN_OF(long long int), MAX_OF(long long int));
	TEST("off_t = %lld..%llu\n", MIN_OF(off_t), MAX_OF(off_t));
	TEST("%ld > %d > %d\n", 00000144674407370551615, k, l);
	TEST("%#04.8x\n", 1);
	TEST("%#04.8x\n", -0);
	TEST("%#-8.2x\n", 0x01);
	TEST("%#08o\n", 00001);
	TEST("%#o\n", 00001);
	TEST("hello\"\n", NULL);
	TEST("%3s\n", "%d");
	TEST("%-1d\n", -0);
	TEST("% 000000  %.0d\n", NULL);
	TEST("%#.2564lo\n", 0001777777777777777777634);
	TEST("%0xh.hhhhp\n", -0);
	TEST("%20p\n", (void *)-42);
	TEST("%-15s: %+030lld\n", "%+030lld", 8127534ll);
	TEST("%-15s: %+-10lld\n", "%+-10lld", 8127534ll);
	TEST("%-15s: %+-10.lld\n", "%+-10.lld", 8127534ll);
	TEST("%-15s: %+-10.0lld\n", "%+-10.0lld", 8127534ll);
	TEST("%-15s: %+-10.1lld\n", "%+-10.1lld", 8127534ll);
	TEST("%-15s: %+-10.2lld\n", "%+-10.2lld", 8127534ll);
	TEST("%-15s: %+-10.5lld\n", "%+-10.5lld", 8127534ll);
	TEST("%-15s: %+-10.10lld\n", "%+-10.10lld", 8127534ll);
	TEST("%-15s: %+-30lld\n", "%+-30lld", 8127534ll);
	TEST("%-15s: %+-30.lld\n", "%+-30.lld", 8127534ll);
	TEST("%-15s: %+-30.0lld\n", "%+-30.0lld", 8127534ll);
	TEST("%-15s: %+-30.1lld\n", "%+-30.1lld", 8127534ll);
	TEST("%-15s: %+-30.2lld\n", "%+-30.2lld", 8127534ll);
	TEST("%-15s: %+-30.5lld\n", "%+-30.5lld", 8127534ll);
	TEST("%-15s: %+-30.10lld\n", "%+-30.10lld", 8127534ll);
	TEST("%-15s: %+-30.30lld\n", "%+-30.30lld", 8127534ll);
    TEST("%c\n", '\0');
    TEST("Characters: %c %c\n", 'a', 65);
    TEST("Decimals: %d %ld %lld %d\n", 1977, 650000L, 12LL, 4);
    TEST("Preceding with blanks: %10d %10d\n", 1977, -1977);
    TEST("Preceding with zeros: %010d %010d\n", 1977, -1977);
    TEST("Force sign: %+d %+d %+6d %+6d\n", 1977, -1977, 1977, -1977);
    TEST("Force sign or space: % d % d % 6d % 6d\n", 1977, -1977, 1977, -1977);
    TEST("Some different radixes: %d %x %o %#x %#o\n", 100, 100, 100, 100, 100);
    TEST("floats: %4.2f %+.0e %E %08.2f\n", 3.1416, 3.1416, 3.1416, 3.1416);
    TEST("negative floats: %4.2f %+.0e %E %08.2f\n", -3.1416, -3.1416, -3.1416, -3.1416);
    TEST("Force sign or space: % .2f % .2f % 6.2f % 6.2f\n", 3.1416, -3.1416, 3.1416, -3.1416);
    TEST("Width trick: %*d\n", 5, 10);
    TEST("%s %%\n", "A string");
    TEST("Null string: %7s\n", NULL);
    TEST("Null pointer: %p\n", NULL);
    TEST("%lf\n", INFINITY);
    TEST("%lF\n", INFINITY);
    TEST("%lf\n", -INFINITY);
    TEST("%lF\n", -INFINITY);
    TEST("%lf\n", NAN);
    TEST("%lF\n", NAN);
    TEST("%10f\n", NAN);
    TEST("%-10f\n", NAN);
    TEST("%010.2f\n", NAN);
    TEST("%50.f\n", INFINITY);
    TEST("%-10.f\n", -INFINITY);
    TEST("%.f\n", 0.0f);
    TEST("%.0f\n", 0.0f);
    TEST("%.1f\n", 0.0f);
    TEST("%.2f\n", 0.0f);
    TEST("%.5f\n", 0.0f);
    TEST("%.f\n", 1.0f);
    TEST("%.0f\n", 1.0f);
    TEST("%.1f\n", 1.0f);
    TEST("%.2f\n", 1.0f);
    TEST("%.5f\n", 1.0f);
	TEST("%-15s: %-c\n", "%-c", 'x');
	TEST("%-15s: %-1c\n", "%-1c", 'x');
	TEST("%-15s: %-2c\n", "%-2c", 'x');
	TEST("%-15s: %-5c\n", "%-5c", 'x');
	TEST("%-15s: %-10c\n", "%-10c", 'x');
	TEST("%-15s: %-30c\n", "%-30c", 'x');
	TEST("%-15s: %-p\n", "%-p", (void*)324376);
	TEST("%-15s: %-1p\n", "%-1p", (void*)324376);
	TEST("%-15s: %-2p\n", "%-2p", (void*)324376);
	TEST("%-15s: %-5p\n", "%-5p", (void*)324376);
	TEST("%-15s: %-10p\n", "%-10p", (void*)324376);
	TEST("%-15s: %-30p\n", "%-30p", (void*)324376);
	TEST("%d\n", -0xFF);
	TEST("%d\n", -0xFFFFFFFF);
	TEST("%lld\n", -0xFFFFFFFFFFFFll);
	TEST("%llx\n", -0xFFFFFFFFFFFFll);
	TEST("%lx\n", -0xFFFFFFFFFFFFFFl);
	TEST("%x\n", -0xFF);
	TEST("%x\n", -0xFFFF);
	TEST("%x\n", -0xFFFFFFFF);
	TEST("%llx\n", -0x8000000000ll);
	TEST(".%%.%%.%%.%%.%%.%%.%%.%%.\n");
	TEST("{%      %%.%}\n");
	TEST("%%%%%%%%%%\n");
	TEST("%lD\n", 0L);
	TEST("%.4u\n", 42);
	TEST("%-15s: %-1.0d\n", "%-1.0d", 8127534);
	TEST("%-15s: %-1.1d\n", "%-1.1d", 8127534);
	TEST("%-15s: %-1.2d\n", "%-1.2d", 8127534);
	TEST("%-15s: %-1.5d\n", "%-1.5d", 8127534);
	TEST("%-15s: %-1.10d\n", "%-1.10d", 8127534);
	TEST("%-15s: %-1.30d\n", "%-1.30d", 8127534);
	TEST("%-15s: %-2d\n", "%-2d", 8127534);
	TEST("%-15s: %-2.d\n", "%-2.d", 8127534);
	TEST("%-15s: %-2.0d\n", "%-2.0d", 8127534);
	TEST("%-15s: %-2.1d\n", "%-2.1d", 8127534);
	TEST("%-15s: %-2.2d\n", "%-2.2d", 8127534);
	TEST("%-15s: %-2.5d\n", "%-2.5d", 8127534);
	TEST("%-15s: %-2.10d\n", "%-2.10d", 8127534);
	TEST("%-15s: %-2.30d\n", "%-2.30d", 8127534);
	TEST("%-15s: %-5d\n", "%-5d", 8127534);
	TEST("%-15s: %-5.d\n", "%-5.d", 8127534);
	TEST("%-15s: %-5.0d\n", "%-5.0d", 8127534);
	TEST("%-15s: %-5.1d\n", "%-5.1d", 8127534);
	TEST("%-15s: %-5.2d\n", "%-5.2d", 8127534);
	TEST("%-15s: %-5.5d\n", "%-5.5d", 8127534);
	TEST("%-15s: %-5.10d\n", "%-5.10d", 8127534);
	TEST("%4.8u\n", 424242424);
	TEST("%.4u\n", i);
	TEST("%.u, %.0u\n", 0, 0);
	TEST("%#X\n", 0);
	TEST("%#X\n", INT_MIN);
	TEST("%#O\n", 0);
	TEST("%#O\n", INT_MIN);
	TEST("{%030x}\n", 0xFFFF);
	TEST("{%.0d}\n", 0);
	TEST("%jd%jd\n", 0l, 42l);
	TEST("%ju, %llu\n", -0l, -ULLONG_MAX);
	TEST("[%50s]\n", (char *)0);
	TEST("%.000000000O\n", 1);
	TEST("%-15s: %#10.2x\n", "%#10.2x", 8127534);

//	TEST("\n", );

	printf("\n\n=======================\n");
	printf(CYAN "Résultat final : %zu/%d.\n", score, t);
	printf(RESET"=======================\n\n");
}
