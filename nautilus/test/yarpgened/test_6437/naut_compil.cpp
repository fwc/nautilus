/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6437
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6437
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<long long int> var_2, val<long long int> var_3, val<unsigned char> var_6, val<unsigned long long int> var_7, val<unsigned char> var_8, val<signed char> var_14, val<int> zero, val<unsigned long long int*> var_16, val<short*> var_17, val<unsigned long long int*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) var_7)) ? (min((((/* implicit */val<long long int>) 134152192U)), (var_2))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_14)) ? (134152186U) : (134152181U)))))), (((/* implicit */val<long long int>) ((val<int>) min((((/* implicit */val<long long int>) 134152192U)), (var_3)))))));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) ((((((/* implicit */val<bool>) var_1)) ? (var_7) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (134152192U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6)))))))) + (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_0))))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_8)))))));
    *var_19 = ((/* implicit */val<bool>) min((*var_19), (((/* implicit */val<bool>) 134152192U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
long long int var_1 = 953433056076017369LL;
long long int var_2 = 1568013930579934298LL;
long long int var_3 = -4061070235570179987LL;
unsigned char var_6 = (unsigned char)56;
unsigned long long int var_7 = 2978844951588687625ULL;
unsigned char var_8 = (unsigned char)227;
signed char var_14 = (signed char)-40;
int zero = 0;
unsigned long long int var_16 = 4876169217049379511ULL;
short var_17 = (short)29541;
unsigned long long int var_18 = 9976619701372974268ULL;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 134152192ULL;
    value_mismatch |= var_17 != (short)-12327;
    value_mismatch |= var_18 != 227ULL;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_8, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
