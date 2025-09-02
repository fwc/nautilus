/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4930
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4930
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
void test(val<unsigned char> var_6, val<bool> var_7, val<int> zero, val<int*> var_10, val<signed char*> var_11, val<unsigned char*> var_12) {
    *var_10 |= ((/* implicit */val<int>) -3407889270151368902LL);
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (val<unsigned short>)20833)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_6))));
    *var_12 = ((/* implicit */val<unsigned char>) min((*var_12), (((/* implicit */val<unsigned char>) ((min(((~(2557090891U))), (((/* implicit */val<unsigned int>) (val<unsigned short>)44703)))) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-30485))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)71;
bool var_7 = (bool)1;
int zero = 0;
int var_10 = 1898952483;
signed char var_11 = (signed char)7;
unsigned char var_12 = (unsigned char)94;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -68174021;
    value_mismatch |= var_11 != (signed char)1;
    value_mismatch |= var_12 != (unsigned char)94;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
