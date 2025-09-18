/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 834
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=834
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
void test(val<unsigned int> var_1, val<bool> var_8, val<unsigned short> var_9, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) var_1);
    *var_15 = ((/* implicit */val<unsigned short>) (((!(var_8))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : ((~(1926037193U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2232724380U;
bool var_8 = (bool)0;
unsigned short var_9 = (unsigned short)35743;
int zero = 0;
unsigned char var_14 = (unsigned char)199;
unsigned short var_15 = (unsigned short)25252;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)156;
    value_mismatch |= var_15 != (unsigned short)35743;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, zero, &var_14, &var_15);
  checksum();
}
