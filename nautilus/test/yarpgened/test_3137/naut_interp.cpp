/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3137
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3137
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
void test(val<unsigned char> var_3, val<unsigned int> var_5, val<short> var_6, val<unsigned char> var_7, val<unsigned char> var_8, val<int> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned char*> var_19, val<int*> var_20, val<int*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 561162879U)) ? (((/* implicit */val<int>) (val<unsigned short>)50825)) : (var_11)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1995031379)) ? (561162866U) : (var_5)))))), ((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (-49627277) : (((/* implicit */val<int>) var_7)))))))));
    *var_20 = ((/* implicit */val<int>) var_3);
    *var_21 = ((/* implicit */val<int>) ((((((var_5) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-27894))))) >> (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)-1)) > (((/* implicit */val<int>) (val<short>)2589))))))) * (((/* implicit */val<unsigned int>) min((((((/* implicit */val<int>) var_8)) << (((9223372036854775785LL) - (9223372036854775780LL))))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3890748873U))))))))));
    *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<unsigned char>) (((val<bool>)1) ? (((/* implicit */val<int>) var_12)) : (var_11))))) * ((((!(((/* implicit */val<bool>) 378447060U)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1953975485U))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)235;
unsigned int var_5 = 2828083385U;
short var_6 = (short)31458;
unsigned char var_7 = (unsigned char)221;
unsigned char var_8 = (unsigned char)135;
int var_11 = 1363843538;
unsigned short var_12 = (unsigned short)21774;
int zero = 0;
unsigned char var_19 = (unsigned char)21;
int var_20 = -1037797973;
int var_21 = 1306658737;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)1;
    value_mismatch |= var_20 != 235;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_7, var_8, var_11, var_12, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
