/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4430
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4430
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
void test(val<unsigned int> var_2, val<unsigned int> var_9, val<unsigned short> var_14, val<int> var_17, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) ((val<short>) -7358937137062777893LL)))) ? (min((((/* implicit */val<unsigned int>) ((val<int>) var_17))), (min((var_9), (((/* implicit */val<unsigned int>) var_14)))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) -7358937137062777916LL)))))))));
    *var_20 = ((/* implicit */val<unsigned char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2835576654U;
unsigned int var_9 = 3641381914U;
unsigned short var_14 = (unsigned short)55031;
int var_17 = -588373916;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
unsigned char var_20 = (unsigned char)26;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)16;
    value_mismatch |= var_20 != (unsigned char)78;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_14, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
