/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5836
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5836
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
void test(val<bool> var_0, val<bool> var_6, val<unsigned long long int> var_8, val<bool> var_12, val<unsigned char> var_13, val<signed char> var_15, val<unsigned char> var_16, val<unsigned char> var_17, val<int> var_18, val<int> zero, val<unsigned long long int*> var_19, val<bool*> var_20, val<long long int*> var_21, val<short*> var_22) {
    *var_19 = max((((/* implicit */val<unsigned long long int>) var_13)), (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_0))))), (((var_8) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))))))));
    *var_20 ^= ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) (val<bool>)1))))))))) >= (var_8));
    *var_21 |= ((/* implicit */val<long long int>) (!((!(var_6)))));
    *var_22 = ((/* implicit */val<short>) max(((+(((((/* implicit */val<bool>) 18426117184069812955ULL)) ? (18426117184069812957ULL) : (((/* implicit */val<unsigned long long int>) 4172659038U)))))), (min((((/* implicit */val<unsigned long long int>) (-(var_18)))), (max((var_8), (((/* implicit */val<unsigned long long int>) var_13))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_6 = (bool)0;
unsigned long long int var_8 = 4447181360146487607ULL;
bool var_12 = (bool)0;
unsigned char var_13 = (unsigned char)223;
signed char var_15 = (signed char)76;
unsigned char var_16 = (unsigned char)178;
unsigned char var_17 = (unsigned char)170;
int var_18 = -964261375;
int zero = 0;
unsigned long long int var_19 = 3675245187201120223ULL;
bool var_20 = (bool)1;
long long int var_21 = 4916710693540272082LL;
short var_22 = (short)19636;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 18151068276520828550ULL;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 4916710693540272082LL;
    value_mismatch |= var_22 != (short)-15651;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_8, var_12, var_13, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
