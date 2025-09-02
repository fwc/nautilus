/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6296
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6296
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
void test(val<unsigned int> var_2, val<unsigned short> var_6, val<unsigned int> var_7, val<signed char> var_11, val<int> zero, val<unsigned short*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = (val<unsigned short>)21027;
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<signed char>)-36))))) > (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_6))))) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) -1434689532))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2072677143U;
unsigned short var_6 = (unsigned short)20711;
unsigned int var_7 = 356827580U;
signed char var_11 = (signed char)-88;
int zero = 0;
unsigned short var_12 = (unsigned short)61099;
unsigned long long int var_13 = 14736446008622479828ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)21027;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
