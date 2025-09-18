/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7339
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7339
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
void test(val<unsigned long long int> var_3, val<short> var_4, val<unsigned int> var_8, val<int> zero, val<bool*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<bool>) max((*var_10), (((/* implicit */val<bool>) min((var_3), (((/* implicit */val<unsigned long long int>) ((((1048575U) + (var_8))) + ((-(1048575U)))))))))));
    *var_11 = ((/* implicit */val<unsigned char>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12581270626157012480ULL;
short var_4 = (short)3051;
unsigned int var_8 = 3432936573U;
int zero = 0;
bool var_10 = (bool)1;
unsigned char var_11 = (unsigned char)117;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (unsigned char)235;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, zero, &var_10, &var_11);
  checksum();
}
