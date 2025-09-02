/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1161
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1161
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
void test(val<int> var_1, val<unsigned long long int> var_2, val<int> var_6, val<bool> var_7, val<unsigned long long int> var_10, val<int> zero, val<int*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = ((/* implicit */val<int>) min((*var_12), (((var_7) ? (((((/* implicit */val<bool>) min(((val<signed char>)65), (((/* implicit */val<signed char>) var_7))))) ? (var_1) : (max((var_1), (var_6))))) : ((+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_6)))))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1472213910;
unsigned long long int var_2 = 16124744553519419813ULL;
int var_6 = 1763830177;
bool var_7 = (bool)0;
unsigned long long int var_10 = 14333979385358396263ULL;
int zero = 0;
int var_12 = 550051979;
unsigned long long int var_13 = 7747887109252136179ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_7, var_10, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
