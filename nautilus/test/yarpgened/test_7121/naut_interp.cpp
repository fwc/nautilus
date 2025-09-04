/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7121
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7121
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_1, val<unsigned int> var_4, val<bool> var_5, val<unsigned short> var_12, val<int> zero, val<bool*> var_13, val<unsigned short*> var_14, val<long long int*> var_15) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 123384876U)) ? (1050997681U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)1536)))))) : (((((/* implicit */val<bool>) (val<unsigned short>)46978)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (((var_1) | (((/* implicit */val<unsigned long long int>) 4099136008U)))))))))
    {
        *var_13 = var_5;
        *var_14 = var_12;
    }

    *var_15 -= ((/* implicit */val<long long int>) (+(max((var_1), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_12)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5936;
unsigned long long int var_1 = 2659514629105432942ULL;
unsigned int var_4 = 782604821U;
bool var_5 = (bool)1;
unsigned short var_12 = (unsigned short)49345;
int zero = 0;
bool var_13 = (bool)1;
unsigned short var_14 = (unsigned short)33232;
long long int var_15 = 8116220406609645924LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned short)49345;
    value_mismatch |= var_15 != 5456705777504212982LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
