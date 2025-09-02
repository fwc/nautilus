/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9266
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9266
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
void test(val<unsigned short> var_1, val<short> var_5, val<short> var_6, val<long long int> var_7, val<unsigned long long int> var_11, val<unsigned long long int> var_14, val<short> var_16, val<unsigned long long int> var_18, val<int> zero, val<signed char*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)7))) : (var_7)))))) ? (min((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_18))))), (((val<long long int>) 15154083981692771642ULL)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) (((val<bool>)1) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_6))))) != (min((-8406743602386121288LL), (((/* implicit */val<long long int>) (val<bool>)0))))))))));
    *var_21 ^= ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) var_16)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_11)))) ? (var_14) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<bool>)1)), ((val<unsigned short>)45536)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9399;
short var_5 = (short)9211;
short var_6 = (short)27788;
long long int var_7 = 6273207951038647590LL;
unsigned long long int var_11 = 10671083496987035402ULL;
unsigned long long int var_14 = 6516594963889591571ULL;
short var_16 = (short)15453;
unsigned long long int var_18 = 1875034824140364064ULL;
int zero = 0;
signed char var_20 = (signed char)84;
signed char var_21 = (signed char)37;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)58;
    value_mismatch |= var_21 != (signed char)54;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_7, var_11, var_14, var_16, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
