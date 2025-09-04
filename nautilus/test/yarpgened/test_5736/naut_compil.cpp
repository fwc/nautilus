/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5736
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5736
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
void test(val<unsigned int> var_10, val<unsigned char> var_11, val<int> zero, val<short*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) min((var_11), (((val<unsigned char>) 9038409624965210046ULL)))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((val<int>) var_10));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 4242313589U;
unsigned char var_11 = (unsigned char)173;
int zero = 0;
short var_20 = (short)-4781;
unsigned long long int var_21 = 12903725599835574179ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-173;
    value_mismatch |= var_21 != 18446744073656897909ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
