/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1538
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1538
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
void test(val<unsigned int> var_0, val<signed char> var_2, val<unsigned short> var_5, val<unsigned short> var_9, val<signed char> var_10, val<unsigned char> var_11, val<long long int> var_12, val<long long int> var_13, val<unsigned int> var_16, val<int> zero, val<long long int*> var_19, val<long long int*> var_20) {
    *var_19 = min((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) - (var_13))) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))))), (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))) : (((val<long long int>) var_16)))));
    *var_20 = ((/* implicit */val<long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2197610672U;
signed char var_2 = (signed char)91;
unsigned short var_5 = (unsigned short)31692;
unsigned short var_9 = (unsigned short)60404;
signed char var_10 = (signed char)-7;
unsigned char var_11 = (unsigned char)251;
long long int var_12 = 7662661395575995042LL;
long long int var_13 = 7483050005904375302LL;
unsigned int var_16 = 4038839154U;
int zero = 0;
long long int var_19 = -4303280487288004775LL;
long long int var_20 = -579948013445493776LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -123883352193635LL;
    value_mismatch |= var_20 != 251LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_9, var_10, var_11, var_12, var_13, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
