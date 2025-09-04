/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 64
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=64
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned char> var_5, val<unsigned long long int> var_6, val<signed char> var_12, val<int> zero, val<short*> var_15, val<signed char*> var_16, val<unsigned long long int*> var_17) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(var_6)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(800521336U)))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_12))))) : (max((((/* implicit */val<long long int>) var_5)), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) | (9223372036854775807LL)))))));
    *var_16 = ((/* implicit */val<signed char>) var_5);
    *var_17 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) var_0)) != (((/* implicit */val<int>) (val<signed char>)61)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20247;
unsigned short var_1 = (unsigned short)27541;
unsigned char var_5 = (unsigned char)13;
unsigned long long int var_6 = 17648152258186726306ULL;
signed char var_12 = (signed char)-93;
int zero = 0;
short var_15 = (short)17818;
signed char var_16 = (signed char)25;
unsigned long long int var_17 = 5721692699052828701ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)27541;
    value_mismatch |= var_16 != (signed char)13;
    value_mismatch |= var_17 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
