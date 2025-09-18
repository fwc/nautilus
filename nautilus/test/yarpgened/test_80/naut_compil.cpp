/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 80
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=80
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
void test(val<long long int> var_3, val<unsigned long long int> var_5, val<int> var_9, val<unsigned char> var_10, val<signed char> var_11, val<long long int> var_15, val<int> zero, val<int*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_10), (var_10)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) var_15)))) : (13629272719247023705ULL)))) ? (min((((((/* implicit */val<bool>) 2156746374U)) ? (13629272719247023703ULL) : (((/* implicit */val<unsigned long long int>) var_3)))), (((/* implicit */val<unsigned long long int>) var_11)))) : (var_5)));
    *var_20 *= ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1457945492061244322LL;
unsigned long long int var_5 = 9992008977271109710ULL;
int var_9 = -1504033830;
unsigned char var_10 = (unsigned char)194;
signed char var_11 = (signed char)25;
long long int var_15 = -6339425709527924945LL;
int zero = 0;
int var_19 = -1498353853;
unsigned char var_20 = (unsigned char)21;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 25;
    value_mismatch |= var_20 != (unsigned char)226;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_9, var_10, var_11, var_15, zero, &var_19, &var_20);
  checksum();
}
