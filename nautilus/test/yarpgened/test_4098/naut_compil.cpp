/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4098
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4098
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
void test(val<bool> var_3, val<int> zero, val<unsigned long long int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 |= ((/* implicit */val<unsigned long long int>) (val<unsigned char>)253);
    *var_11 -= ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_3)), ((val<unsigned short>)64948))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
int zero = 0;
unsigned long long int var_10 = 14285968693916438248ULL;
unsigned long long int var_11 = 7276257274206288367ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 14285968693916438269ULL;
    value_mismatch |= var_11 != 7276257274206288367ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_10, &var_11);
  checksum();
}
