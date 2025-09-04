/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8976
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8976
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
void test(val<unsigned short> var_0, val<long long int> var_2, val<int> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<int> var_9, val<short> var_11, val<unsigned short> var_12, val<short> var_17, val<int> var_18, val<int> zero, val<short*> var_19, val<short*> var_20, val<int*> var_21, val<unsigned char*> var_22) {
    *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) (-(((/* implicit */val<int>) var_11)))))));
    *var_20 = ((/* implicit */val<short>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_17)) : (var_9)))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_0)))), (var_3)));
    *var_21 = var_18;
    *var_22 ^= ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)15))) < (3973833395U))))) < (((var_5) % (var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11004;
long long int var_2 = 8622087204665266675LL;
int var_3 = 486087261;
unsigned long long int var_5 = 1372769221255930176ULL;
unsigned long long int var_6 = 12344064999670608560ULL;
int var_9 = 1602530860;
short var_11 = (short)21129;
unsigned short var_12 = (unsigned short)46816;
short var_17 = (short)23705;
int var_18 = 1382226447;
int zero = 0;
short var_19 = (short)26349;
short var_20 = (short)8718;
int var_21 = 19956012;
unsigned char var_22 = (unsigned char)214;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)26349;
    value_mismatch |= var_20 != (short)-18720;
    value_mismatch |= var_21 != 1382226447;
    value_mismatch |= var_22 != (unsigned char)215;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_9, var_11, var_12, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
