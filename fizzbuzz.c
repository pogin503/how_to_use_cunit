#include <stdio.h>

static const char *get_str_FizzBuzz(void);
static const char *get_str_Fizz(void);
static const char *get_str_Buzz(void);

static const char *STR_FIZZBUZZ = "FizzBuzz";
static const char *STR_FIZZ = "Fizz";
static const char *STR_BUZZ = "Buzz";

void fizzbuzz(int num, char *result) {
    if ((num % 3 == 0) && (num % 5 == 0)) {
        sprintf(result, get_str_FizzBuzz());
    } else if (num % 3 == 0) {
        sprintf(result, get_str_Fizz());
    } else if (num % 5 == 0) {
        sprintf(result, get_str_Buzz());
    } else {
        sprintf(result, "%d", num);
    }
}

static const char *get_str_FizzBuzz(void) {
    return STR_FIZZBUZZ;
}

static const char *get_str_Fizz(void) {
    return STR_FIZZ;
}

static const char *get_str_Buzz(void) {
    return STR_BUZZ;
}
