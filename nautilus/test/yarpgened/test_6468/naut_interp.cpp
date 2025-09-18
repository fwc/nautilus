/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6468
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6468
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
void test(val<unsigned short> var_1, val<unsigned int> var_2, val<unsigned int> var_3, val<long long int> var_9, val<unsigned short> var_13, val<unsigned long long int> var_15, val<unsigned short> var_17, val<int> zero, val<long long int*> var_18, val<signed char*> var_19, val<unsigned int*> var_20) {
    *var_18 += ((((/* implicit */val<bool>) max((((((/* implicit */val<unsigned long long int>) -5194229493699766753LL)) ^ (var_15))), (((/* implicit */val<unsigned long long int>) (val<short>)3))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17))) - (var_3)))) ? (((-5194229493699766752LL) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)235))))) : (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_13))))))) : (max((var_9), (((/* implicit */val<long long int>) var_2)))));
    *var_19 = ((/* implicit */val<signed char>) ((val<unsigned long long int>) (-(((/* implicit */val<int>) var_1)))));
    *var_20 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) -5194229493699766758LL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3680;
unsigned int var_2 = 2802230814U;
unsigned int var_3 = 1019680039U;
long long int var_9 = -2882925462863649768LL;
unsigned short var_13 = (unsigned short)63495;
unsigned long long int var_15 = 13889865735143124872ULL;
unsigned short var_17 = (unsigned short)806;
int zero = 0;
long long int var_18 = -2500081792188829283LL;
signed char var_19 = (signed char)-104;
unsigned int var_20 = 2222402137U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -7694311285888595800LL;
    value_mismatch |= var_19 != (signed char)-96;
    value_mismatch |= var_20 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_9, var_13, var_15, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
