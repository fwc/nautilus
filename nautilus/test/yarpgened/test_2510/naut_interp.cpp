/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2510
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2510
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<unsigned int> var_2, val<long long int> var_3, val<long long int> var_5, val<unsigned short> var_6, val<signed char> var_7, val<long long int> var_8, val<int> var_10, val<unsigned char> var_11, val<long long int> var_12, val<long long int> var_15, val<unsigned short> var_16, val<int> zero, val<unsigned char*> var_17, val<bool*> var_18, val<unsigned char*> var_19, val<signed char*> var_20, val<unsigned char*> var_21) {
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_5)))))))) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_6))))) ? (var_1) : (var_12))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16)))));
    *var_18 = ((/* implicit */val<bool>) max((max(((~(var_3))), (((/* implicit */val<long long int>) max((var_0), (var_11)))))), (((/* implicit */val<long long int>) var_7))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((max((((/* implicit */val<long long int>) var_10)), (var_1))), (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) var_2)) : (var_5)))))) || (((/* implicit */val<bool>) max((var_8), (((/* implicit */val<long long int>) var_16)))))));
    *var_20 *= ((/* implicit */val<signed char>) var_5);
    *var_21 = ((/* implicit */val<unsigned char>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
long long int var_1 = -3686256479625847242LL;
unsigned int var_2 = 1013115804U;
long long int var_3 = -593968107536094197LL;
long long int var_5 = -2860136805147170550LL;
unsigned short var_6 = (unsigned short)11641;
signed char var_7 = (signed char)45;
long long int var_8 = 8598170545921955679LL;
int var_10 = -925222777;
unsigned char var_11 = (unsigned char)8;
long long int var_12 = 7302387248068343103LL;
long long int var_15 = 6465855611530472241LL;
unsigned short var_16 = (unsigned short)6213;
int zero = 0;
unsigned char var_17 = (unsigned char)149;
bool var_18 = (bool)0;
unsigned char var_19 = (unsigned char)223;
signed char var_20 = (signed char)-39;
unsigned char var_21 = (unsigned char)44;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)69;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned char)1;
    value_mismatch |= var_20 != (signed char)122;
    value_mismatch |= var_21 != (unsigned char)49;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
