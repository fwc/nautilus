/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9654
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9654
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
void test(val<long long int> var_3, val<unsigned short> var_4, val<int> zero, val<unsigned char*> var_12, val<signed char*> var_13, val<unsigned short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_4))));
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<unsigned char>)78)) < (((/* implicit */val<int>) (val<bool>)1))));
    *var_14 = ((/* implicit */val<unsigned short>) ((val<long long int>) min((((/* implicit */val<long long int>) ((val<unsigned char>) (val<unsigned char>)29))), (var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4986714913645204130LL;
unsigned short var_4 = (unsigned short)15400;
int zero = 0;
unsigned char var_12 = (unsigned char)234;
signed char var_13 = (signed char)-35;
unsigned short var_14 = (unsigned short)46368;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)215;
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (unsigned short)29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
