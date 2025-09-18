/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7944
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7944
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
void test(val<bool> var_0, val<signed char> var_3, val<bool> var_7, val<bool> var_11, val<long long int> var_15, val<int> zero, val<long long int*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) max((((val<bool>) max((((/* implicit */val<long long int>) var_3)), (var_15)))), (var_7)));
    *var_21 = ((/* implicit */val<unsigned short>) ((val<int>) ((val<long long int>) ((((/* implicit */val<int>) var_0)) | (((/* implicit */val<int>) var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_3 = (signed char)-93;
bool var_7 = (bool)1;
bool var_11 = (bool)1;
long long int var_15 = 3772778852799945222LL;
int zero = 0;
long long int var_20 = 5455311518425448584LL;
unsigned short var_21 = (unsigned short)3092;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_11, var_15, zero, &var_20, &var_21);
  checksum();
}
