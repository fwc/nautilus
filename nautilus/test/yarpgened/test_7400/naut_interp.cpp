/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7400
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7400
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
void test(val<unsigned char> var_1, val<unsigned int> var_3, val<signed char> var_6, val<long long int> var_7, val<unsigned short> var_8, val<bool> var_9, val<int> var_12, val<int> zero, val<unsigned char*> var_14, val<short*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_1))))) != (((/* implicit */val<int>) min((var_8), (((/* implicit */val<unsigned short>) var_9))))))))) + (var_3)));
    *var_15 = ((/* implicit */val<short>) var_7);
    *var_16 = ((/* implicit */val<bool>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
unsigned int var_3 = 91608708U;
signed char var_6 = (signed char)-118;
long long int var_7 = 534058787456663782LL;
unsigned short var_8 = (unsigned short)16908;
bool var_9 = (bool)0;
int var_12 = 132179243;
int zero = 0;
unsigned char var_14 = (unsigned char)235;
short var_15 = (short)5027;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)133;
    value_mismatch |= var_15 != (short)-16154;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_7, var_8, var_9, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
