/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5090
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5090
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
void test(val<unsigned short> var_2, val<int> var_4, val<unsigned char> var_5, val<int> var_6, val<signed char> var_7, val<unsigned char> var_8, val<unsigned char> var_10, val<unsigned short> var_12, val<int> zero, val<int*> var_13, val<int*> var_14) {
    *var_13 = max((((((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) > (var_4)))) << (((((/* implicit */val<int>) var_10)) - (221))))), ((+(((((/* implicit */val<int>) var_2)) % (((/* implicit */val<int>) var_5)))))));
    *var_14 *= ((/* implicit */val<int>) ((val<unsigned int>) ((((((/* implicit */val<int>) var_8)) << (((((var_6) + (1805297750))) - (12))))) == (((/* implicit */val<int>) max((var_12), (((/* implicit */val<unsigned short>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12128;
int var_4 = 98169998;
unsigned char var_5 = (unsigned char)236;
int var_6 = -1805297721;
signed char var_7 = (signed char)122;
unsigned char var_8 = (unsigned char)88;
unsigned char var_10 = (unsigned char)222;
unsigned short var_12 = (unsigned short)3909;
int zero = 0;
int var_13 = 1077430063;
int var_14 = -2143279053;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 92;
    value_mismatch |= var_14 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_8, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
