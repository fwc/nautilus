/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 769
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=769
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
void test(val<signed char> var_1, val<unsigned long long int> var_5, val<int> zero, val<unsigned long long int*> var_10, val<signed char*> var_11, val<int*> var_12, val<int*> var_13) {
    *var_10 = (+(2ULL));
    *var_11 = ((/* implicit */val<signed char>) (+((+(-1497991538)))));
    *var_12 = ((val<int>) (+(((/* implicit */val<int>) var_1))));
    *var_13 = ((/* implicit */val<int>) ((val<unsigned long long int>) (((!(((/* implicit */val<bool>) 2147483647)))) || (((/* implicit */val<bool>) ((val<int>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
unsigned long long int var_5 = 10614432419460141681ULL;
int zero = 0;
unsigned long long int var_10 = 4955637246036509440ULL;
signed char var_11 = (signed char)-72;
int var_12 = 683558183;
int var_13 = 389139322;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2ULL;
    value_mismatch |= var_11 != (signed char)-114;
    value_mismatch |= var_12 != -126;
    value_mismatch |= var_13 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
