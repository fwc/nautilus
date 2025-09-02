/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1207
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1207
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
void test(val<unsigned int> var_1, val<signed char> var_3, val<unsigned char> var_7, val<unsigned short> var_9, val<short> var_10, val<unsigned short> var_14, val<int> zero, val<int*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<int>) var_7)) + (((/* implicit */val<int>) var_14)))) != (((/* implicit */val<int>) var_3)))))) <= (min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_9)) / (((/* implicit */val<int>) var_10))))), (max((var_1), (((/* implicit */val<unsigned int>) var_9))))))));
    *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3057871920U;
signed char var_3 = (signed char)-57;
unsigned char var_7 = (unsigned char)115;
unsigned short var_9 = (unsigned short)1268;
short var_10 = (short)3897;
unsigned short var_14 = (unsigned short)22448;
int zero = 0;
int var_15 = -891292231;
unsigned char var_16 = (unsigned char)22;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != (unsigned char)22;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_7, var_9, var_10, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
