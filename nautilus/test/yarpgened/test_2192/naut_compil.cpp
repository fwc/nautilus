/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2192
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
void test(val<unsigned int> var_0, val<unsigned short> var_2, val<unsigned char> var_3, val<short> var_4, val<unsigned long long int> var_5, val<unsigned short> var_6, val<unsigned short> var_7, val<int> var_9, val<unsigned int> var_11, val<unsigned int> var_12, val<signed char> var_14, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<long long int*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21) {
    *var_17 -= ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<unsigned char>)197)), (((((/* implicit */val<int>) var_6)) * ((-(((/* implicit */val<int>) (val<unsigned short>)16367))))))));
    *var_18 -= (-(min((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) var_11)) : (var_5))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)12)) ? (var_9) : (373467004)))))));
    *var_19 = ((/* implicit */val<long long int>) var_4);
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) 2253448590U))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_12) != (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<signed char>)-55)) : (((/* implicit */val<int>) (val<unsigned char>)197))))))))) : (max((min((var_0), (0U))), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_14)))))))));
    *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2699482568U;
unsigned short var_2 = (unsigned short)43723;
unsigned char var_3 = (unsigned char)76;
short var_4 = (short)6106;
unsigned long long int var_5 = 14923252485456614407ULL;
unsigned short var_6 = (unsigned short)9833;
unsigned short var_7 = (unsigned short)15034;
int var_9 = -1398783477;
unsigned int var_11 = 2868969855U;
unsigned int var_12 = 493650532U;
signed char var_14 = (signed char)77;
int zero = 0;
unsigned long long int var_17 = 7211170657542700483ULL;
unsigned long long int var_18 = 14473155327781730845ULL;
long long int var_19 = -2720194067614405228LL;
unsigned long long int var_20 = 16057108620843236108ULL;
signed char var_21 = (signed char)115;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 7211170657542700286ULL;
    value_mismatch |= var_18 != 14473155330650700700ULL;
    value_mismatch |= var_19 != 6106LL;
    value_mismatch |= var_20 != 1ULL;
    value_mismatch |= var_21 != (signed char)115;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_11, var_12, var_14, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
