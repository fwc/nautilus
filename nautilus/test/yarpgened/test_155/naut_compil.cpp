/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 155
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=155
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
void test(val<unsigned long long int> var_13, val<int> zero, val<int*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<int>) -7749514589410276079LL);
    *var_20 = ((/* implicit */val<unsigned short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 3432801112905535724ULL;
int zero = 0;
int var_19 = 636765572;
unsigned short var_20 = (unsigned short)52557;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 612257041;
    value_mismatch |= var_20 != (unsigned short)53484;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
