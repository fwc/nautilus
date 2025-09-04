/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4733
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4733
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
void test(val<int> var_1, val<long long int> var_3, val<signed char> var_5, val<long long int> var_6, val<unsigned char> var_8, val<unsigned char> var_9, val<unsigned long long int> var_10, val<unsigned char> var_11, val<int> var_12, val<int> var_13, val<long long int> var_14, val<int> zero, val<signed char*> var_16, val<unsigned int*> var_17, val<unsigned short*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) min((var_10), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_5)) : (var_13))) & (((/* implicit */val<int>) var_8)))))));
    *var_17 = ((/* implicit */val<unsigned int>) var_3);
    *var_18 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))) ? (((/* implicit */val<int>) var_9)) : (((((/* implicit */val<bool>) var_14)) ? (var_1) : (((/* implicit */val<int>) var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 455428582;
long long int var_3 = 7566773382781117337LL;
signed char var_5 = (signed char)45;
long long int var_6 = -5112199387302196866LL;
unsigned char var_8 = (unsigned char)159;
unsigned char var_9 = (unsigned char)76;
unsigned long long int var_10 = 3926905715765677321ULL;
unsigned char var_11 = (unsigned char)129;
int var_12 = -2008168811;
int var_13 = -1767075134;
long long int var_14 = 2636229771777115144LL;
int zero = 0;
signed char var_16 = (signed char)18;
unsigned int var_17 = 2998675177U;
unsigned short var_18 = (unsigned short)24611;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)13;
    value_mismatch |= var_17 != 411870105U;
    value_mismatch |= var_18 != (unsigned short)65459;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
