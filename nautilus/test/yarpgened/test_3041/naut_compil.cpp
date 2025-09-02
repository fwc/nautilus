/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3041
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3041
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
void test(val<unsigned long long int> var_1, val<short> var_3, val<unsigned short> var_5, val<short> var_7, val<long long int> var_9, val<int> zero, val<bool*> var_12, val<int*> var_13, val<long long int*> var_14) {
    *var_12 = ((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_3)))) ? (((/* implicit */val<int>) (val<unsigned short>)62753)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<long long int>) 1185688440))))))));
    *var_13 = ((val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))) == (((/* implicit */val<int>) var_5))));
    *var_14 ^= max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 653024757U)) && ((!(((/* implicit */val<bool>) var_1))))))), (var_9));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15870722777143529971ULL;
short var_3 = (short)22621;
unsigned short var_5 = (unsigned short)19829;
short var_7 = (short)26577;
long long int var_9 = 649261883376011588LL;
int zero = 0;
bool var_12 = (bool)1;
int var_13 = 999531547;
long long int var_14 = 2252671808129389601LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 1603770944160193893LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
