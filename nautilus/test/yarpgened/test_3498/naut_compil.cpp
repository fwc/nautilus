/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3498
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3498
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
void test(val<unsigned long long int> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<unsigned long long int>) var_8);
    *var_14 ^= var_7;
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 2055443058U)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)119))) : (2132340474U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2987222471568480212ULL;
unsigned char var_8 = (unsigned char)98;
int zero = 0;
unsigned long long int var_13 = 2913715400750030181ULL;
unsigned long long int var_14 = 3272545498384907307ULL;
unsigned char var_15 = (unsigned char)169;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 98ULL;
    value_mismatch |= var_14 != 296909680631770111ULL;
    value_mismatch |= var_15 != (unsigned char)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, zero, &var_13, &var_14, &var_15);
  checksum();
}
