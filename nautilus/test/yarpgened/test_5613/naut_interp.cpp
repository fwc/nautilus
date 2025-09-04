/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5613
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5613
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
void test(val<unsigned char> var_14, val<unsigned short> var_15, val<int> zero, val<int*> var_16, val<long long int*> var_17, val<unsigned short*> var_18) {
    *var_16 |= ((/* implicit */val<int>) var_15);
    *var_17 |= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_14))));
    *var_18 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 6ULL)) ? (((/* implicit */val<int>) (val<unsigned short>)8019)) : (-892071389)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_14 = (unsigned char)137;
unsigned short var_15 = (unsigned short)54180;
int zero = 0;
int var_16 = -564376893;
long long int var_17 = 3454943444982067760LL;
unsigned short var_18 = (unsigned short)2049;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -564339737;
    value_mismatch |= var_17 != 3454943444982067760LL;
    value_mismatch |= var_18 != (unsigned short)2049;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
