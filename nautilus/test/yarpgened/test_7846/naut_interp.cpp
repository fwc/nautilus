/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7846
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7846
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
void test(val<unsigned int> var_1, val<signed char> var_2, val<unsigned int> var_3, val<int> var_4, val<unsigned char> var_6, val<unsigned int> var_9, val<signed char> var_10, val<int> var_11, val<int> var_14, val<long long int> var_15, val<unsigned short> var_16, val<signed char> var_17, val<unsigned short> var_18, val<int> zero, val<unsigned long long int*> var_19, val<signed char*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_11) : (((/* implicit */val<int>) var_17))))) ? (var_4) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) var_18))))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 16776192)) ? (16776192) : (((/* implicit */val<int>) (val<bool>)1))))) ? (var_4) : (((/* implicit */val<int>) ((var_14) >= (((/* implicit */val<int>) var_18))))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (var_15) : (var_15)))) ? (((((/* implicit */val<bool>) var_16)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17))) + (var_1)))))) ? (var_14) : (((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3274195990U;
signed char var_2 = (signed char)-6;
unsigned int var_3 = 3011342760U;
int var_4 = 477141054;
unsigned char var_6 = (unsigned char)42;
unsigned int var_9 = 1104569140U;
signed char var_10 = (signed char)97;
int var_11 = -918797750;
int var_14 = 168570342;
long long int var_15 = -3599814892451794413LL;
unsigned short var_16 = (unsigned short)3579;
signed char var_17 = (signed char)-108;
unsigned short var_18 = (unsigned short)61845;
int zero = 0;
unsigned long long int var_19 = 11644608019404693630ULL;
signed char var_20 = (signed char)-48;
unsigned long long int var_21 = 9980650435091574938ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3011342760ULL;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != 168570342ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_9, var_10, var_11, var_14, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
