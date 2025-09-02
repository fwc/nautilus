/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7584
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7584
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
void test(val<short> var_1, val<unsigned char> var_3, val<signed char> var_6, val<unsigned int> var_12, val<long long int> var_13, val<int> zero, val<short*> var_17, val<unsigned long long int*> var_18, val<signed char*> var_19, val<long long int*> var_20) {
    *var_17 = ((/* implicit */val<short>) ((((max((((/* implicit */val<unsigned int>) (val<unsigned char>)226)), (var_12))) * (var_12))) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) (val<unsigned char>)99)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<unsigned char>)99)))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) (+((~(min((((/* implicit */val<long long int>) (val<unsigned char>)99)), (var_13)))))));
    *var_19 *= var_6;
    *var_20 |= ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3889;
unsigned char var_3 = (unsigned char)227;
signed char var_6 = (signed char)-26;
unsigned int var_12 = 877357469U;
long long int var_13 = 5239319503990108561LL;
int zero = 0;
short var_17 = (short)-16800;
unsigned long long int var_18 = 8052136081655009099ULL;
signed char var_19 = (signed char)-58;
long long int var_20 = 1535335512062138891LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-21;
    value_mismatch |= var_18 != 18446744073709551516ULL;
    value_mismatch |= var_19 != (signed char)-28;
    value_mismatch |= var_20 != 1535335512062140219LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_12, var_13, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
