/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4129
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4129
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
void test(val<signed char> var_2, val<unsigned short> var_3, val<unsigned short> var_6, val<unsigned short> var_13, val<int> var_17, val<unsigned char> var_18, val<int> zero, val<unsigned char*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<int*> var_22) {
    *var_19 = ((/* implicit */val<unsigned char>) min((max((((((/* implicit */val<int>) var_18)) << (((-548391350) + (548391371))))), (((/* implicit */val<int>) var_3)))), (var_17)));
    *var_20 = var_13;
    *var_21 = ((/* implicit */val<int>) var_6);
    *var_22 = ((/* implicit */val<int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-83;
unsigned short var_3 = (unsigned short)27448;
unsigned short var_6 = (unsigned short)53192;
unsigned short var_13 = (unsigned short)56205;
int var_17 = 1806397742;
unsigned char var_18 = (unsigned char)188;
int zero = 0;
unsigned char var_19 = (unsigned char)157;
unsigned short var_20 = (unsigned short)19383;
int var_21 = -559413029;
int var_22 = 1419772425;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (unsigned short)56205;
    value_mismatch |= var_21 != 53192;
    value_mismatch |= var_22 != -83;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_13, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
