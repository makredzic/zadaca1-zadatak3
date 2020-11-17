#include <sys/ioctl.h>
#include <chrono>
#include <iostream>
#include <thread>

size_t broj_kolona() {
  winsize sz;
  ioctl(0, TIOCGWINSZ, &sz);
  return sz.ws_col;
}

void pauziraj(unsigned int msec) {
  std::flush(std::cout);
  std::this_thread::sleep_for(std::chrono::milliseconds{msec});
}

int main() {
  //
  // Vas kod ovdje
  // 

  return 0;
}
