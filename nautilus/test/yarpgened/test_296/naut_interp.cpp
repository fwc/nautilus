/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 296
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=296
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
void test(val<long long int> var_0, val<signed char> var_2, val<unsigned short> var_3, val<signed char> var_4, val<unsigned char> var_7, val<unsigned short> var_8, val<long long int> var_10, val<unsigned short> var_13, val<unsigned char> var_15, val<long long int> var_16, val<int> zero, val<unsigned char*> var_17, val<bool*> var_18, val<bool*> var_19) {
    *var_17 = ((/* implicit */val<unsigned char>) min((*var_17), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) << (((((/* implicit */val<int>) var_13)) - (26418)))))) ? (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (var_10))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))))))));
    *var_18 *= ((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_15)) == (((/* implicit */val<int>) max((var_8), (var_3)))))))));
    *var_19 = ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (var_0) : (var_16)))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_4)), (var_13))))))), (((((var_16) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4457093209802661864LL;
signed char var_2 = (signed char)96;
unsigned short var_3 = (unsigned short)65215;
signed char var_4 = (signed char)-117;
unsigned char var_7 = (unsigned char)167;
unsigned short var_8 = (unsigned short)33724;
long long int var_10 = -5724118823851279155LL;
unsigned short var_13 = (unsigned short)26434;
unsigned char var_15 = (unsigned char)84;
long long int var_16 = 596040765647908578LL;
int zero = 0;
unsigned char var_17 = (unsigned char)221;
bool var_18 = (bool)0;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_7, var_8, var_10, var_13, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
