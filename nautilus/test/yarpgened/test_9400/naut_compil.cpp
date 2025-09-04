/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9400
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9400
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
void test(val<signed char> var_1, val<long long int> var_2, val<unsigned int> var_5, val<unsigned int> var_6, val<unsigned long long int> var_9, val<signed char> var_10, val<int> zero, val<signed char*> var_13, val<signed char*> var_14, val<long long int*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) (-((-(((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (var_6))))))))));
    *var_14 = ((/* implicit */val<signed char>) (!(((((/* implicit */val<unsigned long long int>) var_2)) <= (min((var_9), (((/* implicit */val<unsigned long long int>) var_10))))))));
    *var_15 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
long long int var_2 = 1868430132333932513LL;
unsigned int var_5 = 3023079868U;
unsigned int var_6 = 3983271195U;
unsigned long long int var_9 = 10957446257598372546ULL;
signed char var_10 = (signed char)-91;
int zero = 0;
signed char var_13 = (signed char)45;
signed char var_14 = (signed char)-49;
long long int var_15 = -4258531525367991604LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)45;
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != 3023079868LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_9, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
