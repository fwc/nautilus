/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4479
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4479
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_2, val<unsigned short> var_6, val<unsigned short> var_9, val<bool> var_11, val<bool> var_12, val<unsigned short> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) min((((((/* implicit */val<bool>) ((0ULL) + (((/* implicit */val<unsigned long long int>) (-2147483647 - 1)))))) ? (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (0ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_11)) / (((/* implicit */val<int>) (val<signed char>)-38))))))), (max((((0ULL) ^ (((/* implicit */val<unsigned long long int>) 3459914685U)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_11))))))))))));
    *var_15 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_0)) ? ((-(4772131870961215317ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_6)) ^ (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_9)))))))));
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) - (18446744073709551615ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15414542948623959284ULL;
unsigned long long int var_2 = 90516850227645785ULL;
unsigned short var_6 = (unsigned short)3063;
unsigned short var_9 = (unsigned short)26425;
bool var_11 = (bool)1;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)63839;
int zero = 0;
unsigned char var_14 = (unsigned char)37;
unsigned short var_15 = (unsigned short)40237;
signed char var_16 = (signed char)51;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)247;
    value_mismatch |= var_15 != (unsigned short)56751;
    value_mismatch |= var_16 != (signed char)2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_9, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
