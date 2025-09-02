/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1239
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1239
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
void test(val<bool> var_0, val<long long int> var_2, val<unsigned char> var_10, val<int> zero, val<unsigned long long int*> var_15, val<long long int*> var_16) {
    *var_15 ^= ((/* implicit */val<unsigned long long int>) var_0);
    *var_16 = ((((/* implicit */val<bool>) var_10)) ? (-1018963823410746150LL) : (var_2));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
long long int var_2 = -336935353075176270LL;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
unsigned long long int var_15 = 15678007237069239068ULL;
long long int var_16 = -995062441619718906LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 15678007237069239068ULL;
    value_mismatch |= var_16 != -1018963823410746150LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
