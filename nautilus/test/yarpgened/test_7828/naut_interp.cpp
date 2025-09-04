/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7828
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7828
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
void test(val<unsigned short> var_10, val<bool> var_11, val<int> var_12, val<unsigned int> var_14, val<int> zero, val<signed char*> var_19, val<long long int*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) max((((/* implicit */val<int>) var_10)), ((-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-78)))))))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4294967295LL)) ? (((/* implicit */val<int>) (val<signed char>)127)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 80070142U)) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)31337)))))) : (17157572760624305687ULL)));
    *var_21 = ((/* implicit */val<unsigned short>) ((var_11) ? (var_12) : (((/* implicit */val<int>) (val<signed char>)48))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)15221;
bool var_11 = (bool)0;
int var_12 = 982518295;
unsigned int var_14 = 2167816395U;
int zero = 0;
signed char var_19 = (signed char)122;
long long int var_20 = 6233109675442462732LL;
unsigned short var_21 = (unsigned short)806;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)117;
    value_mismatch |= var_20 != 2167816395LL;
    value_mismatch |= var_21 != (unsigned short)48;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, var_12, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
