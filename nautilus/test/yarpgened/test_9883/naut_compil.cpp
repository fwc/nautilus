/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9883
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9883
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
void test(val<int> var_1, val<int> var_2, val<int> var_3, val<bool> var_4, val<signed char> var_5, val<bool> var_6, val<unsigned char> var_7, val<int> var_11, val<int> zero, val<unsigned char*> var_12, val<bool*> var_13, val<long long int*> var_14, val<int*> var_15) {
    *var_12 |= ((/* implicit */val<unsigned char>) min((min((((var_3) > (var_1))), ((!(((/* implicit */val<bool>) var_5)))))), (max((((((/* implicit */val<long long int>) var_2)) <= (-4531422344730810624LL))), (((((/* implicit */val<bool>) var_11)) && (((/* implicit */val<bool>) var_3))))))));
    *var_13 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)72))));
    *var_14 = ((/* implicit */val<long long int>) (val<unsigned char>)241);
    *var_15 = ((/* implicit */val<int>) ((min((max((((/* implicit */val<int>) var_7)), (1707232100))), (((/* implicit */val<int>) var_4)))) > (((val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -842893250;
int var_2 = -940179338;
int var_3 = -6210414;
bool var_4 = (bool)1;
signed char var_5 = (signed char)45;
bool var_6 = (bool)0;
unsigned char var_7 = (unsigned char)97;
int var_11 = -847942862;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
bool var_13 = (bool)0;
long long int var_14 = -4259730062856695688LL;
int var_15 = 273535915;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)132;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 241LL;
    value_mismatch |= var_15 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
