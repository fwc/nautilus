/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1195
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1195
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
void test(val<signed char> var_1, val<bool> var_3, val<bool> var_5, val<short> var_7, val<int> zero, val<signed char*> var_10, val<unsigned short*> var_11) {
    *var_10 |= ((/* implicit */val<signed char>) min((var_5), (var_5)));
    *var_11 -= ((/* implicit */val<unsigned short>) min((((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<signed char>)107)) : (((/* implicit */val<int>) (val<unsigned short>)192)))) / (((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<int>) var_1)) : (1472502528))))), (min((((/* implicit */val<int>) min((((/* implicit */val<short>) var_3)), (var_7)))), (-1472502521)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-26;
bool var_3 = (bool)1;
bool var_5 = (bool)1;
short var_7 = (short)27046;
int zero = 0;
signed char var_10 = (signed char)-34;
unsigned short var_11 = (unsigned short)34747;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-33;
    value_mismatch |= var_11 != (unsigned short)8884;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
