#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {

    {"sb-internet",    5,    2},
    {"sb-nettraf",    1,    6},
//    
    {"sb-disk",    1800, 3 },
    {"sb-memory",  10,   4 },
    {"sb-cpu",    10,    5},
//
//
    {"sb-volume",  0,    8 },

    {"sb-battery", 5,    9 },
    {"sb-clock",    60,    1},
//

};

const unsigned short blockCount = LEN(blocks);
