/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9732
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9732
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
void test(val<int> var_1, val<unsigned short> var_3, val<unsigned short> var_9, val<int> var_12, val<int> zero, val<unsigned short*> var_15, val<unsigned long long int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) var_9))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_17 = ((/* implicit */val<int>) max((((((/* implicit */val<int>) min((var_9), ((val<unsigned short>)64831)))) == (((/* implicit */val<int>) min(((val<unsigned short>)705), (var_3)))))), (((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)63))))) > ((~(var_12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1961870185;
unsigned short var_3 = (unsigned short)29246;
unsigned short var_9 = (unsigned short)19323;
int var_12 = -585992627;
int zero = 0;
unsigned short var_15 = (unsigned short)23179;
unsigned long long int var_16 = 767332229469515302ULL;
int var_17 = 429532881;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)46213;
    value_mismatch |= var_16 != 18446744071747681431ULL;
    value_mismatch |= var_17 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_9, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
}
