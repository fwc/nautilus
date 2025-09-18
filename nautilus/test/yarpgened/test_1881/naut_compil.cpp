/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1881
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1881
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
void test(val<unsigned long long int> var_3, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_16 *= ((/* implicit */val<unsigned int>) var_3);
    *var_17 ^= ((/* implicit */val<unsigned long long int>) var_14);
    *var_18 -= ((/* implicit */val<unsigned int>) 5358019394215896449LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1211813048094247057ULL;
unsigned char var_14 = (unsigned char)235;
int zero = 0;
unsigned int var_16 = 3789485721U;
unsigned long long int var_17 = 4124293983775709536ULL;
unsigned int var_18 = 3221562178U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 2418259113U;
    value_mismatch |= var_17 != 4124293983775709579ULL;
    value_mismatch |= var_18 != 2082520513U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
