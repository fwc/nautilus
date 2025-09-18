/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3360
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3360
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned char> var_4, val<bool> var_5, val<int> var_8, val<int> var_9, val<unsigned int> var_12, val<int> zero, val<unsigned char*> var_17, val<bool*> var_18, val<long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_9)) ? ((~(((((/* implicit */val<bool>) var_12)) ? (var_12) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))))) : (((/* implicit */val<unsigned int>) var_9))));
    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (((-(((/* implicit */val<int>) var_5)))) > (((/* implicit */val<int>) var_4))))))))
    {
        *var_18 = ((/* implicit */val<bool>) min((*var_18), (((/* implicit */val<bool>) var_8))));
        *var_19 = ((/* implicit */val<long long int>) max((*var_19), (((/* implicit */val<long long int>) var_0))));
    }

    *var_20 &= ((/* implicit */val<unsigned long long int>) (((+((-(((/* implicit */val<int>) (val<short>)22801)))))) + (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46498;
unsigned short var_1 = (unsigned short)43289;
unsigned char var_4 = (unsigned char)152;
bool var_5 = (bool)0;
int var_8 = -1776022003;
int var_9 = -932150094;
unsigned int var_12 = 3772311386U;
int zero = 0;
unsigned char var_17 = (unsigned char)221;
bool var_18 = (bool)1;
long long int var_19 = -4510472419131423964LL;
unsigned long long int var_20 = 10742759629177258693ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)165;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != -4510472419131423964LL;
    value_mismatch |= var_20 != 10742759629177258629ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_8, var_9, var_12, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
