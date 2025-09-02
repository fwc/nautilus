/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2077
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2077
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
void test(val<unsigned long long int> var_0, val<short> var_2, val<unsigned int> var_3, val<bool> var_4, val<int> var_7, val<int> var_9, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12) {
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (min((((/* implicit */val<unsigned long long int>) ((val<long long int>) var_9))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) + (var_0))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))));
    *var_12 &= ((/* implicit */val<unsigned short>) (+((+(var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1350497709315308417ULL;
short var_2 = (short)-6279;
unsigned int var_3 = 3528339966U;
bool var_4 = (bool)0;
int var_7 = 1302164908;
int var_9 = -1831736796;
int zero = 0;
long long int var_11 = -5345145340666111531LL;
unsigned short var_12 = (unsigned short)46490;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1350497709315302138LL;
    value_mismatch |= var_12 != (unsigned short)13704;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_7, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
