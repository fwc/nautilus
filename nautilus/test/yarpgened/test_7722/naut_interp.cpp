/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7722
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7722
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
void test(val<signed char> var_7, val<unsigned short> var_8, val<unsigned short> var_12, val<bool> var_17, val<int> zero, val<int*> var_19, val<unsigned short*> var_20, val<long long int*> var_21) {
    *var_19 -= ((/* implicit */val<int>) var_7);
    *var_20 = var_12;
    *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) && (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_8)) >> (((/* implicit */val<int>) var_17)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)42;
unsigned short var_8 = (unsigned short)44056;
unsigned short var_12 = (unsigned short)36430;
bool var_17 = (bool)1;
int zero = 0;
int var_19 = 301913213;
unsigned short var_20 = (unsigned short)6461;
long long int var_21 = 4877306682179316624LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 301913171;
    value_mismatch |= var_20 != (unsigned short)36430;
    value_mismatch |= var_21 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_12, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
