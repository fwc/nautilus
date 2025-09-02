/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5308
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5308
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
void test(val<unsigned int> var_0, val<unsigned int> var_3, val<unsigned char> var_7, val<unsigned short> var_12, val<unsigned int> var_13, val<int> zero, val<unsigned short*> var_19, val<long long int*> var_20, val<bool*> var_21, val<unsigned char*> var_22) {
    *var_19 = ((/* implicit */val<unsigned short>) var_3);
    *var_20 = ((/* implicit */val<long long int>) min((*var_20), (((/* implicit */val<long long int>) max(((-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))))), (((/* implicit */val<int>) var_12)))))));
    *var_21 = ((/* implicit */val<bool>) var_0);
    *var_22 -= ((/* implicit */val<unsigned char>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 554476025U;
unsigned int var_3 = 1552932533U;
unsigned char var_7 = (unsigned char)15;
unsigned short var_12 = (unsigned short)60575;
unsigned int var_13 = 3026481151U;
int zero = 0;
unsigned short var_19 = (unsigned short)8250;
long long int var_20 = 3194224503965635087LL;
bool var_21 = (bool)0;
unsigned char var_22 = (unsigned char)90;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)57013;
    value_mismatch |= var_20 != 60575LL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned char)91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_12, var_13, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
