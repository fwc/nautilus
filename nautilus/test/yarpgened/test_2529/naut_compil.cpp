/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2529
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2529
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
void test(val<unsigned short> var_1, val<unsigned char> var_2, val<signed char> var_4, val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_2)) + (((/* implicit */val<int>) var_4))));
    *var_16 = ((/* implicit */val<unsigned char>) min((max((((/* implicit */val<int>) var_1)), (((((/* implicit */val<int>) (val<unsigned short>)16523)) * (((/* implicit */val<int>) (val<unsigned short>)16516)))))), (max(((~(((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) var_4))))));
    *var_17 = ((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<int>) (val<short>)7263)) << (((((/* implicit */val<int>) (val<short>)-7264)) + (7279))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47861;
unsigned char var_2 = (unsigned char)52;
signed char var_4 = (signed char)1;
int zero = 0;
unsigned char var_15 = (unsigned char)97;
unsigned char var_16 = (unsigned char)87;
long long int var_17 = -1712673065909810330LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)53;
    value_mismatch |= var_16 != (unsigned char)1;
    value_mismatch |= var_17 != 237993984LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
