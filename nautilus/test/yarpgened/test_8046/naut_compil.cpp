/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8046
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8046
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
void test(val<long long int> var_2, val<bool> var_3, val<short> var_6, val<int> zero, val<unsigned char*> var_10, val<bool*> var_11, val<signed char*> var_12) {
    *var_10 += ((/* implicit */val<unsigned char>) (~(((((var_2) + (var_2))) << (((((/* implicit */val<int>) ((val<short>) (val<short>)789))) - (788)))))));
    *var_11 = ((/* implicit */val<bool>) var_6);
    *var_12 = ((/* implicit */val<signed char>) (!(var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 612306543496177344LL;
bool var_3 = (bool)1;
short var_6 = (short)-23301;
int zero = 0;
unsigned char var_10 = (unsigned char)76;
bool var_11 = (bool)0;
signed char var_12 = (signed char)82;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)75;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
