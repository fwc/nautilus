/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6257
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6257
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
void test(val<unsigned short> var_4, val<long long int> var_5, val<unsigned short> var_7, val<unsigned int> var_8, val<unsigned int> var_11, val<signed char> var_12, val<int> zero, val<short*> var_13, val<bool*> var_14, val<unsigned long long int*> var_15, val<long long int*> var_16) {
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_7)) ? ((+(((/* implicit */val<int>) ((val<short>) var_5))))) : (((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)39350)) ^ (((/* implicit */val<int>) (val<unsigned short>)65215))))))));
    *var_14 = ((/* implicit */val<bool>) var_12);
    *var_15 = ((/* implicit */val<unsigned long long int>) min((*var_15), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_4)) | (((/* implicit */val<int>) ((var_8) > (var_11)))))))));
    *var_16 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56359;
long long int var_5 = 4751714306896627346LL;
unsigned short var_7 = (unsigned short)39681;
unsigned int var_8 = 2179421762U;
unsigned int var_11 = 3902371111U;
signed char var_12 = (signed char)31;
int zero = 0;
short var_13 = (short)20033;
bool var_14 = (bool)1;
unsigned long long int var_15 = 10806122227023417738ULL;
long long int var_16 = -3109876270098566429LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)1682;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 56359ULL;
    value_mismatch |= var_16 != -3109876270098566398LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_8, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
