#include <iostream>
#include <chrono>
#include <string>
#include <mutex>
#include <random>
#include <thread>

typedef std::chrono::high_resolution_clock clk;
typedef std::chrono::time_point<clk> tp;

enum Severity {
    INFO = 0,
    DEBUG = 1,
    LOG = 2,
    WARNING = 3,
    ERROR = 4,
};

struct LogEntry {
    std::chrono::time_point<std::chrono::high_resolution_clock> date;
    std::string msg;
    Severity severity;
};

const std::string USAGE_STRING = "Usage: app.exe <output_directory> <log frequency (avg. logs/s)>";


bool is_allowed_to_write_log(size_t frequency) {
    bool allowed = true;
    const auto &current = clk::now();

    return false;
}

class LogRunner {
    std::unique_lock<std::mutex> lock_;
public:

    static std::vector<std::thread> StartLogThreads(std::string path, size_t frequency) {

    }
};




int main(int argc, char* argv[]) {
    size_t frequency;
    std::string path;
    if (argc != 3)
        std::cout << USAGE_STRING;



    return 0;
}