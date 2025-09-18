/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4201
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4201
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
void test(val<unsigned short> var_10, val<int> zero, val<unsigned long long int*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) (!(((/* implicit */val<bool>) (val<signed char>)-80))))))));
    *var_18 = ((/* implicit */val<signed char>) min((*var_18), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) ((val<unsigned long long int>) var_10)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)39748;
int zero = 0;
unsigned long long int var_17 = 7141719341344133161ULL;
signed char var_18 = (signed char)-40;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1ULL;
    value_mismatch |= var_18 != (signed char)-40;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_17, &var_18);
  checksum();
}
