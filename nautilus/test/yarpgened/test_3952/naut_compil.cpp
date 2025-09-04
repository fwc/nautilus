/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3952
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3952
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<signed char> var_6, val<signed char> var_7, val<int> zero, val<unsigned short*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) (-(min((((((/* implicit */val<bool>) var_1)) ? (var_0) : (217667238U))), (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_7)))))))));
    *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3205640360U;
unsigned char var_1 = (unsigned char)181;
signed char var_6 = (signed char)(-127 - 1);
signed char var_7 = (signed char)-62;
int zero = 0;
unsigned short var_13 = (unsigned short)24224;
unsigned char var_14 = (unsigned char)162;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)65474;
    value_mismatch |= var_14 != (unsigned char)162;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
