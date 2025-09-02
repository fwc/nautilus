/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 825
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=825
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
void test(val<unsigned short> var_2, val<long long int> var_6, val<unsigned short> var_8, val<signed char> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned short*> var_12, val<unsigned int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) var_2))));
    *var_12 = var_8;
    *var_13 = ((/* implicit */val<unsigned int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35968;
long long int var_6 = 4199425167530031175LL;
unsigned short var_8 = (unsigned short)3330;
signed char var_10 = (signed char)-83;
int zero = 0;
unsigned char var_11 = (unsigned char)220;
unsigned short var_12 = (unsigned short)38174;
unsigned int var_13 = 3656059632U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)1;
    value_mismatch |= var_12 != (unsigned short)3330;
    value_mismatch |= var_13 != 3145103431U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
