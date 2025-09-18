/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9244
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9244
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
void test(val<unsigned char> var_2, val<signed char> var_4, val<unsigned char> var_5, val<unsigned short> var_9, val<int> zero, val<bool*> var_12, val<long long int*> var_13, val<unsigned int*> var_14) {
    if (((/* implicit */val<bool>) var_5))
    {
        *var_12 = ((/* implicit */val<bool>) var_4);
        *var_13 = ((/* implicit */val<long long int>) var_2);
    }

    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (((/* implicit */val<unsigned int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
signed char var_4 = (signed char)1;
unsigned char var_5 = (unsigned char)128;
unsigned short var_9 = (unsigned short)17323;
int zero = 0;
bool var_12 = (bool)1;
long long int var_13 = 935062173501443482LL;
unsigned int var_14 = 2499631108U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 142LL;
    value_mismatch |= var_14 != 2499631108U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
}
