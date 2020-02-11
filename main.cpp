#include "src/ARDepth.h"

int main(int argc,char**argv) {
    std::string input_frames = argv[1];//"/AR-DEPTH/sample_data/frames";
    std::string input_colmap = argv[2];//"/AR-DEPTH/sample_data/reconstruction";
    bool resize = false;
    bool visualize = true;
    bool save = true;
    ARDepth ardepth(input_frames, input_colmap, resize, visualize,save);
    ardepth.run();

    return 0;
}
