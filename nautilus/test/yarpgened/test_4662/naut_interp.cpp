/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4662
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4662
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
void test(val<long long int> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_4, val<unsigned int> var_8, val<unsigned long long int> var_9, val<int> zero, val<long long int*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_2)), (var_9)))) ? (((/* implicit */val<unsigned int>) ((val<int>) var_3))) : (((var_8) >> (((var_2) + (1229738494006738677LL)))))))) < (var_4)));
    *var_11 = ((/* implicit */val<signed char>) ((val<long long int>) ((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (2199023255551LL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1229738494006738676LL;
unsigned long long int var_3 = 7581773177320305600ULL;
unsigned long long int var_4 = 2410411325802751346ULL;
unsigned int var_8 = 1941775366U;
unsigned long long int var_9 = 1519138874488578914ULL;
int zero = 0;
long long int var_10 = 3500949508551294744LL;
signed char var_11 = (signed char)91;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1LL;
    value_mismatch |= var_11 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
