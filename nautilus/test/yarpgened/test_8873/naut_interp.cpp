/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8873
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8873
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
void test(val<long long int> var_0, val<unsigned long long int> var_1, val<unsigned short> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<long long int> var_6, val<signed char> var_7, val<short> var_8, val<unsigned long long int> var_9, val<bool> var_10, val<int> var_11, val<int> zero, val<unsigned int*> var_14, val<unsigned long long int*> var_15, val<int*> var_16, val<unsigned long long int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_4))));
    *var_15 = min((min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<short>) var_10)), (var_8)))), (((val<unsigned long long int>) var_0)))), (((/* implicit */val<unsigned long long int>) max((var_8), (((/* implicit */val<short>) var_7))))));
    *var_16 = ((/* implicit */val<int>) min((((/* implicit */val<long long int>) var_5)), (max((((((/* implicit */val<bool>) var_1)) ? (var_6) : (((/* implicit */val<long long int>) var_11)))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_4)))))))));
    *var_17 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3288097278765942179LL;
unsigned long long int var_1 = 17578189948754950750ULL;
unsigned short var_3 = (unsigned short)31161;
unsigned short var_4 = (unsigned short)7258;
unsigned int var_5 = 2730723216U;
long long int var_6 = 1446700424652193753LL;
signed char var_7 = (signed char)75;
short var_8 = (short)1288;
unsigned long long int var_9 = 418888220374713092ULL;
bool var_10 = (bool)1;
int var_11 = -384118162;
int zero = 0;
unsigned int var_14 = 1307703847U;
unsigned long long int var_15 = 12143319305753543812ULL;
int var_16 = 320456292;
unsigned long long int var_17 = 13128348452330798083ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4294960037U;
    value_mismatch |= var_15 != 1288ULL;
    value_mismatch |= var_16 != -1564244080;
    value_mismatch |= var_17 != 418888220374713092ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
