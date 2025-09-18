/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5097
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5097
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
void test(val<long long int> var_0, val<short> var_2, val<signed char> var_9, val<bool> var_11, val<unsigned short> var_12, val<unsigned long long int> var_13, val<unsigned int> var_17, val<int> zero, val<unsigned char*> var_19, val<unsigned long long int*> var_20) {
    *var_19 |= ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) min((var_17), (((/* implicit */val<unsigned int>) var_2))))))) | (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_9)), (var_13)))) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_12), (((/* implicit */val<unsigned short>) var_11))))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<int>) (val<unsigned short>)47365)) >> (((((/* implicit */val<int>) (val<unsigned char>)200)) - (200))))), (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4465522506778613089LL;
short var_2 = (short)-17451;
signed char var_9 = (signed char)-107;
bool var_11 = (bool)1;
unsigned short var_12 = (unsigned short)44585;
unsigned long long int var_13 = 17479162902629039888ULL;
unsigned int var_17 = 3010874827U;
int zero = 0;
unsigned char var_19 = (unsigned char)188;
unsigned long long int var_20 = 9133210793817391369ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)255;
    value_mismatch |= var_20 != 47365ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_9, var_11, var_12, var_13, var_17, zero, &var_19, &var_20);
  checksum();
}
