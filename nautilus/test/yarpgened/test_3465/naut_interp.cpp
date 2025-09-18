/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3465
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3465
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
void test(val<signed char> var_0, val<unsigned int> var_2, val<unsigned long long int> var_3, val<signed char> var_4, val<short> var_6, val<unsigned char> var_7, val<long long int> var_9, val<int> zero, val<short*> var_12, val<unsigned long long int*> var_13, val<long long int*> var_14, val<short*> var_15) {
    *var_12 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<int>) var_6)) & (((/* implicit */val<int>) var_7))))))), (((val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_14 &= ((/* implicit */val<long long int>) ((var_2) << (((min((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (10309891086925824513ULL))), (((/* implicit */val<unsigned long long int>) max((var_9), (((/* implicit */val<long long int>) var_6))))))) - (5450175642084624993ULL)))));
    *var_15 = ((/* implicit */val<short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned int var_2 = 669428330U;
unsigned long long int var_3 = 1731661651584387486ULL;
signed char var_4 = (signed char)0;
short var_6 = (short)11624;
unsigned char var_7 = (unsigned char)57;
long long int var_9 = 5450175642084625010LL;
int zero = 0;
short var_12 = (short)-28995;
unsigned long long int var_13 = 13345120608010417352ULL;
long long int var_14 = 2717588289812519436LL;
short var_15 = (short)-15956;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != 669428330ULL;
    value_mismatch |= var_14 != 335544320LL;
    value_mismatch |= var_15 != (short)-13710;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_7, var_9, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
