/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 247
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=247
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
void test(val<long long int> var_12, val<long long int> var_17, val<unsigned int> var_18, val<int> zero, val<bool*> var_20, val<unsigned char*> var_21, val<bool*> var_22, val<unsigned short*> var_23, val<signed char*> var_24) {
    *var_20 = ((/* implicit */val<bool>) (-((~(((/* implicit */val<int>) (val<short>)23378))))));
    *var_21 = ((/* implicit */val<unsigned char>) var_12);
    *var_22 = ((/* implicit */val<bool>) 3515052603461703314LL);
    *var_23 = ((/* implicit */val<unsigned short>) max((var_17), ((+(var_17)))));
    *var_24 = ((/* implicit */val<signed char>) (-(var_18)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 4014621831915198541LL;
long long int var_17 = -6037763691332119057LL;
unsigned int var_18 = 1962260891U;
int zero = 0;
bool var_20 = (bool)1;
unsigned char var_21 = (unsigned char)85;
bool var_22 = (bool)0;
unsigned short var_23 = (unsigned short)55081;
signed char var_24 = (signed char)-61;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned char)77;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (unsigned short)54767;
    value_mismatch |= var_24 != (signed char)101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
