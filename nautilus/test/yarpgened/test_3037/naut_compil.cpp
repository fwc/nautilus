/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3037
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3037
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
void test(val<bool> var_8, val<unsigned char> var_12, val<int> zero, val<unsigned long long int*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) (((+((((val<bool>)1) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<unsigned short>)40987)))))) ^ (((/* implicit */val<int>) var_12))));
    *var_14 = ((/* implicit */val<unsigned short>) (val<bool>)0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)0;
unsigned char var_12 = (unsigned char)236;
int zero = 0;
unsigned long long int var_13 = 14161678154886095774ULL;
unsigned short var_14 = (unsigned short)27261;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 236ULL;
    value_mismatch |= var_14 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
