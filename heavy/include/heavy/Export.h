#ifndef HEAVY_EXPORT_H
#define HEAVY_EXPORT_H

#ifdef _WIN32
    #ifdef HEAVY_BUILD
        #define HEAVY_API __declspec(dllexport)
    #else
        #define HEAVY_API __declspec(dllimport)
    #endif
#else
    #ifdef HEAVY_BUILD
        #define HEAVY_API __attribute__((visibility("default")))
    #else
        #define HEAVY_API
    #endif
#endif

#endif