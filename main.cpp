#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

static void run(int argc, char **argv);
static string cmd(int argc, char **argv);

int main(int argc, char **argv) {
    if (argc < 3) {
        cerr << "Too few arguments!" << endl;
        exit(-1);
    }

    if (!strncmp(argv[1], "run", 3)) {
        run(argc - 2, &argv[2]);
    } else {
        cerr << "Not Run!" << endl;
        exit(-2);
    }

    return 0;
}

static void run(int argc, char **argv) {
    cout << "Running: " << cmd(argc, argv) << endl;

    execvp(argv[0], argv);
}

static string cmd(int argc, char **argv) {
    string cmd = "";
    for (int i = 0; i < argc; i ++) {
        cmd.append(argv[i] + string(" "));
    }
    
    return cmd;
}