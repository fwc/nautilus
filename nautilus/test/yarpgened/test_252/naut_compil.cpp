/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 252
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=252
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
void test(val<long long int> var_2, val<short> var_9, val<bool> var_11, val<bool> var_12, val<unsigned long long int> var_13, val<bool> var_15, val<int> zero, val<signed char*> var_18, val<unsigned short*> var_19, val<unsigned int*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) var_13))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<short>)-5129)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) : (((((var_15) ? (33423360U) : (4261543915U))) >> (((/* implicit */val<int>) var_15))))));
    *var_20 = ((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) var_9)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6414425432271658652LL;
short var_9 = (short)-5021;
bool var_11 = (bool)0;
bool var_12 = (bool)1;
unsigned long long int var_13 = 15120895457374765381ULL;
bool var_15 = (bool)0;
int zero = 0;
signed char var_18 = (signed char)-34;
unsigned short var_19 = (unsigned short)56933;
unsigned int var_20 = 670332107U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)69;
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != 281583260U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, var_11, var_12, var_13, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
