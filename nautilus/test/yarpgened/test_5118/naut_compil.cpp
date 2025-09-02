/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5118
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5118
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
void test(val<unsigned long long int> var_3, val<int> var_5, val<unsigned short> var_8, val<short> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13, val<short*> var_14, val<unsigned long long int*> var_15) {
    *var_12 = ((val<unsigned long long int>) 80524137);
    *var_13 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) ((val<unsigned short>) max((((/* implicit */val<short>) (val<unsigned char>)252)), (var_10))))), (((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<unsigned short>)65535)) : (-80524135))) : ((~(var_5)))))));
    *var_14 += ((/* implicit */val<short>) var_11);
    *var_15 = var_3;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8662958877919599307ULL;
int var_5 = -1550327634;
unsigned short var_8 = (unsigned short)58112;
short var_10 = (short)-19352;
unsigned char var_11 = (unsigned char)246;
int zero = 0;
unsigned long long int var_12 = 8656169024558028004ULL;
unsigned long long int var_13 = 6233257522239887564ULL;
short var_14 = (short)-25636;
unsigned long long int var_15 = 5227519279554330882ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 80524137ULL;
    value_mismatch |= var_13 != 65535ULL;
    value_mismatch |= var_14 != (short)-25390;
    value_mismatch |= var_15 != 8662958877919599307ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
