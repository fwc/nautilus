/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8824
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8824
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
void test(val<short> var_0, val<unsigned int> var_2, val<bool> var_8, val<unsigned long long int> var_9, val<unsigned char> var_11, val<int> zero, val<short*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<short>) var_2);
    *var_13 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned long long int>) var_0)), (min((((/* implicit */val<unsigned long long int>) var_11)), (min((((/* implicit */val<unsigned long long int>) var_8)), (var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21522;
unsigned int var_2 = 2998855858U;
bool var_8 = (bool)0;
unsigned long long int var_9 = 1793461886483217582ULL;
unsigned char var_11 = (unsigned char)121;
int zero = 0;
short var_12 = (short)31483;
unsigned char var_13 = (unsigned char)213;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-5966;
    value_mismatch |= var_13 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, var_9, var_11, zero, &var_12, &var_13);
  checksum();
}
