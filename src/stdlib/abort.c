#include <signal.h>
#include <unistd.h>

void abort(void) {
  raise(SIGABRT);
  // try to crash
  *(volatile char *)0 = 0;
  raise(SIGKILL);
  _exit(127);
}
