/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5657
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5657
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
void test(val<unsigned short> var_0, val<unsigned char> var_3, val<signed char> var_6, val<unsigned long long int> var_7, val<unsigned short> var_10, val<signed char> var_11, val<unsigned short> var_13, val<unsigned short> var_15, val<unsigned short> var_16, val<int> zero, val<unsigned long long int*> var_17, val<signed char*> var_18) {
    *var_17 = max((((/* implicit */val<unsigned long long int>) min((var_13), (((/* implicit */val<unsigned short>) (val<short>)-30022))))), (((((/* implicit */val<bool>) var_0)) ? ((-(var_7))) : (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_0))))))));
    *var_18 &= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) 6559316070325479316ULL)) ? (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) var_13)))) : (((/* implicit */val<int>) var_15)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<short>)-25134)) : (((/* implicit */val<int>) (val<short>)14266))))) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_16)))) : (((/* implicit */val<int>) ((val<bool>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12374;
unsigned char var_3 = (unsigned char)213;
signed char var_6 = (signed char)18;
unsigned long long int var_7 = 11795313159911628592ULL;
unsigned short var_10 = (unsigned short)56432;
signed char var_11 = (signed char)115;
unsigned short var_13 = (unsigned short)20476;
unsigned short var_15 = (unsigned short)22592;
unsigned short var_16 = (unsigned short)24777;
int zero = 0;
unsigned long long int var_17 = 10943115804624300678ULL;
signed char var_18 = (signed char)104;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 6651430913797923024ULL;
    value_mismatch |= var_18 != (signed char)72;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_7, var_10, var_11, var_13, var_15, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
