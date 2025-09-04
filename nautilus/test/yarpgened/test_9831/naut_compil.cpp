/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9831
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9831
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_4, val<unsigned char> var_13, val<int> zero, val<short*> var_14, val<unsigned short*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<short>) min((*var_14), (((/* implicit */val<short>) var_2))));
    *var_15 -= ((/* implicit */val<unsigned short>) var_4);
    *var_16 -= ((/* implicit */val<unsigned short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11706117120174601071ULL;
unsigned long long int var_4 = 15636450092427102790ULL;
unsigned char var_13 = (unsigned char)135;
int zero = 0;
short var_14 = (short)-29557;
unsigned short var_15 = (unsigned short)58605;
unsigned short var_16 = (unsigned short)62423;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-29557;
    value_mismatch |= var_15 != (unsigned short)6823;
    value_mismatch |= var_16 != (unsigned short)62288;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
