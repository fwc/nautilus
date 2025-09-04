/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6337
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6337
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<bool> var_1, val<short> var_8, val<unsigned char> var_10, val<int> zero, val<bool*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) min((*var_11), (((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-8))) : (0U)))) && (((/* implicit */val<bool>) var_8))))));
    *var_12 = (((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) % (((/* implicit */val<int>) (val<unsigned short>)7994))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : ((~((~(10689660312710849198ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
short var_8 = (short)-30957;
unsigned char var_10 = (unsigned char)249;
int zero = 0;
bool var_11 = (bool)0;
unsigned long long int var_12 = 16817362509610191756ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 10689660312710849198ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
