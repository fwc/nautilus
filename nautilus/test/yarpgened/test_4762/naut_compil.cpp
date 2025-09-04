/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4762
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4762
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
void test(val<long long int> var_0, val<unsigned short> var_3, val<signed char> var_4, val<unsigned short> var_6, val<unsigned long long int> var_7, val<short> var_8, val<long long int> var_11, val<bool> var_12, val<int> zero, val<short*> var_14, val<unsigned short*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (1980732461) : (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : (min((var_7), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)213)))))) | (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<int>) (val<unsigned char>)255)) >> (((var_11) - (505908514434059606LL))))))))));
    *var_15 = ((/* implicit */val<unsigned short>) (((((~(5008542451301706659ULL))) > (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<signed char>)51))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) + (var_11)))) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))));
    *var_16 = ((/* implicit */val<unsigned short>) min((*var_16), (((/* implicit */val<unsigned short>) (-(var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 453956123365147916LL;
unsigned short var_3 = (unsigned short)11971;
signed char var_4 = (signed char)-64;
unsigned short var_6 = (unsigned short)15567;
unsigned long long int var_7 = 7372123335775308357ULL;
short var_8 = (short)-12374;
long long int var_11 = 505908514434059632LL;
bool var_12 = (bool)1;
int zero = 0;
short var_14 = (short)5455;
unsigned short var_15 = (unsigned short)51515;
unsigned short var_16 = (unsigned short)20385;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-1;
    value_mismatch |= var_15 != (unsigned short)15567;
    value_mismatch |= var_16 != (unsigned short)20385;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_7, var_8, var_11, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
