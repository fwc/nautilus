/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3100
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3100
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
void test(val<signed char> var_1, val<signed char> var_7, val<signed char> var_8, val<signed char> var_13, val<int> zero, val<signed char*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)98)) | (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) max((var_13), ((val<signed char>)100)))))) / (((/* implicit */val<int>) min((var_13), ((val<signed char>)-74)))))))));
    *var_17 -= var_7;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
signed char var_7 = (signed char)-57;
signed char var_8 = (signed char)35;
signed char var_13 = (signed char)-61;
int zero = 0;
signed char var_16 = (signed char)-60;
signed char var_17 = (signed char)65;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != (signed char)122;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_8, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
