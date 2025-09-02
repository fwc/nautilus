/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3897
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3897
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_4, val<bool> var_11, val<int> zero, val<bool*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16) {
    *var_14 = ((/* implicit */val<bool>) var_4);
    *var_15 = ((/* implicit */val<bool>) var_4);
    *var_16 = ((((var_11) ? (((/* implicit */val<unsigned long long int>) -3098156238076558082LL)) : (var_4))) + (((min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)8190)), (var_2))) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) (val<short>)-30070)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7680316347174898099ULL;
unsigned long long int var_4 = 7689083502312714668ULL;
bool var_11 = (bool)1;
int zero = 0;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
unsigned long long int var_16 = 91365086520221024ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 15348587835632993593ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
