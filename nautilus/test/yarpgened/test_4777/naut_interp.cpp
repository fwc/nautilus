/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4777
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4777
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
void test(val<int> var_0, val<int> var_1, val<unsigned short> var_10, val<signed char> var_11, val<int> var_12, val<int> zero, val<bool*> var_13, val<long long int*> var_14, val<int*> var_15, val<unsigned long long int*> var_16) {
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)246)))))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) && (((/* implicit */val<bool>) (val<unsigned short>)46868))))) : (((/* implicit */val<int>) var_10))));
    *var_14 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (((((~(((/* implicit */val<int>) (val<signed char>)105)))) + (2147483647))) << (((419766536U) - (419766536U)))))), (419766522U)));
    *var_15 -= ((/* implicit */val<int>) var_10);
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)2330))) ^ (min((((/* implicit */val<long long int>) var_0)), (((7776370016023295092LL) << (((var_12) + (560189632)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1163400002;
int var_1 = -94015888;
unsigned short var_10 = (unsigned short)58531;
signed char var_11 = (signed char)124;
int var_12 = -560189631;
int zero = 0;
bool var_13 = (bool)0;
long long int var_14 = -6823910748109879002LL;
int var_15 = -201995329;
unsigned long long int var_16 = 2342878514343041517ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 2147483541LL;
    value_mismatch |= var_15 != -202053860;
    value_mismatch |= var_16 != 15552740032046588402ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
