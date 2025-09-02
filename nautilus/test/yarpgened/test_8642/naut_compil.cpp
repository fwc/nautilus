/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8642
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8642
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
void test(val<unsigned char> var_0, val<unsigned char> var_2, val<unsigned short> var_6, val<unsigned long long int> var_11, val<int> zero, val<bool*> var_16, val<bool*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<bool>) var_0);
    *var_17 ^= ((/* implicit */val<bool>) var_11);
    *var_18 -= ((/* implicit */val<long long int>) (((-(((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_2)), (var_6)))))) <= (((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned char var_2 = (unsigned char)46;
unsigned short var_6 = (unsigned short)61990;
unsigned long long int var_11 = 3779856195918701650ULL;
int zero = 0;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
long long int var_18 = -3677159885552790303LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != -3677159885552790304LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_11, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
