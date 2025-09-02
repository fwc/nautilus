/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9230
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9230
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
void test(val<unsigned long long int> var_4, val<short> var_7, val<int> zero, val<signed char*> var_14, val<bool*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) ((((val<bool>) max((((/* implicit */val<unsigned long long int>) (val<signed char>)0)), (var_4)))) ? (((/* implicit */val<unsigned long long int>) (-(((val<unsigned int>) var_7))))) : (1152921470247108608ULL)));
    *var_15 -= ((/* implicit */val<bool>) ((1152921470247108608ULL) % (17293822603462442987ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3427041102220176309ULL;
short var_7 = (short)24105;
int zero = 0;
signed char var_14 = (signed char)64;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-41;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
