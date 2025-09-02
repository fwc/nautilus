/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3958
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3958
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
void test(val<unsigned long long int> var_1, val<int> zero, val<unsigned short*> var_11, val<short*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<unsigned short>) min((*var_11), (((/* implicit */val<unsigned short>) (val<signed char>)-55))));
    *var_12 += ((/* implicit */val<short>) var_1);
    *var_13 = ((/* implicit */val<signed char>) (!((val<bool>)1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1037736789843893780ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)35996;
short var_12 = (short)32109;
signed char var_13 = (signed char)60;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)35996;
    value_mismatch |= var_12 != (short)23425;
    value_mismatch |= var_13 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
