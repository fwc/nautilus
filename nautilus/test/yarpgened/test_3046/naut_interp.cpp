/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3046
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3046
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
void test(val<long long int> var_0, val<int> var_1, val<int> var_2, val<signed char> var_4, val<long long int> var_5, val<int> var_7, val<bool> var_10, val<long long int> var_11, val<int> var_13, val<int> var_15, val<signed char> var_18, val<int> zero, val<long long int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21, val<unsigned short*> var_22, val<long long int*> var_23) {
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<int>) var_18)) / (((((/* implicit */val<bool>) -2120908266)) ? (var_7) : (var_7))))) : ((+(var_15)))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (+(((((val<int>) (val<signed char>)-6)) + (((/* implicit */val<int>) (val<signed char>)5))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) var_7)) : (var_0))), (((((/* implicit */val<bool>) (val<signed char>)-6)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))) ? (max((((var_10) ? (((/* implicit */val<long long int>) var_13)) : (var_11))), (var_11))) : (((/* implicit */val<long long int>) (~((+(var_7))))))));
    *var_22 = ((/* implicit */val<unsigned short>) var_0);
    *var_23 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)0))) : ((+(11791258305122192892ULL))))) << (((((((/* implicit */val<bool>) max((((/* implicit */val<int>) (val<signed char>)61)), (var_2)))) ? (min((6028165197517009961LL), (((/* implicit */val<long long int>) var_2)))) : (((/* implicit */val<long long int>) min((var_1), (((/* implicit */val<int>) var_4))))))) + (766789298LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1770340595054813710LL;
int var_1 = 1519952318;
int var_2 = -766789246;
signed char var_4 = (signed char)40;
long long int var_5 = -3392212770355709473LL;
int var_7 = -1242625751;
bool var_10 = (bool)1;
long long int var_11 = -6934516547566844924LL;
int var_13 = 1779193290;
int var_15 = 1173268047;
signed char var_18 = (signed char)-110;
int zero = 0;
long long int var_19 = 5271595013305009111LL;
unsigned long long int var_20 = 12799866617329680767ULL;
unsigned long long int var_21 = 14431315220282353875ULL;
unsigned short var_22 = (unsigned short)41964;
long long int var_23 = -981808784007453101LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != 18446744073709551615ULL;
    value_mismatch |= var_21 != 1779193290ULL;
    value_mismatch |= var_22 != (unsigned short)8718;
    value_mismatch |= var_23 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_10, var_11, var_13, var_15, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
