/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8052
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8052
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
void test(val<unsigned char> var_2, val<unsigned long long int> var_4, val<bool> var_6, val<unsigned int> var_7, val<unsigned char> var_9, val<short> var_13, val<bool> var_14, val<int> var_15, val<unsigned long long int> var_16, val<unsigned long long int> var_18, val<int> zero, val<unsigned char*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_9))))))) ? (((/* implicit */val<int>) (val<short>)15)) : ((+((-(((/* implicit */val<int>) var_6))))))));
    *var_20 = ((/* implicit */val<int>) (((val<bool>)1) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) | (var_16))) : (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_14)), (var_18)))) ? (((/* implicit */val<unsigned long long int>) var_15)) : (((((/* implicit */val<bool>) (val<signed char>)-80)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)12))) : (var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)221;
unsigned long long int var_4 = 3848946709592334205ULL;
bool var_6 = (bool)0;
unsigned int var_7 = 3753604398U;
unsigned char var_9 = (unsigned char)96;
short var_13 = (short)-26991;
bool var_14 = (bool)1;
int var_15 = 1855806290;
unsigned long long int var_16 = 8453797919349634710ULL;
unsigned long long int var_18 = 5195600834598062761ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)167;
int var_20 = -1636333708;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)15;
    value_mismatch |= var_20 != -507152673;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, var_9, var_13, var_14, var_15, var_16, var_18, zero, &var_19, &var_20);
  checksum();
}
