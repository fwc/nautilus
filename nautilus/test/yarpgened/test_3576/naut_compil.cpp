/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3576
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3576
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
void test(val<short> var_16, val<int> zero, val<short*> var_17, val<unsigned char*> var_18, val<unsigned short*> var_19) {
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_16)) > (((/* implicit */val<int>) (val<unsigned char>)2))));
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) (val<signed char>)64)), ((val<unsigned char>)14)))) ^ (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) (-(576460752303292416LL)))) > (18446744073709551615ULL))))));
    *var_19 = ((val<unsigned short>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_16 = (short)10466;
int zero = 0;
short var_17 = (short)-15099;
unsigned char var_18 = (unsigned char)39;
unsigned short var_19 = (unsigned short)24738;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)1;
    value_mismatch |= var_18 != (unsigned char)64;
    value_mismatch |= var_19 != (unsigned short)10466;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
