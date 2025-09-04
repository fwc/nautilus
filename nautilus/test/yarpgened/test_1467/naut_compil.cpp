/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1467
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1467
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
void test(val<bool> var_1, val<unsigned long long int> var_9, val<int> zero, val<unsigned char*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) ((var_1) || ((!(((/* implicit */val<bool>) max((var_9), (((/* implicit */val<unsigned long long int>) (val<short>)-1)))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((val<bool>) (((((val<bool>)1) ? (4294967282U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)15))))) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((4294967282U) > (((/* implicit */val<unsigned int>) -2141240254)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned long long int var_9 = 17360525900149854006ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)67;
unsigned long long int var_18 = 13159100463192756566ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
