/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5954
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5954
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<int> var_7, val<int> zero, val<unsigned char*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) (((+(var_1))) % (min((var_1), (((/* implicit */val<unsigned int>) (-(var_7))))))));
    *var_14 = ((/* implicit */val<int>) min((*var_14), (((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2789072247697934113LL;
unsigned int var_1 = 3789257148U;
int var_7 = 911410043;
int zero = 0;
unsigned char var_13 = (unsigned char)126;
int var_14 = -882229839;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)55;
    value_mismatch |= var_14 != -882229839;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, zero, &var_13, &var_14);
  checksum();
}
