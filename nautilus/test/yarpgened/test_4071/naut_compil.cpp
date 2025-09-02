/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4071
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4071
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
void test(val<long long int> var_8, val<unsigned short> var_12, val<unsigned short> var_13, val<int> zero, val<unsigned int*> var_19, val<short*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) var_8);
    *var_20 = ((/* implicit */val<short>) var_13);
    *var_21 = var_12;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -2801931269514662885LL;
unsigned short var_12 = (unsigned short)53382;
unsigned short var_13 = (unsigned short)61309;
int zero = 0;
unsigned int var_19 = 693183712U;
short var_20 = (short)-16432;
unsigned short var_21 = (unsigned short)11234;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 193260571U;
    value_mismatch |= var_20 != (short)-4227;
    value_mismatch |= var_21 != (unsigned short)53382;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_12, var_13, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
