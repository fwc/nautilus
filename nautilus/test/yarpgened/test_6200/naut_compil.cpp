/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6200
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6200
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
void test(val<signed char> var_2, val<unsigned short> var_3, val<unsigned char> var_4, val<int> var_5, val<long long int> var_10, val<int> zero, val<signed char*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned char>) var_2)), (var_4)));
    *var_13 = ((/* implicit */val<int>) ((val<short>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) + (var_10))) - (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_2)), (var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-94;
unsigned short var_3 = (unsigned short)48584;
unsigned char var_4 = (unsigned char)179;
int var_5 = -1438773870;
long long int var_10 = 5091110304735726418LL;
int zero = 0;
signed char var_12 = (signed char)125;
int var_13 = -1769455033;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-77;
    value_mismatch |= var_13 != 15240;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
