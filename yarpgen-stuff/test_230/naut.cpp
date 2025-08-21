/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 230
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=230
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
void test(val<long long int> var_0, val<bool> var_3, val<unsigned int> var_5, val<signed char> var_7, val<unsigned int> var_10, val<long long int> var_13, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_7))));
    *var_16 = var_7;
    *var_17 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) max((var_13), (((/* implicit */val<long long int>) var_5))))) ? (min((((/* implicit */val<long long int>) var_10)), (var_0))) : (max((((/* implicit */val<long long int>) var_3)), (var_0))))) != (((/* implicit */val<long long int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5315446109228494186LL;
bool var_3 = (bool)0;
unsigned int var_5 = 718739773U;
signed char var_7 = (signed char)77;
unsigned int var_10 = 4156337251U;
long long int var_13 = 2612405916267343467LL;
int zero = 0;
signed char var_15 = (signed char)61;
signed char var_16 = (signed char)85;
unsigned short var_17 = (unsigned short)39743;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-78;
    value_mismatch |= var_16 != (signed char)77;
    value_mismatch |= var_17 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_10, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
