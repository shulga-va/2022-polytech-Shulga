#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

void cpuinfo(long int fields[]) {
  char line[3];
  std::ifstream in("/proc/stat", std::ios_base::in);
  in >> line;
  for (int i = 0; i < 10; ++i) {
    if (in.is_open())
      in >> fields[i];
    else
      exit(0);
  }
}

int main() {
    long int fields[10], tick1, tick2, idle1, idle2,
        tick, idle;
    double cpu;

    cpuinfo(fields);

    tick1 = 0;
    for (int i = 0; i < 10; i++)
        tick1 += fields[i];
    idle1 = fields[3]; 

    std::chrono::milliseconds timespan(3000);
    std::this_thread::sleep_for(timespan);

    tick2 = tick1;
    idle2 = idle1;

    cpuinfo(fields);

    tick1 = 0;
    for (int i = 0; i < 10; i++)
        tick1 += fields[i];
    idle1 = fields[3];

    tick = tick1 - tick2;
    idle = idle1 - idle2;

    cpu = (tick - idle) / (double)tick;
    std::cout << "CPU: " << cpu * 100 << "%" << std::endl;
    return 0;
}