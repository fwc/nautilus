/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9357
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9357
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
void test(val<long long int> var_0, val<long long int> var_1, val<unsigned char> var_4, val<long long int> var_5, val<bool> var_6, val<unsigned short> var_7, val<unsigned int> var_8, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11, val<short*> var_12, val<signed char*> var_13) {
    *var_10 = ((/* implicit */val<unsigned int>) var_4);
    *var_11 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-32)) ? (((/* implicit */val<int>) (val<signed char>)-36)) : (((/* implicit */val<int>) (val<signed char>)-115))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (var_8)))) : (((((/* implicit */val<bool>) var_8)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))));
    *var_12 = ((/* implicit */val<short>) var_1);
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<signed char>)47)) : (((/* implicit */val<int>) var_4))))) : (var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7287147862069738081LL;
long long int var_1 = 3387971074028663161LL;
unsigned char var_4 = (unsigned char)43;
long long int var_5 = 7982802537503135916LL;
bool var_6 = (bool)1;
unsigned short var_7 = (unsigned short)62255;
unsigned int var_8 = 2247578042U;
int zero = 0;
unsigned int var_10 = 3484139420U;
unsigned int var_11 = 1493978169U;
short var_12 = (short)-30132;
signed char var_13 = (signed char)38;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 43U;
    value_mismatch |= var_11 != 1U;
    value_mismatch |= var_12 != (short)-3719;
    value_mismatch |= var_13 != (signed char)47;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
