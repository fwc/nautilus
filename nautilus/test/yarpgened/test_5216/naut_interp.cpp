/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5216
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5216
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
void test(val<unsigned char> var_2, val<signed char> var_12, val<int> zero, val<long long int*> var_14, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) min((*var_14), (((/* implicit */val<long long int>) min((var_2), (((/* implicit */val<unsigned char>) var_12)))))));
    *var_15 = ((/* implicit */val<unsigned int>) (val<signed char>)18);
    *var_16 = ((/* implicit */val<unsigned short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)176;
signed char var_12 = (signed char)-31;
int zero = 0;
long long int var_14 = -75694690192830108LL;
unsigned int var_15 = 1996784095U;
unsigned short var_16 = (unsigned short)38579;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -75694690192830108LL;
    value_mismatch |= var_15 != 18U;
    value_mismatch |= var_16 != (unsigned short)176;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
}
