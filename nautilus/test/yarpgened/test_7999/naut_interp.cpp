/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7999
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7999
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
void test(val<signed char> var_1, val<short> var_3, val<bool> var_10, val<int> zero, val<bool*> var_18, val<unsigned short*> var_19, val<unsigned long long int*> var_20, val<unsigned char*> var_21) {
    *var_18 = ((/* implicit */val<bool>) (val<unsigned char>)1);
    *var_19 = ((/* implicit */val<unsigned short>) var_10);
    *var_20 = ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (((!(((/* implicit */val<bool>) -4LL)))) && (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) % (((/* implicit */val<int>) (val<short>)-6))))))))));
    *var_21 = ((/* implicit */val<unsigned char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
short var_3 = (short)-18252;
bool var_10 = (bool)0;
int zero = 0;
bool var_18 = (bool)0;
unsigned short var_19 = (unsigned short)29977;
unsigned long long int var_20 = 7688996458863584495ULL;
unsigned char var_21 = (unsigned char)233;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != 18446744073709551615ULL;
    value_mismatch |= var_21 != (unsigned char)243;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_10, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
