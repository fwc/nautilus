/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4840
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4840
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
void test(val<int> var_1, val<signed char> var_2, val<int> var_9, val<short> var_10, val<bool> var_11, val<unsigned char> var_12, val<long long int> var_15, val<int> zero, val<int*> var_18, val<unsigned int*> var_19, val<int*> var_20) {
    *var_18 = ((val<int>) max((var_15), (((/* implicit */val<long long int>) var_1))));
    *var_19 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) ((val<signed char>) var_9)))));
    *var_20 = max(((+(((/* implicit */val<int>) ((val<bool>) var_11))))), (min((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_2)))), (((/* implicit */val<int>) (val<signed char>)101)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -53254199;
signed char var_2 = (signed char)45;
int var_9 = -512067653;
short var_10 = (short)22839;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)89;
long long int var_15 = 1336623761610341708LL;
int zero = 0;
int var_18 = 1597341869;
unsigned int var_19 = 2445744388U;
int var_20 = -692161360;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1121878708;
    value_mismatch |= var_19 != 4294967227U;
    value_mismatch |= var_20 != 101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_9, var_10, var_11, var_12, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
}
