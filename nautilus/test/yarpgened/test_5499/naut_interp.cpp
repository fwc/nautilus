/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5499
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5499
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
void test(val<unsigned char> var_0, val<short> var_2, val<unsigned int> var_3, val<unsigned long long int> var_4, val<unsigned short> var_6, val<unsigned char> var_7, val<signed char> var_9, val<int> zero, val<long long int*> var_10, val<bool*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) var_2);
    *var_11 = (!(((/* implicit */val<bool>) ((((var_3) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)92))))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))))))));
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : ((-(((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
short var_2 = (short)-27723;
unsigned int var_3 = 4055297791U;
unsigned long long int var_4 = 9748800800507019260ULL;
unsigned short var_6 = (unsigned short)14793;
unsigned char var_7 = (unsigned char)53;
signed char var_9 = (signed char)15;
int zero = 0;
long long int var_10 = -2619827607342878590LL;
bool var_11 = (bool)0;
unsigned int var_12 = 1509019523U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -27723LL;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 14793U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
}
