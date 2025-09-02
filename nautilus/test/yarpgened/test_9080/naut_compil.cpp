/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9080
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9080
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
void test(val<unsigned long long int> var_12, val<unsigned char> var_16, val<int> zero, val<int*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<int>) var_16);
    *var_21 = ((/* implicit */val<signed char>) (+(var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 5423157655144002709ULL;
unsigned char var_16 = (unsigned char)47;
int zero = 0;
int var_20 = 1902152166;
signed char var_21 = (signed char)31;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 47;
    value_mismatch |= var_21 != (signed char)-107;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_16, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
