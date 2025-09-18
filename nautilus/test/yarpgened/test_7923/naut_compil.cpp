/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7923
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7923
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
void test(val<long long int> var_0, val<unsigned char> var_15, val<unsigned int> var_16, val<int> zero, val<unsigned short*> var_18, val<unsigned char*> var_19, val<short*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22) {
    *var_18 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) (val<unsigned char>)80))));
    *var_19 = ((/* implicit */val<unsigned char>) var_0);
    *var_20 = ((/* implicit */val<short>) ((val<unsigned char>) 194988793070431413LL));
    *var_21 = ((/* implicit */val<bool>) (+(var_16)));
    *var_22 = ((/* implicit */val<unsigned long long int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8282428408748653038LL;
unsigned char var_15 = (unsigned char)127;
unsigned int var_16 = 237575067U;
int zero = 0;
unsigned short var_18 = (unsigned short)42025;
unsigned char var_19 = (unsigned char)120;
short var_20 = (short)19992;
bool var_21 = (bool)0;
unsigned long long int var_22 = 7983006928382722962ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)80;
    value_mismatch |= var_19 != (unsigned char)18;
    value_mismatch |= var_20 != (short)181;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 127ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
