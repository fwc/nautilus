/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3113
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3113
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
void test(val<long long int> var_12, val<bool> var_13, val<int> var_15, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<signed char>) var_13)), (((val<signed char>) min((167451018563758960LL), (((/* implicit */val<long long int>) (val<bool>)0)))))));
    *var_17 = ((/* implicit */val<unsigned int>) max((*var_17), (((/* implicit */val<unsigned int>) var_15))));
    *var_18 &= var_12;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 1339735034619103798LL;
bool var_13 = (bool)0;
int var_15 = -667998875;
int zero = 0;
unsigned short var_16 = (unsigned short)24160;
unsigned int var_17 = 2670195301U;
long long int var_18 = 2997514696248385526LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != 3626968421U;
    value_mismatch |= var_18 != 40815692798495286LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
