/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2647
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2647
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
void test(val<long long int> var_1, val<unsigned int> var_2, val<unsigned char> var_7, val<unsigned short> var_15, val<unsigned int> var_16, val<int> zero, val<short*> var_17, val<short*> var_18) {
    *var_17 += ((/* implicit */val<short>) max((((/* implicit */val<long long int>) max(((((val<bool>)0) ? (var_16) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))))), (var_2)))), (var_1)));
    *var_18 = ((/* implicit */val<short>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -206298541082698769LL;
unsigned int var_2 = 187143958U;
unsigned char var_7 = (unsigned char)234;
unsigned short var_15 = (unsigned short)53346;
unsigned int var_16 = 1738230213U;
int zero = 0;
short var_17 = (short)-29655;
short var_18 = (short)24483;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)9023;
    value_mismatch |= var_18 != (short)-12190;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_15, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
