/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5737
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5737
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
void test(val<unsigned long long int> var_4, val<signed char> var_8, val<int> var_9, val<unsigned char> var_10, val<unsigned short> var_13, val<bool> var_14, val<int> zero, val<short*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<short>) (val<bool>)0);
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) var_9)) ^ (var_4)))) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) min((var_8), (((/* implicit */val<signed char>) var_14))))), (var_10)))) : ((+((~(((/* implicit */val<int>) var_13))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2864919708565679762ULL;
signed char var_8 = (signed char)33;
int var_9 = 1551294763;
unsigned char var_10 = (unsigned char)164;
unsigned short var_13 = (unsigned short)2039;
bool var_14 = (bool)0;
int zero = 0;
short var_15 = (short)9025;
unsigned long long int var_16 = 12020636962768443149ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)0;
    value_mismatch |= var_16 != 164ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_9, var_10, var_13, var_14, zero, &var_15, &var_16);
  checksum();
}
