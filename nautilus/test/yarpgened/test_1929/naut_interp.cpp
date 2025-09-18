/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1929
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1929
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
void test(val<signed char> var_0, val<long long int> var_2, val<signed char> var_5, val<signed char> var_6, val<signed char> var_7, val<signed char> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned char*> var_13, val<signed char*> var_14, val<signed char*> var_15, val<int*> var_16) {
    *var_13 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) | (var_2)));
    *var_14 = ((/* implicit */val<signed char>) max(((~(((/* implicit */val<int>) max((var_5), (var_6)))))), (((/* implicit */val<int>) var_7))));
    *var_15 = var_0;
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_6)) >> ((((~(((/* implicit */val<int>) var_7)))) + (124)))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<int>) var_7)) - (((/* implicit */val<int>) var_11)))) : (((/* implicit */val<int>) var_5))))) : (((var_2) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) (val<unsigned char>)9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
long long int var_2 = 1490521256526809129LL;
signed char var_5 = (signed char)108;
signed char var_6 = (signed char)40;
signed char var_7 = (signed char)100;
signed char var_10 = (signed char)-50;
unsigned short var_11 = (unsigned short)8985;
int zero = 0;
unsigned char var_13 = (unsigned char)252;
signed char var_14 = (signed char)-118;
signed char var_15 = (signed char)-86;
int var_16 = -866762987;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)125;
    value_mismatch |= var_14 != (signed char)100;
    value_mismatch |= var_15 != (signed char)117;
    value_mismatch |= var_16 != -1988949976;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_7, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
