/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9767
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9767
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
void test(val<unsigned int> var_0, val<unsigned short> var_2, val<signed char> var_4, val<short> var_6, val<unsigned char> var_9, val<int> var_13, val<int> zero, val<signed char*> var_14, val<long long int*> var_15, val<int*> var_16, val<unsigned long long int*> var_17) {
    *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<short>)14293)) : (((/* implicit */val<int>) (val<signed char>)96)))) + (((/* implicit */val<int>) var_6))))) == (1695321240U)));
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)210)) ? (((/* implicit */val<int>) (val<signed char>)96)) : (((/* implicit */val<int>) (val<signed char>)77)))))))) | (var_13)));
    *var_16 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_9)), ((~(3155881004U))))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), (((/* implicit */val<unsigned long long int>) ((val<signed char>) ((((var_0) << (((((/* implicit */val<int>) var_4)) - (44))))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)46)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2682538088U;
unsigned short var_2 = (unsigned short)44790;
signed char var_4 = (signed char)74;
short var_6 = (short)9495;
unsigned char var_9 = (unsigned char)100;
int var_13 = -688765535;
int zero = 0;
signed char var_14 = (signed char)92;
long long int var_15 = -8741155495297210122LL;
int var_16 = 377278567;
unsigned long long int var_17 = 10966563705495443443ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != -688765535LL;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_9, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
