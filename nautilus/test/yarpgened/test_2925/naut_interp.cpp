/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2925
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2925
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
void test(val<signed char> var_2, val<bool> var_3, val<bool> var_5, val<bool> var_6, val<unsigned long long int> var_9, val<long long int> var_10, val<unsigned char> var_11, val<long long int> var_12, val<int> var_13, val<unsigned long long int> var_14, val<int> zero, val<unsigned long long int*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 8388607)) ? (((/* implicit */val<long long int>) -1390686643)) : (2397399887131527232LL)))) : (((((/* implicit */val<bool>) var_10)) ? (var_14) : (((/* implicit */val<unsigned long long int>) (-2147483647 - 1)))))))) || (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) == (((((/* implicit */val<bool>) var_12)) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))))));
    *var_17 = ((/* implicit */val<signed char>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_13)))))) >= (((val<unsigned long long int>) 12160095456504598163ULL)))) ? (((var_6) ? (((/* implicit */val<int>) ((val<unsigned char>) var_9))) : ((-(((/* implicit */val<int>) (val<unsigned char>)0)))))) : (((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-69;
bool var_3 = (bool)1;
bool var_5 = (bool)1;
bool var_6 = (bool)0;
unsigned long long int var_9 = 14928205184942747591ULL;
long long int var_10 = 1139437033472957354LL;
unsigned char var_11 = (unsigned char)20;
long long int var_12 = 8435650938603103972LL;
int var_13 = -25180925;
unsigned long long int var_14 = 9326216691510679957ULL;
int zero = 0;
unsigned long long int var_16 = 3506421732613267096ULL;
signed char var_17 = (signed char)-32;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
