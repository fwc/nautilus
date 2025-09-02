/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5530
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5530
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
void test(val<bool> var_0, val<unsigned char> var_1, val<long long int> var_2, val<unsigned char> var_4, val<unsigned char> var_8, val<unsigned char> var_9, val<int> var_10, val<unsigned int> var_12, val<unsigned short> var_13, val<int> zero, val<bool*> var_14, val<unsigned char*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<bool>) (~(((((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (var_12))) >> (((max((0), (((/* implicit */val<int>) (val<unsigned char>)246)))) - (242)))))));
    *var_15 = ((/* implicit */val<unsigned char>) var_0);
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) (val<unsigned short>)16383)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_0)))))) : (((((/* implicit */val<int>) max((var_9), (var_8)))) - (((((/* implicit */val<bool>) var_2)) ? (var_10) : (((/* implicit */val<int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_1 = (unsigned char)41;
long long int var_2 = 2907200789194117722LL;
unsigned char var_4 = (unsigned char)71;
unsigned char var_8 = (unsigned char)242;
unsigned char var_9 = (unsigned char)249;
int var_10 = -353806423;
unsigned int var_12 = 2987249766U;
unsigned short var_13 = (unsigned short)12844;
int zero = 0;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)151;
unsigned short var_16 = (unsigned short)48815;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_8, var_9, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
