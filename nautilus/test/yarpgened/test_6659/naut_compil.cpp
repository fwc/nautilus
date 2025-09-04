/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6659
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6659
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
void test(val<unsigned char> var_0, val<long long int> var_6, val<short> var_7, val<int> var_11, val<short> var_14, val<int> zero, val<int*> var_19, val<bool*> var_20, val<unsigned int*> var_21) {
    *var_19 = var_11;
    *var_20 = ((/* implicit */val<bool>) var_6);
    *var_21 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_0)), (-1)))) ? (((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_7)) ? (524287ULL) : (((/* implicit */val<unsigned long long int>) 4294967281U)))) < (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)-14998)))))))) : (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
long long int var_6 = -428978487079813646LL;
short var_7 = (short)7253;
int var_11 = -1822124001;
short var_14 = (short)-6895;
int zero = 0;
int var_19 = -366551870;
bool var_20 = (bool)1;
unsigned int var_21 = 241740976U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -1822124001;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_11, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
