/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9567
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9567
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
void test(val<long long int> var_0, val<long long int> var_3, val<short> var_6, val<unsigned int> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned long long int*> var_11, val<int*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<short*> var_15) {
    *var_11 = ((/* implicit */val<unsigned long long int>) var_8);
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) var_6)), ((-(var_8)))))) >= (var_3)));
    *var_13 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) (val<unsigned char>)66)), (min(((val<unsigned short>)43674), (((/* implicit */val<unsigned short>) var_6))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) min((*var_14), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) max((max((((/* implicit */val<short>) var_9)), (var_6))), (((/* implicit */val<short>) ((val<bool>) var_0)))))), (((val<unsigned int>) min((((/* implicit */val<long long int>) (val<bool>)1)), (3743701955241626461LL)))))))));
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) min((((((/* implicit */val<bool>) var_9)) ? (var_8) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))))), (((/* implicit */val<unsigned int>) (val<unsigned char>)111)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3877339549797861457LL;
long long int var_3 = -7827670278205259304LL;
short var_6 = (short)23375;
unsigned int var_8 = 2075750652U;
unsigned char var_9 = (unsigned char)46;
int zero = 0;
unsigned long long int var_11 = 12911847590563689762ULL;
int var_12 = 677919790;
unsigned long long int var_13 = 1313104385644468996ULL;
unsigned long long int var_14 = 4140250339403611390ULL;
short var_15 = (short)27905;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 2075750652ULL;
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != 23375ULL;
    value_mismatch |= var_14 != 1ULL;
    value_mismatch |= var_15 != (short)27905;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
