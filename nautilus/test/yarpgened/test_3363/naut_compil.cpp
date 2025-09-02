/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3363
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3363
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
void test(val<bool> var_0, val<bool> var_1, val<bool> var_2, val<signed char> var_8, val<unsigned short> var_9, val<int> zero, val<int*> var_10, val<bool*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<int>) var_8);
    *var_11 &= ((/* implicit */val<bool>) min((((/* implicit */val<int>) min((max(((val<unsigned char>)203), (((/* implicit */val<unsigned char>) var_1)))), (((/* implicit */val<unsigned char>) var_0))))), ((-((~(((/* implicit */val<int>) var_9))))))));
    *var_12 = ((/* implicit */val<int>) min((*var_12), (((/* implicit */val<int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_1 = (bool)1;
bool var_2 = (bool)1;
signed char var_8 = (signed char)54;
unsigned short var_9 = (unsigned short)61538;
int zero = 0;
int var_10 = -1841383936;
bool var_11 = (bool)0;
int var_12 = 1218961946;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 54;
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
