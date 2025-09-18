/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4523
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4523
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
void test(val<unsigned int> var_1, val<unsigned int> var_5, val<short> var_8, val<unsigned int> var_10, val<short> var_12, val<short> var_13, val<unsigned short> var_14, val<short> var_17, val<long long int> var_18, val<int> zero, val<signed char*> var_19, val<long long int*> var_20, val<unsigned short*> var_21, val<int*> var_22, val<unsigned int*> var_23) {
    *var_19 = ((/* implicit */val<signed char>) ((val<unsigned int>) ((((/* implicit */val<int>) var_14)) << (((((((/* implicit */val<bool>) var_1)) ? (8965515123322265742LL) : (var_18))) - (8965515123322265741LL))))));
    *var_20 = ((/* implicit */val<long long int>) (~(-1755525352)));
    *var_21 = ((/* implicit */val<unsigned short>) 1755525353);
    *var_22 = ((/* implicit */val<int>) ((((((/* implicit */val<bool>) min((-4995603136051641011LL), (((/* implicit */val<long long int>) var_17))))) || (((/* implicit */val<bool>) ((var_10) >> (((((/* implicit */val<int>) (val<short>)12987)) - (12966)))))))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)6140)) ? (((/* implicit */val<int>) (val<short>)-31285)) : (((/* implicit */val<int>) (val<unsigned short>)25305))))) : (((((/* implicit */val<bool>) -8965515123322265748LL)) ? (534869276628860668LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-24))) * (1023U))))));
    *var_23 = ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<short>)-31285)) > (((/* implicit */val<int>) (val<short>)32767)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_12))))) : (((((/* implicit */val<bool>) (val<unsigned short>)15515)) ? (var_18) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)32755)))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) (val<short>)-21571)) ? (591077282U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)38631))))) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)26))))))) : (3304376916U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 135815458U;
unsigned int var_5 = 1315453716U;
short var_8 = (short)23178;
unsigned int var_10 = 3046291940U;
short var_12 = (short)14797;
short var_13 = (short)-20412;
unsigned short var_14 = (unsigned short)705;
short var_17 = (short)1013;
long long int var_18 = -7710396154337614601LL;
int zero = 0;
signed char var_19 = (signed char)85;
long long int var_20 = -5001842319524581583LL;
unsigned short var_21 = (unsigned short)36807;
int var_22 = -665924342;
unsigned int var_23 = 58880179U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-126;
    value_mismatch |= var_20 != 1755525351LL;
    value_mismatch |= var_21 != (unsigned short)12521;
    value_mismatch |= var_22 != -31285;
    value_mismatch |= var_23 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_8, var_10, var_12, var_13, var_14, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
