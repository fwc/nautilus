/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2631
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2631
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
void test(val<bool> var_2, val<signed char> var_3, val<unsigned char> var_4, val<unsigned char> var_5, val<short> var_9, val<unsigned char> var_10, val<bool> var_12, val<unsigned char> var_13, val<signed char> var_14, val<unsigned long long int> var_15, val<signed char> var_17, val<int> zero, val<short*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_19 += ((/* implicit */val<short>) var_13);
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_5)) < (((/* implicit */val<int>) var_2))))), (var_15)))) ? (((/* implicit */val<int>) ((val<unsigned short>) min((99027106796069386ULL), (((/* implicit */val<unsigned long long int>) var_10)))))) : (((/* implicit */val<int>) min((((/* implicit */val<short>) ((((/* implicit */val<bool>) var_3)) && (((/* implicit */val<bool>) (val<unsigned char>)1))))), (((val<short>) var_3)))))));
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<signed char>)-71)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_14)))), (((((/* implicit */val<int>) var_9)) | (((/* implicit */val<int>) var_4))))))) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) max((var_5), (((/* implicit */val<unsigned char>) var_12))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)127)) && (((/* implicit */val<bool>) var_17))))))) : (((/* implicit */val<int>) (val<signed char>)125))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
signed char var_3 = (signed char)29;
unsigned char var_4 = (unsigned char)254;
unsigned char var_5 = (unsigned char)31;
short var_9 = (short)3178;
unsigned char var_10 = (unsigned char)225;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)23;
signed char var_14 = (signed char)-102;
unsigned long long int var_15 = 1981235586603209006ULL;
signed char var_17 = (signed char)15;
int zero = 0;
short var_19 = (short)1594;
unsigned char var_20 = (unsigned char)229;
unsigned char var_21 = (unsigned char)65;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)1617;
    value_mismatch |= var_20 != (unsigned char)225;
    value_mismatch |= var_21 != (unsigned char)31;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_9, var_10, var_12, var_13, var_14, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
