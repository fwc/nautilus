/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9140
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9140
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
void test(val<unsigned int> var_2, val<int> var_3, val<short> var_4, val<int> var_5, val<long long int> var_7, val<int> var_9, val<int> zero, val<unsigned long long int*> var_15, val<long long int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) (((-((-(((/* implicit */val<int>) (val<unsigned short>)47948)))))) >> (((((/* implicit */val<int>) (val<unsigned short>)47967)) - (47963))))))));
    *var_16 = ((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)0)) % (((/* implicit */val<int>) var_4))))))) ? (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_7)) ? (var_5) : (((/* implicit */val<int>) (val<unsigned short>)17588)))) - (var_9)))) : (var_2)));
    *var_17 |= var_3;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 468255582U;
int var_3 = 1954950111;
short var_4 = (short)-30380;
int var_5 = 165378940;
long long int var_7 = 3036543941433523295LL;
int var_9 = -76259204;
int zero = 0;
unsigned long long int var_15 = 8907596508759244050ULL;
long long int var_16 = -6420072868437026727LL;
int var_17 = 2046310672;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 8907596508759244050ULL;
    value_mismatch |= var_16 != 241638144LL;
    value_mismatch |= var_17 != 2113813471;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_7, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
