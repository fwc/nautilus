/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2049
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2049
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
void test(val<unsigned char> var_0, val<signed char> var_2, val<bool> var_6, val<signed char> var_7, val<unsigned int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((val<int>) var_10)) == (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 32)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_2))))) || (((/* implicit */val<bool>) var_0)))))));
    *var_13 = ((/* implicit */val<unsigned short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
signed char var_2 = (signed char)-60;
bool var_6 = (bool)1;
signed char var_7 = (signed char)34;
unsigned int var_10 = 507671776U;
int zero = 0;
unsigned long long int var_12 = 4399485016083689535ULL;
unsigned short var_13 = (unsigned short)36675;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
