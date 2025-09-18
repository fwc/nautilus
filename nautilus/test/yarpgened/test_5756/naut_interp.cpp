/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5756
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5756
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
void test(val<unsigned short> var_2, val<unsigned long long int> var_6, val<unsigned int> var_7, val<unsigned long long int> var_8, val<int> var_9, val<int> zero, val<unsigned short*> var_11, val<unsigned short*> var_12, val<int*> var_13, val<unsigned int*> var_14) {
    if (((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_8)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)0))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) var_9)))))))) && ((!((!(((/* implicit */val<bool>) var_2))))))))
    {
        *var_11 = ((/* implicit */val<unsigned short>) var_7);
        *var_12 = ((/* implicit */val<unsigned short>) max((*var_12), (((/* implicit */val<unsigned short>) var_6))));
        *var_13 = ((/* implicit */val<int>) var_2);
    }

    *var_14 = 261878586U;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49548;
unsigned long long int var_6 = 6930158960406589264ULL;
unsigned int var_7 = 3315352722U;
unsigned long long int var_8 = 7186629943301591676ULL;
int var_9 = -854848382;
int zero = 0;
unsigned short var_11 = (unsigned short)52612;
unsigned short var_12 = (unsigned short)23461;
int var_13 = 512849734;
unsigned int var_14 = 1251364918U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)17554;
    value_mismatch |= var_12 != (unsigned short)28496;
    value_mismatch |= var_13 != 49548;
    value_mismatch |= var_14 != 261878586U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
