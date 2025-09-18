/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1537
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1537
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
void test(val<unsigned short> var_8, val<unsigned short> var_9, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_12 -= var_8;
    *var_13 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)21761;
unsigned short var_9 = (unsigned short)32257;
int zero = 0;
unsigned short var_12 = (unsigned short)56852;
unsigned short var_13 = (unsigned short)22517;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)35091;
    value_mismatch |= var_13 != (unsigned short)33278;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_12, &var_13);
  checksum();
}
