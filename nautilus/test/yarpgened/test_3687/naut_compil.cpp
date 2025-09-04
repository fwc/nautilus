/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3687
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3687
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
void test(val<long long int> var_1, val<long long int> var_2, val<short> var_3, val<unsigned short> var_4, val<unsigned short> var_6, val<long long int> var_8, val<int> zero, val<unsigned short*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (var_1) : (var_2)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (var_1))), (((((/* implicit */val<bool>) var_6)) ? (max((var_8), (((/* implicit */val<long long int>) var_4)))) : (var_2)))));
    *var_12 = ((/* implicit */val<long long int>) ((val<unsigned short>) 2370876892U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4655517405306783929LL;
long long int var_2 = 4551528385924343903LL;
short var_3 = (short)1846;
unsigned short var_4 = (unsigned short)5974;
unsigned short var_6 = (unsigned short)55603;
long long int var_8 = -8289720631957704350LL;
int zero = 0;
unsigned short var_11 = (unsigned short)32433;
long long int var_12 = -5081550138980513231LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)1846;
    value_mismatch |= var_12 != 46556LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
