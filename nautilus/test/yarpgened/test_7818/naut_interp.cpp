/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7818
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7818
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
void test(val<bool> var_2, val<unsigned short> var_3, val<unsigned char> var_9, val<long long int> var_10, val<unsigned long long int> var_12, val<int> zero, val<short*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<short>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)60934)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (var_10)))) ? (var_12) : (((/* implicit */val<unsigned long long int>) 4040618831U)))), (((/* implicit */val<unsigned long long int>) (((!(((/* implicit */val<bool>) var_3)))) ? (((/* implicit */val<int>) var_9)) : (((val<int>) var_2)))))));
    *var_15 = (val<unsigned char>)114;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned short var_3 = (unsigned short)22487;
unsigned char var_9 = (unsigned char)88;
long long int var_10 = -5887094841634642182LL;
unsigned long long int var_12 = 3205227445993185686ULL;
int zero = 0;
short var_14 = (short)-8202;
unsigned char var_15 = (unsigned char)132;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != (unsigned char)114;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_9, var_10, var_12, zero, &var_14, &var_15);
  checksum();
}
