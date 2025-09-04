/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8511
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8511
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
void test(val<unsigned long long int> var_2, val<unsigned char> var_8, val<unsigned int> var_11, val<short> var_13, val<unsigned long long int> var_14, val<int> zero, val<unsigned char*> var_17, val<short*> var_18, val<signed char*> var_19, val<unsigned int*> var_20, val<long long int*> var_21) {
    *var_17 = ((/* implicit */val<unsigned char>) ((((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (3228595664216088669ULL))) << ((((~(3228595664216088669ULL))) - (15218148409493462931ULL))))) % (var_2)));
    *var_18 = ((/* implicit */val<short>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) <= (var_14))) ? (2211038378U) : (max((3780600051U), (((/* implicit */val<unsigned int>) 1283091588))))));
    *var_19 = ((/* implicit */val<signed char>) ((val<int>) (val<unsigned char>)0));
    *var_20 = ((/* implicit */val<unsigned int>) 3228595664216088662ULL);
    *var_21 = ((/* implicit */val<long long int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17246975490821777136ULL;
unsigned char var_8 = (unsigned char)106;
unsigned int var_11 = 759406117U;
short var_13 = (short)18647;
unsigned long long int var_14 = 3846122534347689650ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)26;
short var_18 = (short)-25074;
signed char var_19 = (signed char)-50;
unsigned int var_20 = 173671589U;
long long int var_21 = -1515206954800533588LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (short)-15190;
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != 2566348886U;
    value_mismatch |= var_21 != 18647LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_11, var_13, var_14, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
