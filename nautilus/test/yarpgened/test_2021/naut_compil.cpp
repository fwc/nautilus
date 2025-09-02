/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2021
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2021
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
void test(val<bool> var_6, val<short> var_7, val<long long int> var_9, val<int> zero, val<long long int*> var_11, val<long long int*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) var_7);
    *var_12 = ((/* implicit */val<long long int>) max((((((/* implicit */val<int>) ((val<unsigned short>) (val<short>)17923))) | (((/* implicit */val<int>) (val<unsigned short>)5097)))), (((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)115)) <= (((/* implicit */val<int>) var_6))))) ^ (((/* implicit */val<int>) var_6))))));
    *var_13 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((val<unsigned int>) ((var_9) - (var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
short var_7 = (short)-13772;
long long int var_9 = 723507451800777621LL;
int zero = 0;
long long int var_11 = -8077686624984544510LL;
long long int var_12 = 5968712026486500942LL;
unsigned char var_13 = (unsigned char)215;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -13772LL;
    value_mismatch |= var_12 != 22507LL;
    value_mismatch |= var_13 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
