/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9564
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9564
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
void test(val<signed char> var_0, val<unsigned char> var_2, val<unsigned short> var_3, val<unsigned long long int> var_4, val<int> var_5, val<int> var_6, val<signed char> var_8, val<unsigned char> var_10, val<short> var_11, val<int> zero, val<short*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_11)) / (var_6)))) ? (((var_4) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))))) : ((-(var_4)))))) ? (((/* implicit */val<int>) ((((val<unsigned long long int>) var_0)) != (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_2)))))))) : (min((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_3)))), (((((/* implicit */val<bool>) var_10)) ? (var_6) : (((/* implicit */val<int>) (val<unsigned short>)39232))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) ((var_4) >= (((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) var_5)) ? (var_5) : (var_6))), (((/* implicit */val<int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned char var_2 = (unsigned char)26;
unsigned short var_3 = (unsigned short)57032;
unsigned long long int var_4 = 7388541375374241036ULL;
int var_5 = 265804387;
int var_6 = -2097509285;
signed char var_8 = (signed char)(-127 - 1);
unsigned char var_10 = (unsigned char)83;
short var_11 = (short)-5907;
int zero = 0;
short var_12 = (short)-744;
unsigned long long int var_13 = 7277435872401645152ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)1;
    value_mismatch |= var_13 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_10, var_11, zero, &var_12, &var_13);
  checksum();
}
