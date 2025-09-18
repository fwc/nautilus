/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4405
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4405
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
void test(val<int> var_0, val<bool> var_1, val<signed char> var_2, val<unsigned long long int> var_4, val<bool> var_6, val<unsigned char> var_7, val<int> var_9, val<int> var_12, val<int> var_17, val<int> zero, val<unsigned long long int*> var_18, val<int*> var_19, val<int*> var_20, val<unsigned int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_2))))) ? (((val<long long int>) var_2)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4)))))))), (((/* implicit */val<long long int>) var_2))));
    *var_19 += ((/* implicit */val<int>) var_1);
    *var_20 = ((/* implicit */val<int>) max((var_7), (((/* implicit */val<unsigned char>) var_1))));
    *var_21 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_6)) : (var_12)))) ? (var_0) : (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 517179840;
bool var_1 = (bool)1;
signed char var_2 = (signed char)117;
unsigned long long int var_4 = 17398782597758574566ULL;
bool var_6 = (bool)1;
unsigned char var_7 = (unsigned char)149;
int var_9 = 755979562;
int var_12 = -1228676101;
int var_17 = 1533005670;
int zero = 0;
unsigned long long int var_18 = 7833926398732294777ULL;
int var_19 = -868991294;
int var_20 = 746636958;
unsigned int var_21 = 3725680010U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 117ULL;
    value_mismatch |= var_19 != -868991293;
    value_mismatch |= var_20 != 149;
    value_mismatch |= var_21 != 504433024U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, var_9, var_12, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
