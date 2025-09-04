/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2681
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2681
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
void test(val<int> var_0, val<unsigned char> var_2, val<unsigned char> var_4, val<unsigned char> var_5, val<bool> var_10, val<int> var_12, val<int> zero, val<short*> var_15, val<int*> var_16, val<bool*> var_17, val<unsigned char*> var_18) {
    *var_15 = ((/* implicit */val<short>) var_12);
    *var_16 = ((/* implicit */val<int>) 3420239427U);
    *var_17 = ((/* implicit */val<bool>) (val<signed char>)-84);
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 8666792625663373350ULL)) ? (((/* implicit */val<int>) min(((val<unsigned short>)18729), (((/* implicit */val<unsigned short>) var_2))))) : (((/* implicit */val<int>) var_10))))) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) var_0)) : (max((9779951448046178235ULL), (((/* implicit */val<unsigned long long int>) var_5)))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)-6)) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)51)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1864388072;
unsigned char var_2 = (unsigned char)216;
unsigned char var_4 = (unsigned char)141;
unsigned char var_5 = (unsigned char)245;
bool var_10 = (bool)1;
int var_12 = -675539739;
int zero = 0;
short var_15 = (short)30860;
int var_16 = 144430831;
bool var_17 = (bool)0;
unsigned char var_18 = (unsigned char)168;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)5349;
    value_mismatch |= var_16 != -874727869;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)168;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_10, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
