#pragma once

#define NUM_ELEMENTS(x)                                                        \
    ((sizeof(x) / sizeof(0 [x])) / ((size_t)(!(sizeof(x) % sizeof(0 [x])))))
