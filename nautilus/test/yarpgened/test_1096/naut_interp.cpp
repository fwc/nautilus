/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1096
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1096
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
void test(val<unsigned int> var_2, val<int> var_3, val<int> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned int*> var_12, val<unsigned short*> var_13, val<unsigned char*> var_14, val<short*> var_15, val<unsigned int*> var_16) {
    *var_12 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<short>)-11750)) : ((+(((/* implicit */val<int>) var_8))))));
    *var_13 = ((/* implicit */val<unsigned short>) var_4);
    *var_14 = ((val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)96)) ? (((/* implicit */val<unsigned long long int>) var_3)) : (min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (var_7)))));
    *var_15 = ((/* implicit */val<short>) ((val<unsigned char>) (+(max((((/* implicit */val<unsigned long long int>) 4115336824U)), (var_5))))));
    *var_16 = ((/* implicit */val<unsigned int>) (-(var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1218474234U;
int var_3 = -1842645026;
int var_4 = 559941484;
unsigned long long int var_5 = 11449920882982020812ULL;
unsigned long long int var_7 = 16261625941482574967ULL;
unsigned char var_8 = (unsigned char)114;
int zero = 0;
unsigned int var_12 = 2091037377U;
unsigned short var_13 = (unsigned short)37887;
unsigned char var_14 = (unsigned char)152;
short var_15 = (short)11907;
unsigned int var_16 = 2453263768U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2203934939U;
    value_mismatch |= var_13 != (unsigned short)1900;
    value_mismatch |= var_14 != (unsigned char)222;
    value_mismatch |= var_15 != (short)204;
    value_mismatch |= var_16 != 799501193U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_7, var_8, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
