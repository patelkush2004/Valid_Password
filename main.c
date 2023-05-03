
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_valid_password(const char *s){
  int tracker = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (i == 7) {
      tracker++;
    }
  }
  for (int i = 0; s[i] != '\0'; i++) {
    if (65 <= s[i] && s[i] <= 90) {
      tracker++;
      break;
    }
  }
  for (int i = 0; s[i] != '\0'; i++) {
    if (97 <= s[i] && s[i] <= 122) {
      tracker++;
      break;
    }
  }
  for (int i = 0; s[i] != '\0'; i++) {
    if (48 <= s[i] && s[i] <= 57) {
      tracker++;
      break;
    }
  }
  for (int i = 0; s[i] != '\0'; i++) {
    if ((32 < s[i] && s[i] <= 47) || (58 <= s[i] && s[i] <= 64) || (91 <= s[i] && s[i] <= 96) || (123 <= s[i] && s[i] <= 126)) {
      tracker++;
      break;
    }
  }
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] <= 32 || s[i] > 126) {
      return false;
    }
  }
  if (tracker == 5) {
    return true;
  }
  return false;

}


int main (void) {
  char str [] = "";
  char break_str [] = "break";
  printf("Enter a password. The password must contain: \n");
  printf("- at least 8 characters\n");
  printf("- at least one uppercase letter\n");
  printf("- at least one lowercase letter\n");
  printf("- at least one digit\n");
  printf("- at least one special character\n");
  while (true) {
    scanf("%s", str);
    if (is_valid_password(str)) {
      printf("valid\n");
      break;
    }
    else {
      printf("invalid\n");
      printf("Enter a another password:\n");
    }
  }
}