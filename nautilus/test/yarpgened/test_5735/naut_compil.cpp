/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5735
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5735
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
void test(val<short> var_1, val<signed char> var_2, val<int> var_3, val<int> var_4, val<short> var_5, val<unsigned char> var_7, val<signed char> var_8, val<int> zero, val<short*> var_10, val<unsigned short*> var_11) {
    *var_10 -= ((/* implicit */val<short>) min((((((val<int>) var_4)) % (((/* implicit */val<int>) ((val<short>) var_1))))), ((-(((/* implicit */val<int>) min((var_5), (((/* implicit */val<short>) var_2)))))))));
    *var_11 |= ((/* implicit */val<unsigned short>) (-(min((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_7)))), (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3563;
signed char var_2 = (signed char)-85;
int var_3 = -1050805426;
int var_4 = -1816758530;
short var_5 = (short)22045;
unsigned char var_7 = (unsigned char)233;
signed char var_8 = (signed char)-91;
int zero = 0;
short var_10 = (short)11422;
unsigned short var_11 = (unsigned short)8430;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)14067;
    value_mismatch |= var_11 != (unsigned short)9470;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
