/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1150
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1150
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
void test(val<unsigned char> var_0, val<long long int> var_3, val<signed char> var_4, val<bool> var_5, val<bool> var_7, val<unsigned long long int> var_9, val<int> var_11, val<int> zero, val<bool*> var_13, val<unsigned char*> var_14, val<short*> var_15, val<short*> var_16) {
    *var_13 += ((/* implicit */val<bool>) ((((/* implicit */val<bool>) 14964732194497206400ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_5) ? (2114274611U) : (2114274611U)))))))) : (((((var_9) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) 8589930496LL))))))));
    *var_14 = ((/* implicit */val<unsigned char>) ((val<int>) ((((/* implicit */val<bool>) (-(var_3)))) ? ((+(397846189U))) : (((/* implicit */val<unsigned int>) min((var_11), (((/* implicit */val<int>) (val<unsigned short>)3483))))))));
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) != (3599916895077374095LL))), (((((/* implicit */val<bool>) (val<unsigned short>)3483)) && (var_7))))))) * (((val<unsigned long long int>) (val<unsigned short>)3476))));
    *var_16 *= ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
long long int var_3 = -1947316543328996760LL;
signed char var_4 = (signed char)14;
bool var_5 = (bool)0;
bool var_7 = (bool)0;
unsigned long long int var_9 = 10753854872972429855ULL;
int var_11 = 766870893;
int zero = 0;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)138;
short var_15 = (short)-12423;
short var_16 = (short)11849;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)173;
    value_mismatch |= var_15 != (short)3476;
    value_mismatch |= var_16 != (short)-25470;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_7, var_9, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
