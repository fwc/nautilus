/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1155
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1155
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<int> var_3, val<short> var_4, val<bool> var_7, val<short> var_8, val<unsigned long long int> var_9, val<bool> var_10, val<unsigned long long int> var_13, val<unsigned char> var_15, val<unsigned long long int> var_16, val<int> zero, val<unsigned long long int*> var_17, val<bool*> var_18, val<bool*> var_19) {
    *var_17 ^= ((/* implicit */val<unsigned long long int>) ((((((((/* implicit */val<int>) var_4)) / (((/* implicit */val<int>) (val<unsigned short>)16)))) - (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) != (var_16)))))) <= (((((((((/* implicit */val<int>) (val<signed char>)-39)) + (2147483647))) << (((((((/* implicit */val<int>) (val<signed char>)-55)) + (83))) - (28))))) % (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-35)) <= (((/* implicit */val<int>) var_8)))))))));
    *var_18 = ((/* implicit */val<bool>) ((((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_15)) && (((/* implicit */val<bool>) var_8))))) ^ (((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) > (((/* implicit */val<int>) (val<short>)8192))))))) ^ (((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) || (var_7)))) << (((((((/* implicit */val<int>) (val<signed char>)-55)) ^ (((/* implicit */val<int>) var_4)))) - (19451)))))));
    *var_19 = ((((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-2048))) / (1065151889408ULL))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) == (var_13))))))) || (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_0) > (((/* implicit */val<unsigned long long int>) var_3)))))) % (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) - (var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8965956971584996864ULL;
bool var_1 = (bool)0;
int var_3 = 925399667;
short var_4 = (short)-19490;
bool var_7 = (bool)1;
short var_8 = (short)29898;
unsigned long long int var_9 = 4599062445935804021ULL;
bool var_10 = (bool)1;
unsigned long long int var_13 = 11387707998018121276ULL;
unsigned char var_15 = (unsigned char)70;
unsigned long long int var_16 = 5268375926503430726ULL;
int zero = 0;
unsigned long long int var_17 = 17364288741460982416ULL;
bool var_18 = (bool)1;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 17364288741460982417ULL;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_8, var_9, var_10, var_13, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
