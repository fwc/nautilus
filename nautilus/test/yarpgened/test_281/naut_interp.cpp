/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 281
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=281
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
void test(val<unsigned char> var_2, val<signed char> var_7, val<bool> var_10, val<unsigned char> var_12, val<signed char> var_16, val<int> zero, val<long long int*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) * (((/* implicit */val<int>) var_7)))))))), (min((((((/* implicit */val<int>) var_2)) ^ (((/* implicit */val<int>) var_10)))), (((/* implicit */val<int>) var_16))))));
    *var_19 = ((/* implicit */val<int>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 620268527)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)10704))) : (26ULL)))) ? (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<bool>)0))))) : (2661396172U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
signed char var_7 = (signed char)-46;
bool var_10 = (bool)0;
unsigned char var_12 = (unsigned char)247;
signed char var_16 = (signed char)-79;
int zero = 0;
long long int var_18 = -4868571927231962024LL;
int var_19 = -58747620;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_10, var_12, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
