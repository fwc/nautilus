/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2404
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2404
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
void test(val<unsigned short> var_16, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19, val<int*> var_20, val<signed char*> var_21) {
    *var_18 = ((/* implicit */val<unsigned long long int>) (+(2869726255U)));
    *var_19 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) (val<unsigned short>)50448))));
    *var_20 = ((/* implicit */val<int>) (val<signed char>)-95);
    *var_21 = ((/* implicit */val<signed char>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_16 = (unsigned short)51422;
int zero = 0;
unsigned long long int var_18 = 1440047256743488509ULL;
signed char var_19 = (signed char)-99;
int var_20 = 1375663786;
signed char var_21 = (signed char)-101;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2869726255ULL;
    value_mismatch |= var_19 != (signed char)16;
    value_mismatch |= var_20 != -95;
    value_mismatch |= var_21 != (signed char)-34;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
