/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 307
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=307
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
void test(val<unsigned char> var_1, val<signed char> var_2, val<unsigned short> var_7, val<unsigned long long int> var_10, val<unsigned short> var_13, val<long long int> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20) {
    *var_19 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_10)) ? ((+(((((/* implicit */val<bool>) -5949896902117957921LL)) ? (2529657835514280012LL) : (((/* implicit */val<long long int>) 4294967288U)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))));
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) ((val<signed char>) 5949896902117957922LL))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)64))) : (min((((/* implicit */val<long long int>) (val<bool>)1)), (-5949896902117957925LL))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_13)) ? (var_18) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))))) >= (5065562877534072507LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
signed char var_2 = (signed char)34;
unsigned short var_7 = (unsigned short)28857;
unsigned long long int var_10 = 9760419097132997262ULL;
unsigned short var_13 = (unsigned short)23038;
long long int var_18 = 3707532525715515368LL;
int zero = 0;
unsigned short var_19 = (unsigned short)60374;
unsigned short var_20 = (unsigned short)44181;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)42018;
    value_mismatch |= var_20 != (unsigned short)64;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_10, var_13, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
