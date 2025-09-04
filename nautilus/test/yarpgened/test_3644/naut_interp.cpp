/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3644
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3644
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
void test(val<unsigned short> var_1, val<unsigned short> var_4, val<unsigned short> var_7, val<unsigned short> var_9, val<unsigned short> var_12, val<int> zero, val<signed char*> var_14, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_14 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) max((var_1), (var_4))))) : (max((((/* implicit */val<unsigned long long int>) var_12)), (((val<unsigned long long int>) var_9))))));
    *var_15 = ((/* implicit */val<unsigned short>) ((val<bool>) (val<unsigned short>)17723));
    *var_16 = ((/* implicit */val<long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23523;
unsigned short var_4 = (unsigned short)2459;
unsigned short var_7 = (unsigned short)10425;
unsigned short var_9 = (unsigned short)43984;
unsigned short var_12 = (unsigned short)16472;
int zero = 0;
signed char var_14 = (signed char)108;
unsigned short var_15 = (unsigned short)33333;
long long int var_16 = -5510296122251614909LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-60;
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != 10425LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_9, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
