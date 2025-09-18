/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3066
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3066
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
void test(val<signed char> var_14, val<unsigned int> var_17, val<int> zero, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) var_14);
    *var_20 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) (!((!(((/* implicit */val<bool>) (val<signed char>)10))))))), ((-(var_17)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)110;
unsigned int var_17 = 3766069195U;
int zero = 0;
unsigned long long int var_19 = 12127999230622437721ULL;
signed char var_20 = (signed char)-97;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 110ULL;
    value_mismatch |= var_20 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_17, zero, &var_19, &var_20);
  checksum();
}
