/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3704
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3704
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_1, val<unsigned char> var_2, val<bool> var_5, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_12, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_12 = var_10;
    *var_13 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)165))) == (var_1)))))))));
    *var_14 = ((/* implicit */val<unsigned short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 577528996U;
unsigned long long int var_1 = 14887663971446821845ULL;
unsigned char var_2 = (unsigned char)32;
bool var_5 = (bool)0;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
unsigned char var_12 = (unsigned char)168;
long long int var_13 = 1134743888382809123LL;
unsigned short var_14 = (unsigned short)43205;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)122;
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (unsigned short)32;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
}
