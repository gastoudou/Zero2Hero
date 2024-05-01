#include <windows.h>
#include <iostream>

#include <vector>
#include <cstring>

#if _DEBUG
// on met tous les outils de debug ici
// leak detector
// profiler
#include "vld.h"
#include "optick.h"
#endif