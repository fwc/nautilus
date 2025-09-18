/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2932
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2932
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
void test(val<signed char> var_6, val<unsigned short> var_7, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14) {
    *var_13 = var_7;
    *var_14 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)78;
unsigned short var_7 = (unsigned short)26588;
int zero = 0;
unsigned short var_13 = (unsigned short)20785;
long long int var_14 = 2655809419336577391LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)26588;
    value_mismatch |= var_14 != 78LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_13, &var_14);
  checksum();
}
