/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3914
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3914
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
void test(val<unsigned short> var_1, val<int> var_2, val<unsigned long long int> var_3, val<signed char> var_4, val<int> var_5, val<long long int> var_9, val<int> zero, val<unsigned char*> var_11, val<unsigned char*> var_12) {
    *var_11 ^= ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<unsigned char>)0)), (4465833534562175555LL)))))) ? (6592572534932005130ULL) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (val<unsigned short>)42321)), (-7677802441000765974LL))))));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<signed char>)-75)) ? (-4465833534562175555LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-9388))))), (((((/* implicit */val<bool>) 6592572534932005153ULL)) ? (var_9) : (((/* implicit */val<long long int>) 1103607472))))))) ? (max((min((var_3), (((/* implicit */val<unsigned long long int>) var_4)))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<unsigned char>)63)), (var_5)))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (3977295905U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)40)) ? (((/* implicit */val<int>) (val<unsigned short>)35354)) : (((/* implicit */val<int>) (val<signed char>)105))))) : (((((/* implicit */val<unsigned long long int>) var_9)) & (6592572534932005141ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23730;
int var_2 = 2108783012;
unsigned long long int var_3 = 5116049734739314805ULL;
signed char var_4 = (signed char)-99;
int var_5 = -1866660814;
long long int var_9 = -1717972764607949826LL;
int zero = 0;
unsigned char var_11 = (unsigned char)84;
unsigned char var_12 = (unsigned char)75;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)190;
    value_mismatch |= var_12 != (unsigned char)117;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
