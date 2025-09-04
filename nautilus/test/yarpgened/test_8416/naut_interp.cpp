/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8416
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8416
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
void test(val<bool> var_0, val<long long int> var_4, val<signed char> var_6, val<signed char> var_7, val<bool> var_9, val<bool> var_12, val<unsigned int> var_13, val<long long int> var_14, val<int> zero, val<unsigned int*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned int>) min((*var_15), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? (((((var_12) && (var_0))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) var_13))))))) : (((/* implicit */val<int>) min(((val<unsigned short>)51999), ((val<unsigned short>)13545)))))))));
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) ^ (var_4))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (404252804U)));
    *var_17 = ((/* implicit */val<short>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
long long int var_4 = 6735261353075233145LL;
signed char var_6 = (signed char)-63;
signed char var_7 = (signed char)58;
bool var_9 = (bool)0;
bool var_12 = (bool)0;
unsigned int var_13 = 463204951U;
long long int var_14 = 6484665144964803937LL;
int zero = 0;
unsigned int var_15 = 3478452609U;
int var_16 = -956922092;
short var_17 = (short)-12028;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1U;
    value_mismatch |= var_16 != -63;
    value_mismatch |= var_17 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_7, var_9, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
