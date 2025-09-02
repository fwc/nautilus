/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3272
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3272
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
void test(val<long long int> var_1, val<unsigned short> var_6, val<unsigned long long int> var_8, val<unsigned char> var_9, val<unsigned int> var_11, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13, val<int*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_8)) ? (var_11) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))) > (var_11)))))))));
    *var_13 -= ((/* implicit */val<bool>) var_11);
    *var_14 -= ((val<int>) var_9);
    *var_15 |= ((/* implicit */val<unsigned char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8758412452474866995LL;
unsigned short var_6 = (unsigned short)20400;
unsigned long long int var_8 = 10731283036899173034ULL;
unsigned char var_9 = (unsigned char)192;
unsigned int var_11 = 1270199939U;
int zero = 0;
unsigned short var_12 = (unsigned short)53421;
bool var_13 = (bool)0;
int var_14 = -1332707387;
unsigned char var_15 = (unsigned char)8;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != -1332707579;
    value_mismatch |= var_15 != (unsigned char)59;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
