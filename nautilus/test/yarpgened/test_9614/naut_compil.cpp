/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9614
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9614
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
void test(val<bool> var_0, val<signed char> var_1, val<unsigned long long int> var_8, val<unsigned char> var_9, val<unsigned long long int> var_10, val<short> var_11, val<int> zero, val<long long int*> var_13, val<signed char*> var_14, val<int*> var_15) {
    *var_13 = ((/* implicit */val<long long int>) min((*var_13), (((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) max((268435455U), (((/* implicit */val<unsigned int>) (val<bool>)1))))) ? (((/* implicit */val<unsigned long long int>) 442023983136988717LL)) : (((((/* implicit */val<bool>) (val<signed char>)73)) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))))), (((/* implicit */val<unsigned long long int>) ((var_10) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_10) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))))))))))));
    *var_14 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))))) ? (16476391881505806886ULL) : (((/* implicit */val<unsigned long long int>) min((min((((/* implicit */val<unsigned int>) (val<bool>)1)), (1991103461U))), (((/* implicit */val<unsigned int>) var_11)))))));
    *var_15 = (((((((((val<bool>)1) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_9)))) - (((/* implicit */val<int>) max((((/* implicit */val<short>) var_0)), ((val<short>)2155)))))) + (2147483647))) << (((/* implicit */val<int>) var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
signed char var_1 = (signed char)-107;
unsigned long long int var_8 = 13838135518444309667ULL;
unsigned char var_9 = (unsigned char)81;
unsigned long long int var_10 = 381850650128942946ULL;
short var_11 = (short)18312;
int zero = 0;
long long int var_13 = 4029352734730323789LL;
signed char var_14 = (signed char)-90;
int var_15 = -1847517492;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 442023983136988717LL;
    value_mismatch |= var_14 != (signed char)-89;
    value_mismatch |= var_15 != -4526;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
}
