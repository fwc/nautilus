/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7081
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7081
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
void test(val<unsigned short> var_0, val<unsigned char> var_1, val<int> var_4, val<unsigned long long int> var_5, val<bool> var_6, val<signed char> var_7, val<unsigned char> var_8, val<short> var_9, val<unsigned long long int> var_12, val<unsigned char> var_13, val<bool> var_14, val<unsigned short> var_15, val<int> zero, val<bool*> var_16, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned char*> var_19) {
    *var_16 = var_6;
    *var_17 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_18 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (var_5))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_14)))))))) ? (((((((/* implicit */val<bool>) 3260540350507797814ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (var_12))) + (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))) + (var_5))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_1)), (74723903U)))) ? (min((var_4), (((/* implicit */val<int>) var_13)))) : (((/* implicit */val<int>) max((((/* implicit */val<short>) var_7)), (var_9))))))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) min(((val<unsigned short>)0), (var_0))))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_5))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) -733045724)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_1)))))))) : (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20737;
unsigned char var_1 = (unsigned char)19;
int var_4 = 2075568397;
unsigned long long int var_5 = 14728802827523520890ULL;
bool var_6 = (bool)0;
signed char var_7 = (signed char)80;
unsigned char var_8 = (unsigned char)84;
short var_9 = (short)6478;
unsigned long long int var_12 = 7654451652878322656ULL;
unsigned char var_13 = (unsigned char)224;
bool var_14 = (bool)1;
unsigned short var_15 = (unsigned short)36508;
int zero = 0;
bool var_16 = (bool)0;
unsigned long long int var_17 = 17051677355035839172ULL;
unsigned long long int var_18 = 16234522440417190101ULL;
unsigned char var_19 = (unsigned char)234;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != 19ULL;
    value_mismatch |= var_18 != 224ULL;
    value_mismatch |= var_19 != (unsigned char)19;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_8, var_9, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
