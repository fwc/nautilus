/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2897
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2897
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
void test(val<short> var_14, val<int> var_16, val<int> zero, val<unsigned short*> var_20, val<unsigned char*> var_21, val<unsigned char*> var_22, val<unsigned char*> var_23) {
    *var_20 &= ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) var_14)), ((-(min((11312290305305471731ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)1404))))))));
    *var_21 ^= ((/* implicit */val<unsigned char>) var_16);
    *var_22 = ((/* implicit */val<unsigned char>) ((val<int>) 562949684985856ULL));
    *var_23 = ((/* implicit */val<unsigned char>) min((3552422115U), (((/* implicit */val<unsigned int>) (val<unsigned char>)64))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)22338;
int var_16 = 2043268207;
int zero = 0;
unsigned short var_20 = (unsigned short)1235;
unsigned char var_21 = (unsigned char)20;
unsigned char var_22 = (unsigned char)102;
unsigned char var_23 = (unsigned char)133;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)1090;
    value_mismatch |= var_21 != (unsigned char)123;
    value_mismatch |= var_22 != (unsigned char)0;
    value_mismatch |= var_23 != (unsigned char)64;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, var_16, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
