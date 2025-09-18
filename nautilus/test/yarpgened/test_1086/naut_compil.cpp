/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1086
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1086
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
void test(val<unsigned long long int> var_4, val<unsigned int> var_5, val<unsigned char> var_6, val<unsigned char> var_15, val<int> zero, val<unsigned long long int*> var_18, val<int*> var_19) {
    *var_18 += ((/* implicit */val<unsigned long long int>) (~((~(min((((/* implicit */val<unsigned int>) var_15)), (var_5)))))));
    *var_19 *= ((/* implicit */val<int>) (((~((+(var_4))))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2932427897000517413ULL;
unsigned int var_5 = 2212204685U;
unsigned char var_6 = (unsigned char)58;
unsigned char var_15 = (unsigned char)45;
int zero = 0;
unsigned long long int var_18 = 14001425243492419481ULL;
int var_19 = 1724582537;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 14001425243492419526ULL;
    value_mismatch |= var_19 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_15, zero, &var_18, &var_19);
  checksum();
}
