/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4644
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4644
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
void test(val<bool> var_3, val<long long int> var_4, val<unsigned char> var_5, val<unsigned long long int> var_7, val<signed char> var_12, val<short> var_13, val<int> zero, val<int*> var_16, val<int*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_12))))) >= (var_4)))), (var_5)));
    *var_17 = ((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<unsigned long long int>) (((val<bool>)1) ? (var_4) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))) & (((var_7) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_13)) && (var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
long long int var_4 = 7638054678507097963LL;
unsigned char var_5 = (unsigned char)37;
unsigned long long int var_7 = 7954158784130032547ULL;
signed char var_12 = (signed char)76;
short var_13 = (short)30820;
int zero = 0;
int var_16 = -1203765447;
int var_17 = -1414493904;
unsigned long long int var_18 = 1055784581940869552ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != 34;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, var_12, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
