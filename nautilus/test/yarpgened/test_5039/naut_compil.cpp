/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5039
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5039
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_8, val<short> var_9, val<bool> var_18, val<int> zero, val<int*> var_20, val<unsigned char*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((/* implicit */val<int>) var_18);
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9)))))))) ? (((((var_8) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))) >> (((((((/* implicit */val<bool>) 2370293397489069684ULL)) ? (-564249680) : (((/* implicit */val<int>) (val<unsigned char>)255)))) + (564249698))))) : ((+(((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) % (var_8)))))));
    *var_22 = ((/* implicit */val<unsigned char>) max((564249672), (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)168;
unsigned long long int var_8 = 4611398302784769020ULL;
short var_9 = (short)4760;
bool var_18 = (bool)1;
int zero = 0;
int var_20 = -864857526;
unsigned char var_21 = (unsigned char)171;
unsigned char var_22 = (unsigned char)227;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != (unsigned char)168;
    value_mismatch |= var_22 != (unsigned char)72;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
