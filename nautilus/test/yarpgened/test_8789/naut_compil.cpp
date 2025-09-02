/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8789
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8789
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
void test(val<long long int> var_3, val<short> var_4, val<signed char> var_7, val<long long int> var_8, val<int> zero, val<int*> var_10, val<unsigned short*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<int>) var_8);
    *var_11 = ((/* implicit */val<unsigned short>) var_4);
    *var_12 = ((/* implicit */val<short>) min((((var_3) & (((/* implicit */val<long long int>) ((val<int>) var_7))))), (((/* implicit */val<long long int>) ((val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)26551)) >> (((((/* implicit */val<int>) var_7)) + (142)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2459344081820358561LL;
short var_4 = (short)-16004;
signed char var_7 = (signed char)(-127 - 1);
long long int var_8 = 258860541985201952LL;
int zero = 0;
int var_10 = -2031310778;
unsigned short var_11 = (unsigned short)20568;
short var_12 = (short)2870;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1687904480;
    value_mismatch |= var_11 != (unsigned short)49532;
    value_mismatch |= var_12 != (short)26624;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
