/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6989
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6989
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<unsigned short> var_5, val<long long int> var_6, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) var_6);
    *var_12 = ((/* implicit */val<signed char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)46953;
long long int var_6 = -2303130274995568841LL;
int zero = 0;
unsigned char var_11 = (unsigned char)49;
signed char var_12 = (signed char)-21;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)55;
    value_mismatch |= var_12 != (signed char)105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, zero, &var_11, &var_12);
  checksum();
}
