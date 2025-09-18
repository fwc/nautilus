/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8327
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8327
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
void test(val<bool> var_0, val<signed char> var_4, val<unsigned long long int> var_9, val<int> zero, val<int*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<int>) min((((/* implicit */val<long long int>) var_0)), (((((/* implicit */val<bool>) 262143U)) ? (((/* implicit */val<long long int>) 201967690)) : (6556063081074740863LL)))));
    *var_12 = ((var_9) ^ (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((201967690) != (((/* implicit */val<int>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
signed char var_4 = (signed char)-51;
unsigned long long int var_9 = 9193777251781827549ULL;
int zero = 0;
int var_11 = 2110668082;
unsigned long long int var_12 = 5140920454872572688ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1;
    value_mismatch |= var_12 != 9252966821927724067ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_9, zero, &var_11, &var_12);
  checksum();
}
