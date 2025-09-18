/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8158
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8158
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
void test(val<bool> var_1, val<unsigned int> var_4, val<int> var_6, val<unsigned long long int> var_8, val<int> zero, val<signed char*> var_19, val<signed char*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_8))));
    *var_20 = ((/* implicit */val<signed char>) ((min((((/* implicit */val<unsigned long long int>) (~(var_6)))), (max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (13020674930582108787ULL))))) | (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((926342199920236194ULL) <= (((/* implicit */val<unsigned long long int>) var_4))))))));
    *var_21 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_4 = 1434985788U;
int var_6 = 690904620;
unsigned long long int var_8 = 7493719962559756288ULL;
int zero = 0;
signed char var_19 = (signed char)-88;
signed char var_20 = (signed char)-59;
signed char var_21 = (signed char)-19;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (signed char)115;
    value_mismatch |= var_21 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_8, zero, &var_19, &var_20, &var_21);
  checksum();
}
