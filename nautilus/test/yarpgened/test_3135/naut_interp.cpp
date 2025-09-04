/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3135
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3135
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
void test(val<bool> var_1, val<unsigned long long int> var_2, val<long long int> var_7, val<unsigned int> var_8, val<unsigned short> var_9, val<int> zero, val<signed char*> var_15, val<unsigned char*> var_16, val<int*> var_17, val<signed char*> var_18, val<unsigned short*> var_19) {
    if (((/* implicit */val<bool>) (-(var_2))))
    {
        *var_15 = ((/* implicit */val<signed char>) var_9);
        *var_16 = ((/* implicit */val<unsigned char>) var_1);
    }

    *var_17 &= ((/* implicit */val<int>) (~((((!(((/* implicit */val<bool>) (val<unsigned char>)247)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7)))))) : (min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)212)), (var_2)))))));
    *var_18 = ((/* implicit */val<signed char>) min((*var_18), (((/* implicit */val<signed char>) var_8))));
    *var_19 &= ((/* implicit */val<unsigned short>) (-(((-6794816412878314583LL) / (6794816412878314583LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned long long int var_2 = 1032374201528580547ULL;
long long int var_7 = 2247913274947715384LL;
unsigned int var_8 = 1547721405U;
unsigned short var_9 = (unsigned short)38663;
int zero = 0;
signed char var_15 = (signed char)10;
unsigned char var_16 = (unsigned char)213;
int var_17 = 515904996;
signed char var_18 = (signed char)82;
unsigned short var_19 = (unsigned short)43492;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)7;
    value_mismatch |= var_16 != (unsigned char)0;
    value_mismatch |= var_17 != 515904800;
    value_mismatch |= var_18 != (signed char)-67;
    value_mismatch |= var_19 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_8, var_9, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
