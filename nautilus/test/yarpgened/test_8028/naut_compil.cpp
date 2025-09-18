/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8028
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8028
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
void test(val<int> var_1, val<unsigned long long int> var_6, val<bool> var_7, val<int> var_8, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<signed char*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((val<bool>) ((var_10) / (((/* implicit */val<long long int>) var_8))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (max((((((/* implicit */val<long long int>) 2023211280U)) / (var_9))), (((/* implicit */val<long long int>) var_1))))));
    *var_12 = ((/* implicit */val<signed char>) var_1);
    *var_13 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 568618373;
unsigned long long int var_6 = 1680352735632420268ULL;
bool var_7 = (bool)1;
int var_8 = 1570323748;
long long int var_9 = 7758002335731406324LL;
long long int var_10 = -2373324735260446849LL;
int zero = 0;
unsigned long long int var_11 = 9593151740770090935ULL;
signed char var_12 = (signed char)37;
int var_13 = -940960644;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1ULL;
    value_mismatch |= var_12 != (signed char)-123;
    value_mismatch |= var_13 != 12185004;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
