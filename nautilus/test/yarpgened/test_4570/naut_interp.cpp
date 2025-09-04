/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4570
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4570
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
void test(val<short> var_1, val<unsigned char> var_2, val<int> var_7, val<short> var_12, val<unsigned short> var_13, val<unsigned short> var_15, val<unsigned long long int> var_16, val<unsigned long long int> var_17, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<short*> var_20, val<unsigned long long int*> var_21, val<unsigned short*> var_22) {
    *var_18 = ((/* implicit */val<short>) max((*var_18), (((/* implicit */val<short>) max(((-(((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (var_17))))), (((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_15)) && (((/* implicit */val<bool>) var_12)))))))))))));
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((val<unsigned char>) var_12))) & (((/* implicit */val<int>) (val<unsigned short>)65535))));
    *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) (+(15360))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (var_16) : (((/* implicit */val<unsigned long long int>) -225050982)))))))), (var_12)));
    *var_22 = ((/* implicit */val<unsigned short>) ((var_17) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5913;
unsigned char var_2 = (unsigned char)226;
int var_7 = -1828051828;
short var_12 = (short)2888;
unsigned short var_13 = (unsigned short)11942;
unsigned short var_15 = (unsigned short)33975;
unsigned long long int var_16 = 8855024378397280293ULL;
unsigned long long int var_17 = 15852644930630323632ULL;
int zero = 0;
short var_18 = (short)7606;
signed char var_19 = (signed char)69;
short var_20 = (short)-1215;
unsigned long long int var_21 = 4852052127038031344ULL;
unsigned short var_22 = (unsigned short)15411;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)7606;
    value_mismatch |= var_19 != (signed char)72;
    value_mismatch |= var_20 != (short)-1215;
    value_mismatch |= var_21 != 0ULL;
    value_mismatch |= var_22 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_12, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
