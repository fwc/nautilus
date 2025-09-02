/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6804
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6804
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
void test(val<unsigned char> var_0, val<bool> var_3, val<unsigned long long int> var_6, val<bool> var_9, val<unsigned short> var_11, val<signed char> var_13, val<unsigned long long int> var_15, val<int> zero, val<bool*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (max((min((((/* implicit */val<long long int>) var_11)), (35184372088831LL))), (((/* implicit */val<long long int>) var_0))))));
    *var_21 = ((/* implicit */val<unsigned int>) (((((+(var_15))) < (((/* implicit */val<unsigned long long int>) ((val<long long int>) 35184372088831LL))))) ? (((val<long long int>) (+(((/* implicit */val<int>) var_9))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
bool var_3 = (bool)0;
unsigned long long int var_6 = 15271092094418678546ULL;
bool var_9 = (bool)1;
unsigned short var_11 = (unsigned short)24456;
signed char var_13 = (signed char)25;
unsigned long long int var_15 = 8048340101992112801ULL;
int zero = 0;
bool var_20 = (bool)1;
unsigned int var_21 = 3125507806U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_9, var_11, var_13, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
