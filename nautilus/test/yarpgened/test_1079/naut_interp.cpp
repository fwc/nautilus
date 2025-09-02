/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1079
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1079
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
void test(val<unsigned char> var_1, val<bool> var_12, val<unsigned long long int> var_14, val<long long int> var_15, val<long long int> var_16, val<unsigned short> var_17, val<unsigned long long int> var_18, val<int> zero, val<unsigned int*> var_20, val<unsigned short*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((var_16), (var_15)))) && (((/* implicit */val<bool>) ((var_16) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12)))))))))) & (((((/* implicit */val<bool>) ((val<int>) var_14))) ? (min((var_14), (((/* implicit */val<unsigned long long int>) var_17)))) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_1)))))))));
    *var_21 = ((/* implicit */val<unsigned short>) var_18);
    *var_22 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)252);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
bool var_12 = (bool)1;
unsigned long long int var_14 = 16724569322297253700ULL;
long long int var_15 = 1655320906954570071LL;
long long int var_16 = -7775353088099192058LL;
unsigned short var_17 = (unsigned short)8091;
unsigned long long int var_18 = 7953454090782430728ULL;
int zero = 0;
unsigned int var_20 = 875949092U;
unsigned short var_21 = (unsigned short)24936;
unsigned long long int var_22 = 11539695910226214101ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1U;
    value_mismatch |= var_21 != (unsigned short)54792;
    value_mismatch |= var_22 != 252ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, var_14, var_15, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
