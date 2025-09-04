/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6465
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6465
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
void test(val<signed char> var_0, val<unsigned short> var_1, val<short> var_7, val<unsigned short> var_8, val<int> var_10, val<unsigned long long int> var_11, val<signed char> var_14, val<int> zero, val<short*> var_15, val<long long int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) ((((((/* implicit */val<int>) ((((/* implicit */val<int>) var_1)) == (((/* implicit */val<int>) var_7))))) % (((/* implicit */val<int>) ((val<unsigned short>) 9765462692271511694ULL))))) == (((/* implicit */val<int>) (val<unsigned short>)35992)))))));
    *var_16 ^= ((/* implicit */val<long long int>) ((val<signed char>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) max((var_10), (((/* implicit */val<int>) var_8))))) : (((val<unsigned long long int>) var_11)))));
    *var_17 = ((/* implicit */val<int>) max((*var_17), (min((((((((/* implicit */val<int>) var_14)) / (((/* implicit */val<int>) var_0)))) / (((/* implicit */val<int>) var_14)))), (((/* implicit */val<int>) (((~(1518191994298551099ULL))) != (((/* implicit */val<unsigned long long int>) -9032003217691654639LL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
unsigned short var_1 = (unsigned short)44051;
short var_7 = (short)9806;
unsigned short var_8 = (unsigned short)28142;
int var_10 = -555013305;
unsigned long long int var_11 = 6241561687495465088ULL;
signed char var_14 = (signed char)32;
int zero = 0;
short var_15 = (short)-29970;
long long int var_16 = -7506384217495810997LL;
int var_17 = -1508858408;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)0;
    value_mismatch |= var_16 != 7506384217495810981LL;
    value_mismatch |= var_17 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_8, var_10, var_11, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
