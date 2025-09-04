/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3020
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3020
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
void test(val<int> var_0, val<unsigned short> var_4, val<unsigned short> var_14, val<int> var_18, val<int> zero, val<unsigned long long int*> var_20, val<unsigned short*> var_21, val<unsigned char*> var_22) {
    *var_20 |= ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) || (((/* implicit */val<bool>) var_18))));
    *var_21 = ((/* implicit */val<unsigned short>) (~(min((((/* implicit */val<unsigned long long int>) var_0)), (8034616296655017535ULL)))));
    *var_22 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 782905857;
unsigned short var_4 = (unsigned short)19207;
unsigned short var_14 = (unsigned short)38848;
int var_18 = -1442353535;
int zero = 0;
unsigned long long int var_20 = 15837949399593741521ULL;
unsigned short var_21 = (unsigned short)41017;
unsigned char var_22 = (unsigned char)3;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 15837949399593741521ULL;
    value_mismatch |= var_21 != (unsigned short)52734;
    value_mismatch |= var_22 != (unsigned char)63;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_14, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
