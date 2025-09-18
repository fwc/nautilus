/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4475
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4475
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
void test(val<bool> var_1, val<int> var_2, val<unsigned short> var_3, val<bool> var_4, val<int> var_5, val<long long int> var_6, val<unsigned short> var_9, val<unsigned short> var_11, val<int> var_12, val<long long int> var_13, val<long long int> var_14, val<int> zero, val<int*> var_18, val<bool*> var_19, val<bool*> var_20, val<int*> var_21) {
    *var_18 = ((((/* implicit */val<bool>) ((val<long long int>) min((var_13), (9223372036854775807LL))))) ? (((/* implicit */val<int>) var_11)) : (min((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_9)) : (var_2))), (var_2))));
    *var_19 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_1)), (min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (var_12) : (((/* implicit */val<int>) var_4))))), (var_6)))));
    *var_20 = ((((/* implicit */val<int>) ((val<bool>) min((((/* implicit */val<long long int>) var_5)), (9223372036854775794LL))))) != ((~(min((var_12), (((/* implicit */val<int>) var_4)))))));
    *var_21 = ((/* implicit */val<int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
int var_2 = -913430172;
unsigned short var_3 = (unsigned short)2010;
bool var_4 = (bool)0;
int var_5 = 1071288455;
long long int var_6 = 8055840131317352723LL;
unsigned short var_9 = (unsigned short)62091;
unsigned short var_11 = (unsigned short)50065;
int var_12 = -818186126;
long long int var_13 = 9164842248337117145LL;
long long int var_14 = -8494938275955680655LL;
int zero = 0;
int var_18 = -72765712;
bool var_19 = (bool)1;
bool var_20 = (bool)0;
int var_21 = -431932575;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 50065;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 1758124657;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_9, var_11, var_12, var_13, var_14, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
