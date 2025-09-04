/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9073
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9073
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
void test(val<signed char> var_0, val<short> var_1, val<unsigned int> var_2, val<unsigned char> var_3, val<bool> var_4, val<signed char> var_6, val<unsigned int> var_15, val<unsigned long long int> var_18, val<int> zero, val<unsigned char*> var_19, val<short*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((((/* implicit */val<bool>) (val<unsigned char>)249)) ? ((-(((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) (val<short>)24697)))) : (((/* implicit */val<int>) (val<signed char>)46))));
    *var_20 = ((/* implicit */val<short>) max((*var_20), (((/* implicit */val<short>) ((((/* implicit */val<bool>) (((~(var_18))) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) (val<unsigned char>)255))))))))) ? (((/* implicit */val<int>) min((var_1), (((/* implicit */val<short>) ((val<signed char>) var_0)))))) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((var_4) ? (var_2) : (var_15)))) != (((((/* implicit */val<bool>) -1)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (-5739448973565599704LL)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
short var_1 = (short)-6047;
unsigned int var_2 = 3670852875U;
unsigned char var_3 = (unsigned char)110;
bool var_4 = (bool)1;
signed char var_6 = (signed char)-39;
unsigned int var_15 = 2148679343U;
unsigned long long int var_18 = 10807025689307733781ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)245;
short var_20 = (short)17029;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)39;
    value_mismatch |= var_20 != (short)17029;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_15, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
