/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7316
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7316
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
void test(val<long long int> var_0, val<short> var_6, val<unsigned char> var_7, val<long long int> var_13, val<unsigned char> var_14, val<short> var_15, val<short> var_17, val<int> zero, val<bool*> var_18, val<bool*> var_19) {
    *var_18 = ((/* implicit */val<bool>) var_14);
    *var_19 = ((/* implicit */val<bool>) min((((/* implicit */val<int>) var_15)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -5661982236279611671LL)) ? (var_0) : (var_13)))) ? (((((/* implicit */val<int>) var_7)) - (((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_17))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1690742787275319447LL;
short var_6 = (short)3008;
unsigned char var_7 = (unsigned char)54;
long long int var_13 = -6523889901024622092LL;
unsigned char var_14 = (unsigned char)14;
short var_15 = (short)-7766;
short var_17 = (short)29648;
int zero = 0;
bool var_18 = (bool)0;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_13, var_14, var_15, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
