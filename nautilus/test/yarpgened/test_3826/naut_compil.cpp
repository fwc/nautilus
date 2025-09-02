/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3826
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3826
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
void test(val<short> var_1, val<int> var_6, val<signed char> var_10, val<bool> var_11, val<unsigned long long int> var_17, val<int> zero, val<unsigned long long int*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) ((min((var_6), (((/* implicit */val<int>) var_11)))) << (max((((/* implicit */val<unsigned int>) (val<unsigned short>)0)), (0U)))));
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_10)) ? (var_17) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6541;
int var_6 = 2064181645;
signed char var_10 = (signed char)-76;
bool var_11 = (bool)1;
unsigned long long int var_17 = 15542942008535831556ULL;
int zero = 0;
unsigned long long int var_19 = 12824252106384777943ULL;
int var_20 = -1471892347;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1ULL;
    value_mismatch |= var_20 != 524702724;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_10, var_11, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
