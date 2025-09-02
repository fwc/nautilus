/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7518
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7518
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
void test(val<unsigned long long int> var_0, val<short> var_2, val<long long int> var_4, val<long long int> var_8, val<int> zero, val<bool*> var_11, val<unsigned int*> var_12) {
    *var_11 -= (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<unsigned long long int>) var_4)) ^ (var_0))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)7881)) ? (((/* implicit */val<long long int>) 1031474491)) : (var_8))))))));
    *var_12 = ((/* implicit */val<unsigned int>) (~(var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13684422043411553063ULL;
short var_2 = (short)31213;
long long int var_4 = 7437551569926745610LL;
long long int var_8 = -6408456734276876897LL;
int zero = 0;
bool var_11 = (bool)0;
unsigned int var_12 = 3740435651U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 2582504664U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
