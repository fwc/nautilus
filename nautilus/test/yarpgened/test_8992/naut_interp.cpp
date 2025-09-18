/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8992
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8992
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
void test(val<short> var_0, val<long long int> var_4, val<long long int> var_10, val<bool> var_11, val<int> zero, val<int*> var_16, val<unsigned short*> var_17) {
    *var_16 = ((/* implicit */val<int>) min((1893297521U), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<short>)20002)) / (((((/* implicit */val<int>) var_0)) / (((/* implicit */val<int>) (val<signed char>)-127)))))))));
    *var_17 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_4)), (5677976690755218080ULL)))) ? (var_10) : (((var_11) ? (var_10) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)19986)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11512;
long long int var_4 = -8627428585957071712LL;
long long int var_10 = -1798098514357881389LL;
bool var_11 = (bool)1;
int zero = 0;
int var_16 = 1616741108;
unsigned short var_17 = (unsigned short)7497;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 222;
    value_mismatch |= var_17 != (unsigned short)30163;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_10, var_11, zero, &var_16, &var_17);
  checksum();
}
