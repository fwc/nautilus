/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5885
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5885
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_3, val<unsigned char> var_4, val<int> zero, val<bool*> var_10, val<long long int*> var_11, val<unsigned long long int*> var_12) {
    *var_10 = ((/* implicit */val<bool>) var_3);
    *var_11 = ((/* implicit */val<long long int>) min((*var_11), (((/* implicit */val<long long int>) var_4))));
    *var_12 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15497285015331932869ULL;
unsigned int var_3 = 4092564754U;
unsigned char var_4 = (unsigned char)243;
int zero = 0;
bool var_10 = (bool)1;
long long int var_11 = -6258974882874920178LL;
unsigned long long int var_12 = 9910430904025734264ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != -6258974882874920178LL;
    value_mismatch |= var_12 != 15497285015331932869ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
