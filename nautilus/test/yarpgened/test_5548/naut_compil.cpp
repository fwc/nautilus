/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5548
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5548
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
void test(val<signed char> var_3, val<bool> var_4, val<unsigned long long int> var_9, val<bool> var_15, val<int> zero, val<unsigned short*> var_17, val<unsigned long long int*> var_18, val<unsigned char*> var_19) {
    *var_17 |= ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) max(((val<unsigned char>)152), ((val<unsigned char>)152)))) <= (((/* implicit */val<int>) ((var_15) || (((/* implicit */val<bool>) 2744157494U))))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((val<signed char>) var_9))) > (((/* implicit */val<int>) (!(((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) var_15)))))))));
    *var_19 = ((/* implicit */val<unsigned char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-73;
bool var_4 = (bool)1;
unsigned long long int var_9 = 9249431990798672540ULL;
bool var_15 = (bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)49688;
unsigned long long int var_18 = 4172730385075647261ULL;
unsigned char var_19 = (unsigned char)55;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)65535;
    value_mismatch |= var_18 != 0ULL;
    value_mismatch |= var_19 != (unsigned char)183;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_9, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
}
