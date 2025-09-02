/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1118
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1118
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
void test(val<unsigned int> var_3, val<unsigned long long int> var_4, val<signed char> var_5, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned long long int*> var_10, val<int*> var_11) {
    *var_10 = ((min((((/* implicit */val<unsigned long long int>) var_5)), (var_4))) + (((/* implicit */val<unsigned long long int>) var_3)));
    *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2914157289U;
unsigned long long int var_4 = 12622019289712288871ULL;
signed char var_5 = (signed char)47;
unsigned long long int var_8 = 6840670906272133285ULL;
unsigned long long int var_9 = 14459899068345939210ULL;
int zero = 0;
unsigned long long int var_10 = 12040886916326561243ULL;
int var_11 = -1364852642;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2914157336ULL;
    value_mismatch |= var_11 != -1380810007;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
