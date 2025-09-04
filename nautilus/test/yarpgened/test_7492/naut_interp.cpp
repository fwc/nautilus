/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7492
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7492
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
void test(val<unsigned int> var_1, val<unsigned short> var_2, val<long long int> var_8, val<int> var_11, val<bool> var_14, val<int> zero, val<unsigned int*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_15 += ((/* implicit */val<unsigned int>) max((var_14), (min(((!(((/* implicit */val<bool>) (val<short>)28978)))), ((val<bool>)1)))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_8);
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) var_11)) * (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) * (var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1882427484U;
unsigned short var_2 = (unsigned short)59424;
long long int var_8 = -8678731736964381517LL;
int var_11 = 2014684571;
bool var_14 = (bool)0;
int zero = 0;
unsigned int var_15 = 3119336522U;
unsigned long long int var_16 = 391384935729470493ULL;
unsigned long long int var_17 = 694574756328113978ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 3119336522U;
    value_mismatch |= var_16 != 9768012336745170099ULL;
    value_mismatch |= var_17 != 2496763520ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_11, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
