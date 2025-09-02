/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1219
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1219
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
void test(val<int> var_2, val<bool> var_3, val<long long int> var_7, val<unsigned char> var_8, val<unsigned long long int> var_10, val<int> zero, val<bool*> var_12, val<unsigned char*> var_13) {
    *var_12 ^= ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) var_2)) * (var_10)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (4294967295U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))))) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))));
    *var_13 = ((/* implicit */val<unsigned char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2020175407;
bool var_3 = (bool)1;
long long int var_7 = -4139286888100663592LL;
unsigned char var_8 = (unsigned char)104;
unsigned long long int var_10 = 16734691968417353352ULL;
int zero = 0;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)199;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (unsigned char)216;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_8, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
