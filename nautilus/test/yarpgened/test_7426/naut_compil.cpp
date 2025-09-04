/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7426
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7426
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
void test(val<signed char> var_4, val<unsigned short> var_6, val<unsigned int> var_7, val<unsigned long long int> var_8, val<unsigned int> var_9, val<unsigned char> var_11, val<unsigned long long int> var_14, val<unsigned short> var_17, val<signed char> var_19, val<int> zero, val<unsigned char*> var_20, val<bool*> var_21, val<unsigned char*> var_22, val<unsigned char*> var_23) {
    *var_20 = ((/* implicit */val<unsigned char>) (((-(var_14))) >> ((((((!(((/* implicit */val<bool>) 839099275767898555ULL)))) ? (var_14) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) var_17)), (var_7)))))) - (63664ULL)))));
    *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_11)) / ((+(((/* implicit */val<int>) ((val<unsigned char>) var_9)))))));
    *var_22 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) var_4)) + (2147483647))) >> (((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) & (var_8))) - (1026ULL)))));
    *var_23 = ((/* implicit */val<unsigned char>) var_19);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-70;
unsigned short var_6 = (unsigned short)10108;
unsigned int var_7 = 1233335734U;
unsigned long long int var_8 = 14227920683677209623ULL;
unsigned int var_9 = 338637284U;
unsigned char var_11 = (unsigned char)215;
unsigned long long int var_14 = 10406277934905094262ULL;
unsigned short var_17 = (unsigned short)63720;
signed char var_19 = (signed char)-1;
int zero = 0;
unsigned char var_20 = (unsigned char)112;
bool var_21 = (bool)0;
unsigned char var_22 = (unsigned char)233;
unsigned char var_23 = (unsigned char)185;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)111;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (unsigned char)255;
    value_mismatch |= var_23 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, var_8, var_9, var_11, var_14, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
