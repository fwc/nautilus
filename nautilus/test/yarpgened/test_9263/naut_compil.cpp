/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9263
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9263
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
void test(val<long long int> var_1, val<signed char> var_4, val<int> var_5, val<signed char> var_8, val<short> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned long long int*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned long long int>) var_4)), ((-(13294318359712495430ULL)))));
    *var_15 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+((-(((/* implicit */val<int>) var_8))))))) ? (((val<unsigned int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_1))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) (val<short>)20600)), ((val<unsigned short>)20106)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13))))) : (((/* implicit */val<int>) ((val<unsigned short>) var_1))))))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)85)) ? (((/* implicit */val<int>) (val<short>)-20601)) : (((/* implicit */val<int>) (val<short>)20601))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 204860035113475385LL;
signed char var_4 = (signed char)19;
int var_5 = 465430298;
signed char var_8 = (signed char)57;
short var_13 = (short)11465;
int zero = 0;
unsigned char var_14 = (unsigned char)185;
unsigned long long int var_15 = 1579080363639288662ULL;
unsigned char var_16 = (unsigned char)61;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)19;
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != (unsigned char)135;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_8, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
