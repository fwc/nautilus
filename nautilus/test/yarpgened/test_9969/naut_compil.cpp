/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9969
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9969
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
void test(val<unsigned char> var_2, val<unsigned char> var_5, val<bool> var_8, val<signed char> var_14, val<int> zero, val<unsigned int*> var_19, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<unsigned char*> var_22, val<unsigned long long int*> var_23) {
    *var_19 = ((/* implicit */val<unsigned int>) 12823761966732143701ULL);
    *var_20 = ((/* implicit */val<unsigned short>) ((var_8) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_5))));
    *var_21 = ((/* implicit */val<unsigned long long int>) (-((+(((/* implicit */val<int>) (val<unsigned char>)103))))));
    *var_22 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_2))));
    *var_23 |= ((/* implicit */val<unsigned long long int>) (val<short>)-22);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)175;
unsigned char var_5 = (unsigned char)17;
bool var_8 = (bool)0;
signed char var_14 = (signed char)11;
int zero = 0;
unsigned int var_19 = 2830933526U;
unsigned short var_20 = (unsigned short)38120;
unsigned long long int var_21 = 10512046196075287223ULL;
unsigned char var_22 = (unsigned char)166;
unsigned long long int var_23 = 2836211641422042161ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3342593109U;
    value_mismatch |= var_20 != (unsigned short)17;
    value_mismatch |= var_21 != 18446744073709551513ULL;
    value_mismatch |= var_22 != (unsigned char)80;
    value_mismatch |= var_23 != 18446744073709551611ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_14, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
