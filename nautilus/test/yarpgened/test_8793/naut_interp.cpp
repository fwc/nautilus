/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8793
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8793
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
void test(val<unsigned short> var_2, val<unsigned long long int> var_5, val<int> var_7, val<int> zero, val<unsigned long long int*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) min((*var_13), ((+(max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) 574391277U))))), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_5)))))))));
    *var_14 = ((/* implicit */val<unsigned short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15848;
unsigned long long int var_5 = 5662629398038592169ULL;
int var_7 = -1172304267;
int zero = 0;
unsigned long long int var_13 = 9523020939249127241ULL;
unsigned short var_14 = (unsigned short)50977;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 15848ULL;
    value_mismatch |= var_14 != (unsigned short)3701;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, zero, &var_13, &var_14);
  checksum();
}
