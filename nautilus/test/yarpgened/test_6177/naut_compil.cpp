/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6177
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6177
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
void test(val<bool> var_5, val<bool> var_11, val<short> var_14, val<int> zero, val<unsigned char*> var_17, val<signed char*> var_18, val<short*> var_19, val<unsigned char*> var_20) {
    *var_17 = ((/* implicit */val<unsigned char>) var_11);
    *var_18 = ((/* implicit */val<signed char>) 3338733470975453547LL);
    *var_19 = ((/* implicit */val<short>) var_11);
    *var_20 = ((/* implicit */val<unsigned char>) max(((+(((/* implicit */val<int>) var_5)))), ((+(((/* implicit */val<int>) var_14))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)0;
bool var_11 = (bool)1;
short var_14 = (short)-1785;
int zero = 0;
unsigned char var_17 = (unsigned char)215;
signed char var_18 = (signed char)52;
short var_19 = (short)25237;
unsigned char var_20 = (unsigned char)163;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != (signed char)107;
    value_mismatch |= var_19 != (short)1;
    value_mismatch |= var_20 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, var_14, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
