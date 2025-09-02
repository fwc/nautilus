/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4230
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4230
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
void test(val<unsigned long long int> var_1, val<bool> var_5, val<bool> var_6, val<int> var_7, val<int> var_9, val<unsigned short> var_11, val<signed char> var_13, val<bool> var_16, val<long long int> var_17, val<int> zero, val<bool*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_5)), ((+(((var_16) ? (var_17) : (((/* implicit */val<long long int>) var_9))))))));
    *var_20 *= ((/* implicit */val<bool>) (-(max((((((/* implicit */val<bool>) var_1)) ? (var_7) : (((/* implicit */val<int>) var_13)))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11807846322787461344ULL;
bool var_5 = (bool)0;
bool var_6 = (bool)0;
int var_7 = 2113386332;
int var_9 = 711577037;
unsigned short var_11 = (unsigned short)17936;
signed char var_13 = (signed char)35;
bool var_16 = (bool)1;
long long int var_17 = -4877850069339209029LL;
int zero = 0;
bool var_19 = (bool)0;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_7, var_9, var_11, var_13, var_16, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
