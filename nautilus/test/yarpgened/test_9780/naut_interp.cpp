/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9780
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9780
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
void test(val<unsigned short> var_2, val<short> var_14, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_18 *= ((/* implicit */val<unsigned long long int>) var_2);
    *var_19 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) max((((val<unsigned short>) (val<signed char>)1)), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_14)) <= (((/* implicit */val<int>) (val<signed char>)1))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55735;
short var_14 = (short)-7053;
int zero = 0;
unsigned long long int var_18 = 309357318874705994ULL;
signed char var_19 = (signed char)-45;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 12771202637017366246ULL;
    value_mismatch |= var_19 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_14, zero, &var_18, &var_19);
  checksum();
}
