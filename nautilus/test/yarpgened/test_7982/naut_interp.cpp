/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7982
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7982
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
void test(val<long long int> var_0, val<short> var_1, val<long long int> var_4, val<int> var_5, val<int> var_7, val<unsigned char> var_9, val<unsigned char> var_10, val<bool> var_11, val<int> zero, val<long long int*> var_12, val<int*> var_13, val<bool*> var_14) {
    *var_12 = var_4;
    *var_13 = ((/* implicit */val<int>) max((var_0), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) var_5)) : (var_4)))) ? (((((/* implicit */val<bool>) var_10)) ? (var_0) : (((/* implicit */val<long long int>) 16376U)))) : (((var_0) & (((/* implicit */val<long long int>) 16376U))))))));
    *var_14 = ((/* implicit */val<bool>) ((((var_4) + (9223372036854775807LL))) >> (((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1095416282U)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) var_9)) : (var_7))) - (1180626249)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6249263530742654717LL;
short var_1 = (short)14625;
long long int var_4 = -1387468349595581842LL;
int var_5 = 303721517;
int var_7 = 1180626259;
unsigned char var_9 = (unsigned char)119;
unsigned char var_10 = (unsigned char)252;
bool var_11 = (bool)0;
int zero = 0;
long long int var_12 = -9082998694413899061LL;
int var_13 = 1318438578;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -1387468349595581842LL;
    value_mismatch |= var_13 != -968369917;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
