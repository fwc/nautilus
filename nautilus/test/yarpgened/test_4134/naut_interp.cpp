/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4134
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4134
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
void test(val<int> var_2, val<long long int> var_4, val<bool> var_6, val<int> var_12, val<int> var_17, val<long long int> var_18, val<unsigned char> var_19, val<int> zero, val<int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<int>) var_6);
    *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) min((var_2), (var_12)))) % (((((/* implicit */val<bool>) var_12)) ? (var_4) : (var_18)))))) ? (((/* implicit */val<int>) var_19)) : (((val<int>) min((2139196018114892660LL), (((/* implicit */val<long long int>) var_17)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1252946713;
long long int var_4 = -1796660847300744871LL;
bool var_6 = (bool)1;
int var_12 = 1967986035;
int var_17 = 1675719459;
long long int var_18 = 8995343343401681225LL;
unsigned char var_19 = (unsigned char)205;
int zero = 0;
int var_20 = 234105748;
long long int var_21 = -7955998650741644271LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != 205LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_12, var_17, var_18, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
