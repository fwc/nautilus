/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9953
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9953
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
void test(val<unsigned int> var_2, val<unsigned int> var_4, val<int> var_6, val<short> var_8, val<bool> var_9, val<int> zero, val<int*> var_12, val<unsigned short*> var_13) {
    *var_12 = ((/* implicit */val<int>) (val<short>)12264);
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<int>) (val<short>)32762)) & (var_6))) : (((/* implicit */val<int>) (!(var_9))))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))) : (min((((((/* implicit */val<int>) var_8)) ^ (((/* implicit */val<int>) (val<unsigned char>)192)))), (((/* implicit */val<int>) var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 665795986U;
unsigned int var_4 = 3483783364U;
int var_6 = -1464763138;
short var_8 = (short)32001;
bool var_9 = (bool)0;
int zero = 0;
int var_12 = -1190008865;
unsigned short var_13 = (unsigned short)28888;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 12264;
    value_mismatch |= var_13 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_8, var_9, zero, &var_12, &var_13);
  checksum();
}
