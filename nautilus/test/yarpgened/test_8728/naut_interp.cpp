/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8728
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8728
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
void test(val<short> var_0, val<unsigned short> var_1, val<bool> var_5, val<unsigned short> var_9, val<bool> var_10, val<int> var_11, val<short> var_12, val<unsigned int> var_13, val<int> zero, val<signed char*> var_16, val<int*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) min((((/* implicit */val<int>) min((((/* implicit */val<short>) (val<bool>)0)), (max((var_0), (var_12)))))), (min((((/* implicit */val<int>) var_5)), (((var_10) ? (((/* implicit */val<int>) (val<signed char>)-56)) : (-1761045734))))))))));
    *var_17 = ((/* implicit */val<int>) min(((((val<bool>)1) ? (((/* implicit */val<unsigned int>) min((-1761045734), (((/* implicit */val<int>) var_1))))) : (var_13))), (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) min((var_9), ((val<unsigned short>)2)))), (max((var_11), (var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)298;
unsigned short var_1 = (unsigned short)6102;
bool var_5 = (bool)0;
unsigned short var_9 = (unsigned short)56879;
bool var_10 = (bool)0;
int var_11 = 2112079481;
short var_12 = (short)30267;
unsigned int var_13 = 3382336713U;
int zero = 0;
signed char var_16 = (signed char)-105;
int var_17 = 928987009;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)26;
    value_mismatch |= var_17 != 2112079481;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_9, var_10, var_11, var_12, var_13, zero, &var_16, &var_17);
  checksum();
}
