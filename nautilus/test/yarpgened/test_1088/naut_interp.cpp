/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1088
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1088
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
void test(val<unsigned long long int> var_0, val<int> var_4, val<bool> var_5, val<int> var_12, val<signed char> var_16, val<int> zero, val<unsigned long long int*> var_17, val<short*> var_18, val<short*> var_19, val<unsigned char*> var_20, val<signed char*> var_21) {
    *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)6))));
    *var_18 = ((/* implicit */val<short>) var_4);
    *var_19 -= ((/* implicit */val<short>) max((((val<unsigned long long int>) var_4)), (((/* implicit */val<unsigned long long int>) var_5))));
    *var_20 |= ((/* implicit */val<unsigned char>) (-(var_12)));
    *var_21 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) (val<unsigned char>)4))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) : (((((((/* implicit */val<bool>) -1060603974)) ? (var_0) : (((/* implicit */val<unsigned long long int>) 1060603969)))) + (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<short>)14433)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10943730319703903471ULL;
int var_4 = 1739648534;
bool var_5 = (bool)0;
int var_12 = -2062126300;
signed char var_16 = (signed char)-84;
int zero = 0;
unsigned long long int var_17 = 8299580927718679580ULL;
short var_18 = (short)25899;
short var_19 = (short)-16266;
unsigned char var_20 = (unsigned char)238;
signed char var_21 = (signed char)-113;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 6ULL;
    value_mismatch |= var_18 != (short)-4586;
    value_mismatch |= var_19 != (short)-11680;
    value_mismatch |= var_20 != (unsigned char)254;
    value_mismatch |= var_21 != (signed char)20;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_12, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
