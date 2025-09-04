/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7052
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7052
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
void test(val<signed char> var_1, val<unsigned char> var_3, val<int> var_4, val<unsigned long long int> var_5, val<signed char> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_12, val<short> var_13, val<signed char> var_14, val<signed char> var_15, val<unsigned int> var_16, val<int> zero, val<unsigned long long int*> var_17, val<unsigned int*> var_18, val<unsigned short*> var_19, val<unsigned short*> var_20) {
    *var_17 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) 6933449493645150415ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) : (11513294580064401200ULL))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_12)) ? (var_4) : (var_4)))))))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) <= (var_10))) ? (var_16) : (((/* implicit */val<unsigned int>) var_4))))) ? (((val<unsigned long long int>) var_13)) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<unsigned long long int>) var_13))))) ? ((+(((/* implicit */val<int>) var_1)))) : (((/* implicit */val<int>) max((var_3), (((/* implicit */val<unsigned char>) var_14))))))))));
    *var_19 = ((/* implicit */val<unsigned short>) var_15);
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned char var_3 = (unsigned char)211;
int var_4 = -811981995;
unsigned long long int var_5 = 5599230943630110648ULL;
signed char var_9 = (signed char)109;
unsigned long long int var_10 = 2810078032600399933ULL;
unsigned long long int var_12 = 4966868524082487166ULL;
short var_13 = (short)17827;
signed char var_14 = (signed char)30;
signed char var_15 = (signed char)-99;
unsigned int var_16 = 587572007U;
int zero = 0;
unsigned long long int var_17 = 2991179666305221516ULL;
unsigned int var_18 = 2026385133U;
unsigned short var_19 = (unsigned short)49862;
unsigned short var_20 = (unsigned short)4805;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != 17827U;
    value_mismatch |= var_19 != (unsigned short)65437;
    value_mismatch |= var_20 != (unsigned short)4805;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_9, var_10, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
