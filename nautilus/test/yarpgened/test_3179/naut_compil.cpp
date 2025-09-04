/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3179
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3179
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
void test(val<bool> var_0, val<int> var_3, val<long long int> var_4, val<int> var_5, val<int> var_7, val<unsigned int> var_8, val<int> zero, val<short*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<short>) ((((/* implicit */val<long long int>) (-(min((var_7), (((/* implicit */val<int>) (val<unsigned char>)15))))))) == (var_4)));
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((max((((/* implicit */val<unsigned int>) var_3)), (var_8))), (var_8)))) ? (((/* implicit */val<long long int>) (-(((((/* implicit */val<bool>) var_4)) ? (var_5) : (((/* implicit */val<int>) var_0))))))) : (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_3 = -593132251;
long long int var_4 = 8497056291842381599LL;
int var_5 = -141247003;
int var_7 = 367991860;
unsigned int var_8 = 1850505991U;
int zero = 0;
short var_10 = (short)12268;
unsigned long long int var_11 = 4297711257222681949ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)0;
    value_mismatch |= var_11 != 141247003ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
