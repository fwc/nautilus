/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4202
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4202
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
void test(val<short> var_4, val<signed char> var_5, val<int> var_9, val<unsigned short> var_10, val<int> var_12, val<unsigned short> var_14, val<signed char> var_16, val<int> zero, val<signed char*> var_17, val<unsigned long long int*> var_18, val<long long int*> var_19) {
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<int>) var_14))) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_14)) : (var_12))) : (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) (val<bool>)1))))))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) max(((val<signed char>)69), (((/* implicit */val<signed char>) (val<bool>)0))))), (((var_9) | (((/* implicit */val<int>) var_10))))))) : ((-(((val<unsigned long long int>) var_10))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) max(((~(((/* implicit */val<int>) (val<unsigned char>)0)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 16928575638395814677ULL))))))))));
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned char>) ((((val<unsigned long long int>) 349186297)) >= (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) | (12113071873852373402ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-1887;
signed char var_5 = (signed char)-80;
int var_9 = -187635867;
unsigned short var_10 = (unsigned short)13256;
int var_12 = 784095090;
unsigned short var_14 = (unsigned short)53816;
signed char var_16 = (signed char)109;
int zero = 0;
signed char var_17 = (signed char)31;
unsigned long long int var_18 = 849682133396384545ULL;
long long int var_19 = -5241063619970194465LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-19;
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_9, var_10, var_12, var_14, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
