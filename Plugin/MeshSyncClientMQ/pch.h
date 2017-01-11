#pragma once

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <functional>

#ifdef _WIN32
    #include <windows.h>
    #pragma warning(disable:4996)
    #ifdef GetObject
        #undef GetObject
    #endif
#else 
    #include <dlfcn.h>
    #ifdef __APPLE__
        #include <mach-o/dyld.h>
    #else
        #include <link.h>
    #endif
#endif


#include "MQPlugin.h"
#include "MQBasePlugin.h"
#if MQPLUGIN_VERSION > 0x0400
    #include "MQWidget.h"
#endif
#include "MeshSync/msClient.h"
