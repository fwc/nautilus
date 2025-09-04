/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5333
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5333
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
void test(val<bool> var_5, val<int> var_6, val<long long int> var_9, val<unsigned int> var_13, val<int> zero, val<bool*> var_16, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<bool>) min((*var_16), (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) var_6)) | (((val<long long int>) var_13)))))));
    *var_17 = ((/* implicit */val<unsigned char>) var_5);
    *var_18 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
int var_6 = 1885914096;
long long int var_9 = 5788412418402432257LL;
unsigned int var_13 = 1182420316U;
int zero = 0;
bool var_16 = (bool)0;
unsigned char var_17 = (unsigned char)0;
long long int var_18 = 7856066892294187624LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != 5788412418402432257LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_9, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
