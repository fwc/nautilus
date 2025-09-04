/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2689
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2689
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
void test(val<unsigned int> var_7, val<unsigned long long int> var_10, val<bool> var_11, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((var_11) ? (((((/* implicit */val<bool>) 6970546520061224327LL)) ? (((((/* implicit */val<bool>) 15162660888345649460ULL)) ? (-9223372036854775797LL) : (-6970546520061224337LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((/* implicit */val<long long int>) var_7))));
    *var_19 = ((val<unsigned long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 459017045U;
unsigned long long int var_10 = 13411672044670686356ULL;
bool var_11 = (bool)0;
int zero = 0;
unsigned long long int var_18 = 10326896986104948978ULL;
unsigned long long int var_19 = 11676298430434365538ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 459017045ULL;
    value_mismatch |= var_19 != 13411672044670686356ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
