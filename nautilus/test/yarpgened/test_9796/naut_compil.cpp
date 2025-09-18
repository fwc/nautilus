/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9796
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9796
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
void test(val<long long int> var_3, val<signed char> var_4, val<long long int> var_5, val<int> var_6, val<unsigned long long int> var_7, val<bool> var_8, val<short> var_9, val<signed char> var_11, val<int> zero, val<long long int*> var_13, val<unsigned char*> var_14, val<int*> var_15, val<long long int*> var_16) {
    *var_13 -= ((/* implicit */val<long long int>) var_11);
    *var_14 = ((/* implicit */val<unsigned char>) var_3);
    *var_15 = ((/* implicit */val<int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_8)) - (var_6)))) ? (((var_7) * (((/* implicit */val<unsigned long long int>) var_6)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min(((val<short>)-14222), (((/* implicit */val<short>) var_4)))))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_5) ^ (var_3)))) ? ((~(3950245503U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))))))));
    *var_16 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9069196767774450403LL;
signed char var_4 = (signed char)111;
long long int var_5 = -4861238738857039734LL;
int var_6 = -568706841;
unsigned long long int var_7 = 6260550176708684082ULL;
bool var_8 = (bool)1;
short var_9 = (short)26372;
signed char var_11 = (signed char)70;
int zero = 0;
long long int var_13 = -6565666541746409405LL;
unsigned char var_14 = (unsigned char)253;
int var_15 = -809818378;
long long int var_16 = -9157510348257986869LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -6565666541746409475LL;
    value_mismatch |= var_14 != (unsigned char)29;
    value_mismatch |= var_15 != 344721792;
    value_mismatch |= var_16 != -568706841LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
