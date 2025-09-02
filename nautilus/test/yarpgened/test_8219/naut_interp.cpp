/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8219
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8219
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
void test(val<long long int> var_1, val<long long int> var_4, val<unsigned short> var_16, val<int> zero, val<int*> var_18, val<unsigned char*> var_19, val<short*> var_20, val<short*> var_21) {
    *var_18 = ((/* implicit */val<int>) max((((val<unsigned int>) ((((/* implicit */val<bool>) 1717266017)) ? (var_4) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)68)))))), (((/* implicit */val<unsigned int>) max(((!(((/* implicit */val<bool>) -1717266017)))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)147))) >= (var_1))))))));
    *var_19 = ((/* implicit */val<unsigned char>) max((var_16), (((val<unsigned short>) ((val<unsigned char>) (val<unsigned char>)200)))));
    *var_20 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) -6984216190878583116LL)), (8035798114065841856ULL)));
    *var_21 = (val<short>)13911;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7263145699891351093LL;
long long int var_4 = 9037882473967406215LL;
unsigned short var_16 = (unsigned short)33514;
int zero = 0;
int var_18 = -775508344;
unsigned char var_19 = (unsigned char)91;
short var_20 = (short)-20111;
short var_21 = (short)-23159;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1366406009;
    value_mismatch |= var_19 != (unsigned char)234;
    value_mismatch |= var_20 != (short)30388;
    value_mismatch |= var_21 != (short)13911;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
