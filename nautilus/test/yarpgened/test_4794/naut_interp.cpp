/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4794
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4794
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
void test(val<long long int> var_0, val<short> var_2, val<unsigned char> var_4, val<int> var_6, val<long long int> var_7, val<int> zero, val<unsigned char*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) var_6);
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_4)) ? (var_7) : (max((max((((/* implicit */val<long long int>) (val<bool>)1)), (var_7))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5890445860807309232LL;
short var_2 = (short)27885;
unsigned char var_4 = (unsigned char)127;
int var_6 = -244755498;
long long int var_7 = 1735544168271075204LL;
int zero = 0;
unsigned char var_14 = (unsigned char)61;
short var_15 = (short)5339;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)214;
    value_mismatch |= var_15 != (short)22404;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_7, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
