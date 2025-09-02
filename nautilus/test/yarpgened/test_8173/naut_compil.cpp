/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8173
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8173
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
void test(val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15, val<unsigned int*> var_16) {
    *var_12 = ((/* implicit */val<unsigned short>) max((((val<unsigned long long int>) 7684022237824490717ULL)), (((/* implicit */val<unsigned long long int>) max((max((3852993528703935657LL), (((/* implicit */val<long long int>) (val<unsigned short>)27765)))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)43)) ? (((/* implicit */val<int>) (val<short>)26628)) : (((/* implicit */val<int>) (val<unsigned char>)153))))))))));
    *var_13 = ((/* implicit */val<unsigned short>) max((((((((/* implicit */val<int>) (val<bool>)1)) << (((((/* implicit */val<int>) (val<short>)-26629)) + (26641))))) * (((1971867540) % (((/* implicit */val<int>) (val<short>)26628)))))), (max((((/* implicit */val<int>) max(((val<unsigned short>)16054), (((/* implicit */val<unsigned short>) (val<short>)-18716))))), (((((/* implicit */val<bool>) 1210329992U)) ? (((/* implicit */val<int>) (val<unsigned short>)33392)) : (((/* implicit */val<int>) (val<unsigned short>)61159))))))));
    *var_14 = ((/* implicit */val<unsigned char>) max(((val<unsigned short>)1008), (((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) 4219944776U)) ? (((/* implicit */val<int>) (val<short>)26586)) : (((/* implicit */val<int>) (val<short>)4121)))) <= (((255) << (((63) - (46))))))))));
    *var_15 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) (val<unsigned short>)11600)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned short>)31704)))), ((((~(-12))) + (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -3161157556492820053LL)))))))));
    *var_16 += ((/* implicit */val<unsigned int>) (val<short>)1555);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_12 = (unsigned short)28213;
unsigned short var_13 = (unsigned short)2850;
unsigned char var_14 = (unsigned char)215;
unsigned char var_15 = (unsigned char)255;
unsigned int var_16 = 1652654215U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)7389;
    value_mismatch |= var_13 != (unsigned short)16384;
    value_mismatch |= var_14 != (unsigned char)240;
    value_mismatch |= var_15 != (unsigned char)11;
    value_mismatch |= var_16 != 1652655770U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
