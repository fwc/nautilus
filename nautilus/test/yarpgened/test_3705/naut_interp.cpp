/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3705
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3705
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
void test(val<unsigned char> var_2, val<signed char> var_4, val<int> var_7, val<int> var_8, val<unsigned long long int> var_9, val<long long int> var_10, val<unsigned short> var_14, val<signed char> var_15, val<int> zero, val<int*> var_16, val<int*> var_17, val<bool*> var_18, val<unsigned short*> var_19, val<int*> var_20) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<unsigned short>) (-(-1719506037785932524LL))))) & (((val<int>) ((val<int>) var_9))))))
    {
        *var_16 -= ((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) >= ((~(((/* implicit */val<int>) var_14))))));
        *var_17 = (+(((val<int>) var_10)));
        *var_18 = ((/* implicit */val<bool>) ((var_7) >> ((((~(((((/* implicit */val<int>) var_15)) << (((((/* implicit */val<int>) var_2)) - (131))))))) + (637534213)))));
        *var_19 = ((/* implicit */val<unsigned short>) (~((~(var_8)))));
    }

    *var_20 = ((/* implicit */val<int>) ((val<short>) min(((-(((/* implicit */val<int>) (val<short>)13942)))), ((+(var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
signed char var_4 = (signed char)18;
int var_7 = 1464959563;
int var_8 = 1527107608;
unsigned long long int var_9 = 3321401210750344825ULL;
long long int var_10 = -1213801380920690661LL;
unsigned short var_14 = (unsigned short)6192;
signed char var_15 = (signed char)76;
int zero = 0;
int var_16 = 1724463777;
int var_17 = -1419629162;
bool var_18 = (bool)0;
unsigned short var_19 = (unsigned short)50919;
int var_20 = 973745586;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1724463776;
    value_mismatch |= var_17 != 911734811;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned short)53272;
    value_mismatch |= var_20 != -13942;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_9, var_10, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
