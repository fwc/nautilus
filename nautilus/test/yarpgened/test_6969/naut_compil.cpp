/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6969
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6969
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
void test(val<unsigned int> var_1, val<long long int> var_3, val<unsigned char> var_4, val<signed char> var_9, val<unsigned int> var_11, val<int> zero, val<unsigned char*> var_13, val<unsigned short*> var_14) {
    *var_13 &= ((/* implicit */val<unsigned char>) var_9);
    *var_14 &= ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) ((val<unsigned char>) ((var_3) - (((/* implicit */val<long long int>) var_11)))))), (max((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) % (var_1))), (((/* implicit */val<unsigned int>) ((val<bool>) var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 23183316U;
long long int var_3 = 4529654926550594382LL;
unsigned char var_4 = (unsigned char)32;
signed char var_9 = (signed char)-109;
unsigned int var_11 = 3395661145U;
int zero = 0;
unsigned char var_13 = (unsigned char)107;
unsigned short var_14 = (unsigned short)22127;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)3;
    value_mismatch |= var_14 != (unsigned short)101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_9, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
