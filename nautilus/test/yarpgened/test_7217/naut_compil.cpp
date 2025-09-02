/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7217
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7217
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
void test(val<unsigned short> var_0, val<short> var_1, val<unsigned short> var_2, val<int> var_5, val<signed char> var_7, val<unsigned short> var_8, val<int> zero, val<unsigned short*> var_10, val<unsigned short*> var_11, val<unsigned long long int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned short>) min((*var_10), (((/* implicit */val<unsigned short>) max((((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_0)))))))), (var_1))))));
    *var_11 ^= ((/* implicit */val<unsigned short>) var_7);
    *var_12 = ((/* implicit */val<unsigned long long int>) max((max((var_5), ((+(var_5))))), (min((((/* implicit */val<int>) ((val<short>) (val<bool>)1))), (((((/* implicit */val<int>) (val<unsigned short>)50035)) & (((/* implicit */val<int>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16105;
short var_1 = (short)23207;
unsigned short var_2 = (unsigned short)40851;
int var_5 = 50231437;
signed char var_7 = (signed char)125;
unsigned short var_8 = (unsigned short)60282;
int zero = 0;
unsigned short var_10 = (unsigned short)2732;
unsigned short var_11 = (unsigned short)52758;
unsigned long long int var_12 = 2304725120826117442ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)2732;
    value_mismatch |= var_11 != (unsigned short)52843;
    value_mismatch |= var_12 != 50231437ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
