/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3244
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3244
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
void test(val<unsigned int> var_2, val<long long int> var_6, val<unsigned char> var_7, val<unsigned char> var_8, val<unsigned int> var_9, val<unsigned char> var_10, val<int> zero, val<long long int*> var_11, val<bool*> var_12, val<signed char*> var_13, val<bool*> var_14, val<unsigned int*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17) {
    *var_11 += ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_8))));
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_8)))))
    {
        *var_12 += ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_8)) >> (((((/* implicit */val<int>) (val<unsigned char>)148)) - (130)))))) % (var_2)))) ? (var_2) : (((((/* implicit */val<bool>) 583845503U)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)107))) : (4240347472U)))));
        *var_13 = ((/* implicit */val<signed char>) (~(((((/* implicit */val<int>) (val<signed char>)-93)) ^ (((/* implicit */val<int>) (val<signed char>)78))))));
        *var_14 = ((/* implicit */val<bool>) var_7);
        *var_15 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)-64)) ? (((((/* implicit */val<bool>) 3711121794U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned short>)47971)))) : (-3770219516180142635LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)68)))));
        *var_16 = ((/* implicit */val<unsigned char>) var_9);
    }

    *var_17 = ((/* implicit */val<unsigned int>) max((*var_17), ((-(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7))))) ? (var_2) : (((583845503U) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 398938123U;
long long int var_6 = -5847550578283317449LL;
unsigned char var_7 = (unsigned char)161;
unsigned char var_8 = (unsigned char)158;
unsigned int var_9 = 314416743U;
unsigned char var_10 = (unsigned char)10;
int zero = 0;
long long int var_11 = 5124204180543869265LL;
bool var_12 = (bool)1;
signed char var_13 = (signed char)16;
bool var_14 = (bool)0;
unsigned int var_15 = 674116477U;
unsigned char var_16 = (unsigned char)237;
unsigned int var_17 = 3810655822U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 5124204180543869107LL;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (signed char)18;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 674116479U;
    value_mismatch |= var_16 != (unsigned char)103;
    value_mismatch |= var_17 != 3896029173U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
