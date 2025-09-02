/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9222
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9222
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
void test(val<long long int> var_1, val<bool> var_2, val<unsigned long long int> var_3, val<bool> var_5, val<bool> var_9, val<short> var_10, val<int> zero, val<short*> var_13, val<short*> var_14, val<signed char*> var_15) {
    *var_13 = ((/* implicit */val<short>) var_5);
    *var_14 = ((/* implicit */val<short>) var_3);
    *var_15 = ((/* implicit */val<signed char>) max((var_1), (((/* implicit */val<long long int>) ((((var_9) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_10)))) | (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4413916373261586359LL;
bool var_2 = (bool)0;
unsigned long long int var_3 = 12379100153633248252ULL;
bool var_5 = (bool)1;
bool var_9 = (bool)1;
short var_10 = (short)6395;
int zero = 0;
short var_13 = (short)-19374;
short var_14 = (short)10590;
signed char var_15 = (signed char)82;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != (short)5116;
    value_mismatch |= var_15 != (signed char)-73;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_9, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
