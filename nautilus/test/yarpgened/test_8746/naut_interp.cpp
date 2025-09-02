/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8746
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8746
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
void test(val<bool> var_0, val<int> var_2, val<unsigned char> var_3, val<unsigned long long int> var_4, val<short> var_5, val<bool> var_8, val<signed char> var_10, val<int> zero, val<bool*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((/* implicit */val<bool>) var_3);
    *var_12 ^= ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) ((val<unsigned short>) var_8))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (((((/* implicit */val<bool>) var_2)) ? (var_4) : (var_4))))), (var_4)));
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) var_10)) + (2147483647))) >> (((/* implicit */val<int>) ((val<short>) var_0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_2 = -257576511;
unsigned char var_3 = (unsigned char)154;
unsigned long long int var_4 = 18042991539239886923ULL;
short var_5 = (short)9950;
bool var_8 = (bool)1;
signed char var_10 = (signed char)-87;
int zero = 0;
bool var_11 = (bool)0;
signed char var_12 = (signed char)37;
unsigned long long int var_13 = 2437265133828996483ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (signed char)110;
    value_mismatch |= var_13 != 2147483560ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
