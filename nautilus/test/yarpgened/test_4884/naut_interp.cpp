/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4884
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4884
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<unsigned long long int> var_4, val<int> zero, val<unsigned char*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) var_1);
    *var_11 = ((/* implicit */val<int>) ((((((/* implicit */val<bool>) 646755846)) ? (((/* implicit */val<unsigned long long int>) max((8188LL), (((/* implicit */val<long long int>) 4095))))) : (var_4))) ^ (((/* implicit */val<unsigned long long int>) (-(((var_0) & (((/* implicit */val<long long int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3200557204847942413LL;
unsigned int var_1 = 1315542599U;
unsigned long long int var_4 = 3079022076072174696ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)219;
int var_11 = -585815807;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)71;
    value_mismatch |= var_11 != -1076403135;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
