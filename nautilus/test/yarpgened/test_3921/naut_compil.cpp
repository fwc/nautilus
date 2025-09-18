/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3921
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3921
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
void test(val<signed char> var_1, val<long long int> var_2, val<long long int> var_3, val<unsigned char> var_9, val<unsigned short> var_13, val<int> var_14, val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16, val<short*> var_17, val<short*> var_18) {
    *var_15 -= ((val<unsigned char>) var_1);
    *var_16 = ((/* implicit */val<unsigned char>) (-(((((((/* implicit */val<int>) var_13)) > (((/* implicit */val<int>) var_9)))) ? (var_3) : (var_3)))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<short>) (val<unsigned short>)42501)))))) < (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -7612598577302539713LL)) ? (var_2) : (((/* implicit */val<long long int>) var_14))))) ? (((val<int>) var_2)) : ((~(((/* implicit */val<int>) var_1))))))));
    *var_18 = ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
long long int var_2 = 1075695521093657048LL;
long long int var_3 = -1240722151025707867LL;
unsigned char var_9 = (unsigned char)137;
unsigned short var_13 = (unsigned short)21483;
int var_14 = -718402265;
int zero = 0;
unsigned char var_15 = (unsigned char)82;
unsigned char var_16 = (unsigned char)51;
short var_17 = (short)5940;
short var_18 = (short)28813;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)34;
    value_mismatch |= var_16 != (unsigned char)91;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (short)29861;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_9, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
