/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 486
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=486
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
void test(val<signed char> var_0, val<unsigned char> var_3, val<unsigned long long int> var_5, val<unsigned short> var_6, val<bool> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<unsigned char>) (~(var_8)));
    *var_12 |= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_6)) ? (((val<unsigned long long int>) ((val<unsigned long long int>) var_0))) : (min((var_5), (((/* implicit */val<unsigned long long int>) ((-4579130967256162006LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-4565))))))))));
    *var_13 = ((/* implicit */val<signed char>) (-(((((/* implicit */val<bool>) ((val<unsigned int>) var_7))) ? (((/* implicit */val<int>) var_3)) : ((+(-1518415118)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned char var_3 = (unsigned char)163;
unsigned long long int var_5 = 5268129776460132421ULL;
unsigned short var_6 = (unsigned short)59526;
bool var_7 = (bool)0;
unsigned long long int var_8 = 5410287732154940141ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)7;
signed char var_12 = (signed char)83;
signed char var_13 = (signed char)-23;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)18;
    value_mismatch |= var_12 != (signed char)-41;
    value_mismatch |= var_13 != (signed char)14;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_7, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
