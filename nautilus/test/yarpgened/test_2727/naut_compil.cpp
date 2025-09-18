/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2727
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2727
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<unsigned short> var_2, val<signed char> var_3, val<unsigned char> var_6, val<unsigned char> var_7, val<unsigned long long int> var_9, val<unsigned int> var_10, val<unsigned int> var_11, val<unsigned int> var_12, val<unsigned short> var_13, val<int> zero, val<signed char*> var_15, val<unsigned char*> var_16, val<bool*> var_17, val<unsigned short*> var_18, val<int*> var_19) {
    *var_15 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) var_6)), (min((1000299865U), (var_0)))))), (((((/* implicit */val<bool>) var_10)) ? (min((((/* implicit */val<unsigned long long int>) var_7)), (var_9))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<short>)-32223))))) * (((((/* implicit */val<bool>) var_2)) ? (var_11) : (var_1))))) | (var_1)));
    *var_17 = ((/* implicit */val<bool>) (~(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max(((val<bool>)0), ((val<bool>)0))))) ^ (var_12)))));
    *var_18 = ((/* implicit */val<unsigned short>) min((*var_18), (((/* implicit */val<unsigned short>) ((val<signed char>) max((((val<int>) var_13)), (((/* implicit */val<int>) ((val<unsigned short>) var_13)))))))));
    *var_19 ^= ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) > (((/* implicit */val<int>) var_7))))) % (((/* implicit */val<int>) var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 451560341U;
unsigned int var_1 = 1276693992U;
unsigned short var_2 = (unsigned short)26929;
signed char var_3 = (signed char)106;
unsigned char var_6 = (unsigned char)132;
unsigned char var_7 = (unsigned char)72;
unsigned long long int var_9 = 14672099436055514125ULL;
unsigned int var_10 = 281203517U;
unsigned int var_11 = 3471954741U;
unsigned int var_12 = 3433876298U;
unsigned short var_13 = (unsigned short)47437;
int zero = 0;
signed char var_15 = (signed char)-19;
unsigned char var_16 = (unsigned char)153;
bool var_17 = (bool)1;
unsigned short var_18 = (unsigned short)12902;
int var_19 = -1726593971;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)72;
    value_mismatch |= var_16 != (unsigned char)253;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned short)77;
    value_mismatch |= var_19 != -1726593971;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
