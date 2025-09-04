/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5942
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5942
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
void test(val<int> var_4, val<unsigned long long int> var_11, val<signed char> var_18, val<int> zero, val<int*> var_20, val<long long int*> var_21) {
    *var_20 = var_4;
    *var_21 = ((/* implicit */val<long long int>) max((max((var_11), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) (val<signed char>)-88)) + (2147483647))) << (((((/* implicit */val<int>) (val<signed char>)85)) - (85)))))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_18))))) ? (((/* implicit */val<int>) (val<signed char>)73)) : (((/* implicit */val<int>) var_18)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2080358254;
unsigned long long int var_11 = 16213966010033747848ULL;
signed char var_18 = (signed char)47;
int zero = 0;
int var_20 = -1415494842;
long long int var_21 = -5702704032584572053LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -2080358254;
    value_mismatch |= var_21 != -2232778063675803768LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_11, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
