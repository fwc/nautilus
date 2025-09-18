/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6122
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6122
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
void test(val<long long int> var_2, val<short> var_7, val<signed char> var_9, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max(((-(((/* implicit */val<int>) (val<short>)255)))), (((((/* implicit */val<int>) (val<unsigned char>)1)) << (((((/* implicit */val<int>) var_7)) + (11591)))))))) ? (((/* implicit */val<int>) ((min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (var_10))) != (((/* implicit */val<unsigned long long int>) var_2))))) : ((~(((/* implicit */val<int>) min(((val<unsigned char>)7), ((val<unsigned char>)12))))))));
    *var_13 -= ((/* implicit */val<short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2370249711971491874LL;
short var_7 = (short)-11582;
signed char var_9 = (signed char)-76;
unsigned long long int var_10 = 17644846105581326721ULL;
int zero = 0;
unsigned long long int var_12 = 7841387071576023696ULL;
short var_13 = (short)25795;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1ULL;
    value_mismatch |= var_13 != (short)25871;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_9, var_10, zero, &var_12, &var_13);
  checksum();
}
