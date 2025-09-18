/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9256
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9256
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
void test(val<unsigned long long int> var_9, val<signed char> var_10, val<short> var_14, val<int> zero, val<short*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<short>) (~((-(var_9)))));
    *var_21 = ((/* implicit */val<unsigned char>) min((var_14), (((/* implicit */val<short>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 5570594826712050735ULL;
signed char var_10 = (signed char)126;
short var_14 = (short)7101;
int zero = 0;
short var_20 = (short)-31484;
unsigned char var_21 = (unsigned char)50;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-5074;
    value_mismatch |= var_21 != (unsigned char)126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, var_14, zero, &var_20, &var_21);
  checksum();
}
