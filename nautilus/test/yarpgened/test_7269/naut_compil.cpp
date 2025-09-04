/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7269
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7269
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
void test(val<short> var_8, val<bool> var_9, val<int> var_14, val<bool> var_17, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20, val<int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) var_8);
    *var_20 *= ((/* implicit */val<unsigned short>) max((max((34359738367ULL), (((/* implicit */val<unsigned long long int>) var_9)))), (((((val<unsigned long long int>) 34359738367ULL)) + (min((34359738385ULL), (18446744039349813235ULL)))))));
    *var_21 = ((/* implicit */val<int>) min((*var_21), (max((((((/* implicit */val<bool>) max((var_14), (((/* implicit */val<int>) (val<short>)24890))))) ? (((/* implicit */val<int>) (val<unsigned char>)202)) : (((/* implicit */val<int>) (val<unsigned short>)46120)))), (((/* implicit */val<int>) var_17))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-1049;
bool var_9 = (bool)1;
int var_14 = 1024366123;
bool var_17 = (bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)13368;
unsigned short var_20 = (unsigned short)14089;
int var_21 = -653498753;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)64487;
    value_mismatch |= var_20 != (unsigned short)28816;
    value_mismatch |= var_21 != -653498753;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_14, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
