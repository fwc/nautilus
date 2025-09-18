/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7228
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7228
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
void test(val<unsigned char> var_1, val<int> var_2, val<unsigned char> var_5, val<unsigned long long int> var_11, val<unsigned int> var_12, val<int> var_14, val<unsigned short> var_15, val<unsigned short> var_19, val<int> zero, val<signed char*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)43643)), ((~(var_11)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (var_12)))) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_19)) : (var_14))) : (((/* implicit */val<int>) ((2856784616103196944ULL) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))))))))) : (min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) 15589959457606354671ULL))))), (max((2856784616103196944ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)35))))))));
    *var_21 = ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
int var_2 = 2027574494;
unsigned char var_5 = (unsigned char)73;
unsigned long long int var_11 = 2438422633203931975ULL;
unsigned int var_12 = 1415018033U;
int var_14 = 1305817547;
unsigned short var_15 = (unsigned short)52138;
unsigned short var_19 = (unsigned short)14622;
int zero = 0;
signed char var_20 = (signed char)-126;
unsigned char var_21 = (unsigned char)125;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)30;
    value_mismatch |= var_21 != (unsigned char)224;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_11, var_12, var_14, var_15, var_19, zero, &var_20, &var_21);
  checksum();
}
