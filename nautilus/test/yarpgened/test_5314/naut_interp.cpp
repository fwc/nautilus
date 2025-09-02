/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5314
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5314
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
void test(val<long long int> var_1, val<short> var_15, val<int> var_16, val<int> zero, val<int*> var_17, val<short*> var_18) {
    *var_17 = ((((/* implicit */val<bool>) (val<unsigned char>)4)) ? (((val<int>) var_1)) : (((((/* implicit */val<bool>) ((val<int>) var_16))) ? ((+(((/* implicit */val<int>) var_15)))) : (var_16))));
    *var_18 = ((/* implicit */val<short>) -2120158653294499181LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3569212738692875000LL;
short var_15 = (short)28208;
int var_16 = 2106273170;
int zero = 0;
int var_17 = -1488673030;
short var_18 = (short)9826;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1234600696;
    value_mismatch |= var_18 != (short)10899;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_15, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
