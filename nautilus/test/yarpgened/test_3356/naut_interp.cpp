/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3356
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3356
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
void test(val<signed char> var_1, val<long long int> var_5, val<long long int> var_6, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<signed char*> var_15) {
    *var_12 = ((/* implicit */val<unsigned long long int>) ((max((var_5), (((var_9) + (var_10))))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1)))));
    *var_13 = ((/* implicit */val<unsigned long long int>) (~(var_10)));
    *var_14 = ((/* implicit */val<unsigned long long int>) var_6);
    *var_15 = ((val<signed char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
long long int var_5 = -4098023818978943094LL;
long long int var_6 = 9206548530755696862LL;
long long int var_9 = -7470980113095985757LL;
long long int var_10 = 2382438386751506494LL;
int zero = 0;
unsigned long long int var_12 = 10451745500634046424ULL;
unsigned long long int var_13 = 13851920394941005424ULL;
unsigned long long int var_14 = 766830660018699942ULL;
signed char var_15 = (signed char)-75;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != 16064305686958045121ULL;
    value_mismatch |= var_14 != 9206548530755696862ULL;
    value_mismatch |= var_15 != (signed char)-93;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
