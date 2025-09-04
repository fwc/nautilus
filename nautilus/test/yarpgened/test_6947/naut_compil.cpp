/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6947
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6947
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
void test(val<long long int> var_1, val<unsigned short> var_3, val<signed char> var_4, val<int> zero, val<short*> var_11, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_11 = ((/* implicit */val<short>) (((~(((/* implicit */val<int>) var_4)))) < (((/* implicit */val<int>) (!((val<bool>)1))))));
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) var_1))));
    *var_13 = var_3;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5883511793559597464LL;
unsigned short var_3 = (unsigned short)49815;
signed char var_4 = (signed char)-59;
int zero = 0;
short var_11 = (short)-22078;
unsigned short var_12 = (unsigned short)19789;
unsigned short var_13 = (unsigned short)10498;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (unsigned short)3688;
    value_mismatch |= var_13 != (unsigned short)49815;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
